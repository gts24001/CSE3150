#include <iostream>
#include <string>

#include "Student.h"

using namespace std;

Student load_student() {

    Student student;

    string name;
    int number;

    while (cin >> name) {


        student.name = name;

        cout << "Enter student number for: " << name << endl;
        cin >> number;

        student.number = number;

        cout << "Enter another student: (^D to stop)" << endl;
    }

    return student;
}


ostream & operator<<(ostream & os, const Student & student) {
    os  << student.name
        << " "
        << student.number
        << " ";
        for (int i=0; i < student.getTotal_assignments(); i++) {
            os << student.getAssignmentScore(i)
               << " ";
        }

        return os;
};


