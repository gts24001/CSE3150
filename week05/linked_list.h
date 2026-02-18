#ifndef _LiNKED_LIST_H_
#define _LiNKED_LIST_H_

#include <iostream>
#include "Node.h"

using namespace std;


class LinkedList {
    

    public: 
        Node * root;

        friend ostream & operator<<(ostream & os, const LinkedList & list);


// Default constructor
        LinkedList() : root(nullptr) {}


// Insert a new node at the front of the list
        void insertInFront(int _data) {
            Node* insertNode = new Node(_data);
            insertNode->next = root;
            root = insertNode;
        }


// Destructor to free memory
        ~LinkedList() {

            // If the list is empty, there's nothing to free
            if (!root) return;

            // Traverse the list and delete each node
            Node* current = root;

            // Loop through the list until we reach the end
            while(current != nullptr) {
                Node* temp = current; // Store the current node in a temporary variable
                current = current->next; // Move to the next node
                delete temp; // Free the memory allocated for the current node
            }
        }


}; 

ostream & operator<<(ostream & os, const Node & node) {
    os << node.data;
    return os;
}

ostream & operator<<(ostream & os, const LinkedList & list) {

    Node* current = list.root;
    while(current != nullptr) {
        os << *current << " -> ";
        current = current->next;
    }
    os << "nullptr";
    return os;
}

#endif