#ifndef _NODE_H_
#define _NODE_H_
#include <iostream>

using namespace std;


struct Node {
    
    int data;
    Node* next;

    // Default Constructors
    Node() : data{0}, next(nullptr) {}
    
    // Parameterized constructor
    Node(int _data) : data{_data}, next(nullptr) {}
    
};  

#endif