#ifndef __STUDENT_H
#define __STUDENT_H

#pragma once
//#include <iosfwd>


#include <string>

using namespace std;

struct Student;

Student load_student();

struct Student {

    Student() {}
    Student(string name, int number, int total_assignments) {
        name = name;
        number = number;
        total_assignments = total_assignments;

        assignment_scores = new int[total_assignments];
    }

    int getTotal_assignments() const {
        return total_assignments;
    }

    int getAssignmentScore(int i) const {
        return assignment_scores[i];
    }

    string name;
    int number;
    int *assignment_scores;

    
    int total_assignments;
    

};



ostream& operator<<(std::ostream& os, const Student& s);


#endif