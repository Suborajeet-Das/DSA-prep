//insertion at the beginning of a ll

#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* next;

  public:
  Node(int data1){
    data = data1;
    next = nullptr;
  }
};

int main(){

  Node* head = new Node(10);
  Node* sec = new Node(20);
  Node* third = new Node(30);
  Node*temp = head;

  
  head->next = sec;
  sec->next = third;
  
  cout << "linkedlist before insertion :" << endl;
  while(temp != NULL){
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
  
  Node* begin = new Node(100);
  begin->next = head;
  head = begin;
  temp = head;

  cout << "linkedlist after insertion :" << endl;

  while(temp != NULL){
    cout << temp->data << " ";
    temp = temp->next;
  }

  return 0;
}