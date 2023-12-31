#include <iostream>
using namespace std;


int main(){
    char s[10];
    cout<<"Enter your name: ";
    cin.get(s,11);
    cout<<"welcome!!: "<<s<<endl;
    cin.ignore();
    char s2[20];
    cout<<"Enter your name again: ";
    cin.get(s2,20);
    cout<<"welcome!!: "<<s2;
}
