#include <iostream>
#include <string>
#include "Student.h"

Student get_student_struct_data() {

    Student student;
    cout << "Enter student name: ";
    string name;
    cin >> name;
    student.set_name(name);
    cout << "Enter midterm grade: ";
    cin >> student.midterm;
    cout << "Enter final grade: ";
    cin >> student.final;
    cout << "Enter homework grades (end with -1): ";
    int grade;
    while (cin >> grade && grade != -1) {
        student.hw_grades.push_back(grade);
    }

    return student;
}

ostream & operator<<(ostream &os, const Student & student) {

    os  << student.get_name() 
        << " Midterm: " 
        << student.midterm 
        << " Final: " 
        << student.final
        << " Homework Grades: ";
    for (auto score : student.hw_grades) {
        os  << score 
            << " ";
    }
    

    os << "\n";
    return os;
}