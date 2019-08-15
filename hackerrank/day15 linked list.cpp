#include <iostream>
#include <cstddef>
using namespace std;	
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:

      Node* insert(Node *head,int data)
      {
        if(head==NULL){
            head = new Node(data);  //imp step
        }
        else{
            Node* curr= head;
            while(curr->next!=NULL){
                curr = curr->next;
            }
            curr->next  = new Node(data);
            // curr->data = data;
            // curr->next = NULL;
        }
          return head;
      }

      void display(Node *head)