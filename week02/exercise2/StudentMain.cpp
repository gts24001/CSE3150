#include <iostream>
#include "Student.h"
using namespace std;



int main() {
    Student student = get_student_struct_data();

    cout << student;

    cout << endl;

    return 0;
}

