#include <iostream>

using namespace std;

int main(){
    int x = 10;
    int &y = x;
    x++;
    cout<<y;

    return 0;
}