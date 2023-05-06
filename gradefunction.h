#ifndef REVISEDGRADECALC_GRADEFUNCTION_H
#define REVISEDGRADECALC_GRADEFUNCTION_H

#endif //REVISEDGRADECALC_GRADEFUNCTION_H

struct Student;

int getGrades(int& quit, int& loopCondition);

double dropLowest();

int getGrade();

//I don't think I need this right? using class instead
struct Student{
    int grade_level = 0;
    std::string first_name = " ";
    std::string last_name = " ";
    int final_grade = getGrade();
    std::string final_letter_grade = " ";
}studentStruct;
//----------------------------------------------------

std::string getLetterGrade(int& finalGrade);

void quitGrading(int& quit, int& loopCondition);

void printGradeSummary(double& lowestScore ,int& finalGrade, std::string& letterGrade);

class student{
public:
    std::string first_name = " ";
    std::string last_name = " ";
    std::string grade_level = "sophomore";
    std::string major = "computer science";

    std::string get_first_name(student new_student){
        std::cout << "\nenter the student's first name: ";
        std::cin >> new_student.first_name;
        first_name = new_student.first_name;
        return first_name;
    }
    std::string get_last_name(student new_student){
        std::cout << "\nenter the student's last name: ";
        std::cin >> new_student.last_name;
        last_name = new_student.last_name;
        return last_name;
    }

    std::string get_grade_level(){
        std::cout << "\n enter student's grade level: ";
        std::cin >> grade_level;
        return grade_level;
    }
    std::string get_major(){
        std::cout << "\n enter student's major: ";
        std::cin >> major;
        return major;
    }

    int final_grade = getGrade();
    std::string final_letter_grade = getLetterGrade(final_grade);
};

void printFinalMessage(student new_student);