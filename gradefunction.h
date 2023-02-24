//
// Created by Brandon's PC on 2/21/2023.
//

#ifndef REVISEDGRADECALC_GRADEFUNCTION_H
#define REVISEDGRADECALC_GRADEFUNCTION_H

#endif //REVISEDGRADECALC_GRADEFUNCTION_H

struct Student;

int getGrades(int& quit, int& loopCondition);

double dropLowest();

int getGrade();

std::string getLetterGrade(int& finalGrade);

void quitGrading(int& quit, int& loopCondition);

void printGradeSummary(double& lowestScore ,int& finalGrade, std::string& letterGrade);

void getStudentInfo(Student);

void printFinalMessage(Student);
struct Student{
    int grade_level = 0;
    std::string first_name = " ";
    std::string last_name = " ";
    std::string student_full_name = first_name + " " + last_name;
    int final_grade = getGrade();
    std::string final_letter_grade = " ";
}student;