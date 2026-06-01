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

  head->next = sec;
  sec->next = third;

  Node* temp = head;

  while(temp != NULL){
    cout << temp->data << " ";
    temp = temp->next;
  }

  return 0;
}