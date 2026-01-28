#ifndef _SIMPLE_STUDENT_H
#define _SIMPLE_STUDENT_H

#include <string>
#include <iostream>
#include <vector>

using namespace std;

struct Student {

    public: 
        int final;
        int midterm;
        vector<int> hw_grades;

    private: 
        string name;

    public:
        string get_name() const { return name; }
        void set_name(const string& name) { this->name = name; }
};


ostream & operator<<(ostream &os, const Student & student);

Student get_student_struct_data();

#endif