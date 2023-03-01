#ifndef REVISEDGRADECALC_GRADEFUNCTION_H
#define REVISEDGRADECALC_GRADEFUNCTION_H

#endif //REVISEDGRADECALC_GRADEFUNCTION_H

struct Student;

int getGrades(int& quit, int& loopCondition);

double dropLowest();

int getGrade();

struct Student{
    int grade_level = 0;
    std::string first_name = " ";
    std::string last_name = " ";
    int final_grade = getGrade();
    std::string final_letter_grade = " ";
}student;

std::string getLetterGrade(int& finalGrade);

void quitGrading(int& quit, int& loopCondition);

void printGradeSummary(double& lowestScore ,int& finalGrade, std::string& letterGrade);

void getStudentInfo(Student,std::string& letterGrade,int& finalGrade);

void printFinalMessage(Student);
