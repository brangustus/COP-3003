/***********************************************************************************************************************
 * Name: Brandon A Johnson
 * Course Name: COP 3003
 * Course Number: CRN 15050
 **********************************************************************************************************************/
// this Program rounds 11 inputted grades and calculates an average final grade and displays it to the user.
//sources of help:
/*
 * https://www.techcrashcourse.com/2017/01/cpp-program-to-find-minimum-array-element.html#:~:text=Algorithm%20to%20find
 * %20smallest%20element%20of%20array&text=Initialize%20one%20variables%20minElement%20with,update%20minElement%20with
 * %20current%20element.
 */

#include <iostream>
#include <cmath>
#include <stdlib.h>

using std::cout;
using std::cin;
using std::trunc;
//______________________________________________________________________________________________________________________
//Constants
int const QUIZES = 11;
//______________________________________________________________________________________________________________________
//Functions
int getGrade();
int getLetterGrade();
//int dropLowest();
//______________________________________________________________________________________________________________________
double totalScore = 0; //I don't really know where to put these, I don't think I'm supposed to have them out here though
double grades[10] = {};// my array for storing inputs
//int lowestScore = 0;

///main function: introduction & calls to other functions
int main() {
    cout << "This is a grade calculator." << std::endl;
    cout << "Please enter your quiz grades below and a Letter Grade will be assigned to you." << std::endl << std::endl;
    getGrade();
    getLetterGrade();
    //dropLowest();
    double min = grades[0];
    // search num in inputArray from index 0 to elementCount-1
    for(int i = 0; i < QUIZES; i++){
        if(grades[i] < min){
            min = grades[i];
        }
    }
    cout  << "Minimum Element\n" << min;

    return 0;
}

///get 11 grades from user within the correct range of 0-100.
int getGrade() {
    for (int i = 0; i<=10; i++){                // loop to get grade values from user.
        cout << "enter quiz " << i+1 << " grade here: ";
        cin >> grades[i];
        cout <<
             "-------------------------------------------------------------------------------------------"
             << std::endl;
        if (grades[i] >= 0 and grades[i] <= 100)
        {
            trunc(grades[i]);
            totalScore = totalScore + grades[i];
        }
        else                                    // in the case of an invalid input, don't exit the loop.
        {
            cout << "that is an invalid grade range. Please try again" << std::endl << std::endl;
            i-=1;
        }
    }
    return 1;
}



///calculate and print the final letter grade based on the entered quiz grades.
int getLetterGrade() {
    float finalGrade = trunc(totalScore/QUIZES);
    cout << "Your final grade is: " << finalGrade << std::endl;
    if (finalGrade >= 90){
        cout << "Your letter grade is an A";
    }
    else if (finalGrade >= 80 and finalGrade <= 89){
        cout << "Your letter grade is a B";
    }
    else if (finalGrade >= 70 and finalGrade <= 79){
        cout << "Your letter grade is a C";
    }
    else if (finalGrade >= 60 and finalGrade <= 69){
        cout << "Your letter grade is a D";
    }
    else if (finalGrade >= 0 and finalGrade <= 59){
        cout << "Your letter grade is an F";
    }
    else{
        cout << "It seems I cannot determine your letter grade.";
    }\

    return 2;
}

/*
int dropLowest() {
    int lowestScore = grades[0];
    for (int i = 0; i<=1000; i++) {                // loop to get grade values from user.
    if (grades[i] >= grades[i+1]) {
        lowestScore = grades[i];
    }
    else {
        lowestScore = grades[i];
    }
    }
    cout << std::endl << "lowest score is " << lowestScore;
    return 3;
}
*/
/*
int dropLowest() {
    int smallest = INT_MAX;
    for (int i = 0; i < grades_length; i++) {
        if (grades[i] < smallest) {
            smallest = grades[i];
        }
    }

}
*/





