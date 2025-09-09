// LINKED LIST : 


#include<iostream>
using namespace std;

class Node{
public:
    // Code of an Indivisual Node : 
    int data;
    Node* next;  // Next Pointer will store address of next node.

    Node(int val){
        data = val;
        next = NULL;
    }
};