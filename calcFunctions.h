#ifndef REVISEDGRADECALC_CALCFUNCTIONS_H
#define REVISEDGRADECALC_CALCFUNCTIONS_H

#endif //REVISEDGRADECALC_CALCFUNCTIONS_H

#include <iostream>
#include <cmath>
#include <array>
#include <iterator>
#include "gradefunction.h"

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

///get 11 grades from user within the correct range of 0-100.
int getGrades(int& quit, int& loopCondition) {
    for (int i = 0; i<=10; i++){                // loop to get grade values from user.
        cout << "enter quiz " << i+1 << " grade here: ";
        cin >> grades[i];
        cout <<
             "-------------------------------------------------------------------------------------------"
             << endl;
        if (grades[i] >= 0 && grades[i] <= 100){
            cout << "...grade entered...";
            cout << endl << endl;
        }
        else                                    // in the case of an invalid input, don't exit the loop.
        {
            if (grades[i]<0 || grades[i]>100){
                cout << "that is an invalid grade range. Please try again" << std::endl << std::endl;
                grades[i]=0;
                i-=1;
            }
        }
    }
    return 1;
}

///sorts the array and turns the lowest grade into a 0  dropping it from the calculation
double dropLowest(){
    std::sort(grades.begin(), grades.end()); //after sort assign index 0 to be lowest
    double lowestScore = grades[0];
    return lowestScore;
}

///calculate and print the final letter grade based on the entered quiz grades.
int getGrade() {
    double totalScore=0;
    for(int i = 0; i < QUIZES; i++){
        totalScore+=grades[i+1];
    }
    int finalGrade = trunc(totalScore/(QUIZES-1));
    return finalGrade;
}

std::string getLetterGrade(int& finalGrade) {
    std::string letterGrade;
    if (finalGrade >= 90){
        letterGrade = "A";
    }
    else if (finalGrade >= 80){
        letterGrade = "B";
    }
    else if (finalGrade >= 70){
        letterGrade = "C";
    }
    else if (finalGrade >= 60 and finalGrade <= 69){
        letterGrade = "D";
    }
    else if (finalGrade >= 0 and finalGrade <= 59){
        letterGrade = "F";
    }
    else{
        cout << "It seems I cannot determine your letter grade." << endl;
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
}

void printGradeSummary(double& lowestScore ,int& finalGrade, std::string& letterGrade) {
    cout <<
         "=========================================================================================="
         << endl;
    cout << "|" <<"GRADE SUMMARY                                                                           |" << endl;
    cout << "|" <<"Your lowest Score is: " << lowestScore <<
         "                                                                 |" << endl;
    cout << "|" <<"Your final grade is: " << finalGrade <<
         "                                                                 |" << endl;
    cout << "|" <<"Your letter grade is: " << letterGrade <<
         "                                                                 |" << endl;
    cout <<
         "=========================================================================================="
         << endl << endl;
}

void printFinalMessage(student new_student) {
    cout << "\nThank you " << new_student.first_name +" "+new_student.last_name << ", the final grade for the semester is a(n) "
    << new_student.final_letter_grade << " at " << new_student.final_grade <<"%";
    cout << "\nyour major is: " << new_student.major << "\nyour grade level is: " << new_student.grade_level;
}

