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
#include <array>
#include <iterator>
#include "cmake-build-debug/gradefunction.h"

using std::cout;
using std::cin;
using std::endl;
using std::trunc;
//______________________________________________________________________________________________________________________
/**
 * main function: introduction & calls to other functions loops until user exits.
 * goals: take 11 inputted grades, check those inputs against a series of conditions, based on conditions met provide an
 * appropriate response,drop the lowest of the entered grades, and calculate a final grade along with a corresponding
 * letter grade.
**/
int main() {
    int loopCondition = 0;
    do {
        cout << "This is a grade calculator." << endl;
        cout << "Please enter your quiz grades below and a Letter Grade will be assigned to you." << endl << endl;
        int quit = 0;
        getGrades(quit, loopCondition);
        dropLowest();
        getGrade();

        int finalGrade = getGrade(); //get finalGrade in main
        getLetterGrade(finalGrade);

        std::string letterGrade = getLetterGrade(finalGrade); //get letterGrade in main
        double lowestScore = dropLowest(); //get lowestScore in main
        printGradeSummary(lowestScore,finalGrade,letterGrade); //print grade info

        getStudentInfo(student);
        //std::string fullName = getStudentInfo(letterGrade, finalGrade);
        printFinalMessage(student);


        cout << endl << endl <<"would you like to continue grading? \n";
        cout << "(yes=1 or no=0): ";
        int gradeMore = 0;
        cin >> gradeMore;

        if (gradeMore == 1){
            cout << "generating a new grade sheet..." << endl << endl;
            loopCondition = 1;
        }
        else if (gradeMore == 0){
           //int quit=0
            quitGrading(quit,loopCondition);
        }
    }while (loopCondition != 0);
    return 0;
}