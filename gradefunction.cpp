#include <iostream>
#include <cmath>
#include <array>
#include <iterator>

using std::cout;
using std::cin;
using std::endl;
using std::trunc;
//______________________________________________________________________________________________________________________
//Constants
int const QUIZES = 11;
//______________________________________________________________________________________________________________________
//Arrays
std::array<double, 10> grades = {};// my array for storing inputs
//______________________________________________________________________________________________________________________
//Structures
struct Student;
//______________________________________________________________________________________________________________________
//Functions
int getGrades(int& quit, int& loopCondition);
int dropLowest();
std::string getLetterGrade();
void quitGrading(int& quit, int& loopCondition);
void getStudentInfo(std::string& letterGrade,int& finalGrade);
//______________________________________________________________________________________________________________________

/**
 * main function: introduction & calls to other functions loops until user exits.
 * goals: take 11 inputted grades, check those inputs against a series of conditions, based on conditions met provide an
 * appropriate response,drop the lowest of the entered grades, and calculate a final grade along with a corresponding
 * letter grade.
**/

///get 11 grades from user within the correct range of 0-100.
int getGrades(int& quit, int& loopCondition) {
    for (int i = 0; i<=10; i++){                // loop to get grade values from user.
        cout << "enter quiz " << i+1 << " grade here: ";
        cin >> grades[i];
        cout <<
             "-------------------------------------------------------------------------------------------"
             << endl;
        if (grades[i] >= 0 and grades[i] <= 100){
            cout << "...grade entered...";
            cout << endl;
        }
        else                                    // in the case of an invalid input, don't exit the loop.
        {
            if (grades[i]<0 || grades[i]>100){
                cout << "that is an invalid grade range. Please try again" << std::endl << std::endl;
                i-=1;
            }
        }
    }
    return 1;
}

///sorts the array and turns the lowest grade into a 0  dropping it from the calculation
int dropLowest(){
    std::sort(grades.begin(), grades.end()); //after sort assign index 0 to be lowest
    double lowestScore = grades[0];
    // search num in inputArray from index 0 to elementCount-1
    cout << "Lowest Score is: " << lowestScore << endl;
    for(int i = 0; i < QUIZES; i++){
        if (lowestScore == grades[0]){
            grades[0]=0;
            lowestScore = 0;
            i=100;
        }
    }
    return 2;
}

///calculate and print the final letter grade based on the entered quiz grades.
std::string getLetterGrade() {
    std::string letterGrade;
    double totalScore=0;
    for(int i = 0; i < QUIZES; i++){
        totalScore+=grades[i];
    }
    int finalGrade = trunc(totalScore/(QUIZES-1));

    cout << "Your final grade is: " << finalGrade << endl;
    if (finalGrade >= 90){
        cout << "Your letter grade is an A";
        letterGrade = "A";
    }
    else if (finalGrade >= 80){
        cout << "Your letter grade is a B";
        letterGrade = "B";
    }
    else if (finalGrade >= 70){
        cout << "Your letter grade is a C";
        letterGrade = "C";
    }
    else if (finalGrade >= 60 and finalGrade <= 69){
        cout << "Your letter grade is a D";
        letterGrade = "D";
    }
    else if (finalGrade >= 0 and finalGrade <= 59){
        cout << "Your letter grade is an F";
        letterGrade = "F";
    }
    else{
        cout << "It seems I cannot determine your letter grade.";
        letterGrade = "N/A";
    }
    return letterGrade;
}

///Displays quit message and updates loop condition to exit the loop.
void quitGrading(int& quit,int& loopCondition){
    if (quit == 0){
        cout << endl << "Thank you for using our product!";
        loopCondition = 0;
    }
    else if (quit == 1){
        cout << endl <<"Sorry you had to quit early. Thank you for using our product!";
        loopCondition = 0;
    }
    /*
    else if (quit == -1){
        cout << "An error occurred, please try again.";
    }
    */

    /*
     * This function might not meet the requirements, but I have most of my inputs in checks and loops to get valid
     * responses from the user. I thought it would be better to have the user try the input again to get it right rather
     * than just quiting the program altogether if they accidentally add an extra 0.
     * I also don't know if you wanted us to ask the user after every input if they wanted to continue, or just wait
     * until the end for that; I assumed the latter.
     * the end early check is still a WIP, I just couldn't figure it out atm.
     */
}
void getStudentInfo(std::string& letterGrade,int& finalGrade){
    cout << "enter student grade level: " << endl;
    cout << "enter student's name: " << endl;
    struct Student{
        int grade_level = 0;
        std::string full_name;
        int final_grade = finalGrade;
        std::string final_letter_grade;
    };
}