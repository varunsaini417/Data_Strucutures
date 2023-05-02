#include<iostream>

using namespace std;
//stucture of the linked list
struct Node{
    int data;
    Node *next;
}*first=NULL;

void create(int A[], int n){
    Node *t,*last;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last=first;

    for(int i=1; i<n;i++){
        t= new Node;
        t->data =A[i];
        t->next = NULL;
        last->next = t;
        last=t;
    }
}

void display(Node *p){
    while (p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
};

Node * ASearch(Node *a,int key){
    Node *q;
    while(a!=NULL){
        if(a->data == key){
            q->next = a->next;
            a->next = first;
            first = a;
            return a;
        }
        q=a;
        a=a->next;
    }
    return NULL;
}

int main(){
    int A[]= {1,2,3,4,5,6};
    create(A,6);
    display(first);
    Node * temp = ASearch(first, 3);
    if(temp){
        cout<<"\n"<<"Element founded and pushed to  the first node!!"<<"\n";
    }else{
        cout<<"\n"<<"Not Found";
    }
    
    display(first);
    return 0;
}