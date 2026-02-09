#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node (int value){
        data = value;
        next = NULL;

    }
};
int main (){
    int arr[5] = {1,2,3,4,5};

Node *Head;
Head = NULL;
// cout<<Head->data<<endl;
// cout<<Head->next<<endl;

for (int i=0; i<5;i++){
if (Head == NULL){
    Head = new Node(arr[i]);

}
else{
    Node *Tail = Head;
    while(Tail->next != NULL){
        Tail = Tail->next;
    }
    Node*temp;
    temp = new Node(arr[i]);
    Tail->next = temp;

    }}
    Node *temp = Head;
while(temp!= NULL){
cout<<temp -> data;
temp = temp->next;
}}