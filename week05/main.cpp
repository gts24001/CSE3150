#include <iostream>
#include "Node.h"
#include "linked_list.h"

using namespace std;

int main() {
    LinkedList linkedList;

    for (int i = 0; i < 5; i++) {
        linkedList.insertInFront(i);
    }


    linkedList.insertInFront(10);
    linkedList.insertInFront(20);
    linkedList.insertInFront(30);
    
    cout << "Linked List: " << linkedList << endl;

    return 0;
}

// Run Command: g++ -std=c++14 main.cpp -o main
//              valgrind ./main