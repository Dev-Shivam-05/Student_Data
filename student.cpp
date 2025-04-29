#include <iostream>
using namespace std;

class Student
{
private:
    string std_name;
    int std_rollNo;
    double std_percentage;
    char std_grade;

public:
    void setStudent(
        string std_name,
        int std_rollNo,
        double std_percentage,
        char std_grade)
    {
        this->std_name = std_name;
        this->std_rollNo = std_rollNo;
        this->std_percentage = std_percentage;
        this->std_grade = std_grade;
    }

    void getStudent()
    {
        cout << endl << "Student Name Is :- " << std_name << endl;
        cout << "Student Roll No Is :- " << std_rollNo << endl;
        cout << "Student Percentage Is :- " << std_percentage << endl;
        cout << "Student Grade Is :- " << std_grade << endl << endl;
    }
};

int main()
{
    int size;
    int std_rollNo, maths_marks, science_marks, hindi_marks, social_science_marks, general_knowledge_marks, total_marks;
    string std_name;
    double std_percentage;
    char std_grade;

    cout << "Enter The Size Of Class :- ";
    cin >> size;

    Student std[size];
    for (int i = 0; i < size; i++)
    {
        cout << endl << "Enter Detail For Student :- " << endl;
        cout << "Enter Student Name :- ";
        cin >> std_name;
        cout << "Enter Student RollNo :- ";
        cin >> std_rollNo;
        cout << "Marks Obtained In Maths :- ";
        cin >> maths_marks;
        cout << "Marks Obtained In Science :- ";
        cin >> science_marks;
        cout << "Marks Obtained In Hindi :- ";
        cin >> hindi_marks;
        cout << "Marks Obtained In Social-Science :- ";
        cin >> social_science_marks;
        cout << "Marks Obtained In General Knowledge :- ";
        cin >> general_knowledge_marks;

        total_marks = maths_marks + science_marks + hindi_marks + social_science_marks + general_knowledge_marks;
        std_percentage = (total_marks / 500.0) * 100;

        if (std_percentage > 0 && std_percentage < 100)
        {
            if (std_percentage > 85)
            {
                std_grade = 'A';
            }
            else if (std_percentage > 70)
            {
                std_grade = 'B';
            }
            else if (std_percentage > 55)
            {
                std_grade = 'C';
            }
            else if (std_percentage > 35)
            {
                std_grade = 'D';
            }
            else
            {
                std_grade = 'F';
                
            }
        }
        else
        {
            cout << "Wrong Input For Marks.";
        }
        std[i].setStudent(std_name,std_rollNo,std_percentage,std_grade);
    }

    for (int i = 0; i < size; i++)
    {
        std[i].getStudent();
    }
    

    return 0;
}