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

int count(Node *c){
    int counting= 0;
    while(c!=NULL){
        counting++;
        c=c->next;
    }
    return counting;
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


void insert(Node *p, int index, int value){
    Node *t;
    if(index<0 || index > count(p)){
        return;
    }
    t= new Node;
    t->data=value;
    if(index == 0){
        t->next = first;
        first=t;
    }else{
        for(int i=0;i<index-1;i++){
            p=p->next;
            
        }
        t->next = p->next;
        p->next = t;
    }
}

int main(){
    // int A[]= {1,2,3};
    // create(A,3);
    // display(first);
    // Node * temp = ASearch(first, 3);
    // if(temp){
    //     cout<<"\n"<<"Element founded and pushed to  the first node!!"<<"\n";
    //     display(first);
    // }else{
    //     cout<<"\n"<<"Not Found"<<"\n";
    // }
    // count(first);

    insert(first, 0 ,20);
    // cout<<"\n";
    display(first);
    return 0;
}