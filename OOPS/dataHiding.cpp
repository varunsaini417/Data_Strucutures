#include <iostream>

using namespace std;

class Rectangle{
    private:
        float length;
        float breadth;
    public:
        void setLength(float l){
            if(l>=0){
                this->length = l;
            }
            else{
                this->length = 0;
            }
        }
        void setBreadth(float b){
            if(b>=0){
                this->breadth = b;
            }
            else{
                this->length = 0;
            }
            
        }

        float getLength(){
            return this->length;
        }
        float getBreadth(){
            return this->breadth;
        }

        float area(){
            return this->length * this->breadth;
        }
        float perimeter(){
            return 2 + (this->length + this->breadth);
        }
        Rectangle(int l=0,int b=0){
            setLength(l);
            setBreadth(b);
        }
};

int main(){
    Rectangle *r1 = new Rectangle();
    r1->setLength(10);
    r1->setBreadth(-10);
    cout<< r1->area();
}