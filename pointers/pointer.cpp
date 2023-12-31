#include <iostream>
using namespace std;


int main(){
    int p =10;

    int &r = p;
    r++;   
    cout<< &p<<endl <<&r ;
}