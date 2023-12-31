#include<iostream>

using namespace std;

struct Node{
    int data;
    Node *next;
}*first=nullptr;

void create(int A[], int n){
    Node *t, *last;
    first = new Node;
    first->data = A[0];
    first->next = nullptr;
    last = first;

    for(int i=1; i<n;i++){
        t= new Node;
        t->data = A[i];
        t->next = nullptr;
        last->next = t;
        last = t;
    }
}

void display(Node *p){
    while(p!=nullptr){
        cout<<p->data<<"\n";
        p=p->next;
    }
}

int main(){
    int A[]= {1,2,3,4,5,6};
    create(A,6);
    display(first); 
    return 0;
}