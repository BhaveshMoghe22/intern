#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class calculator
{
    private:
    float n1,n2;
    public:
    calculator();
    void get();
    void add();
    void sub();
    void mul();
    void div();
};
calculator::calculator()
{
    n1 = 0;
    n2 = 0;
}
void calculator::add()
{
    cout<<n1<<"+"<<n2<<"="<<n1+n2<<endl;
}
void calculator::get()
{
    cout<<"enter two numbers ";
    cin>>n1>>n2;
}
void calculator::sub(){
    cout<<n1<<"-"<<n2<<"="<<n1-n2<<endl;
}
void calculator::mul(){
    cout<<n1<<"*"<<n2<<"="<<n1*n2<<endl;
}
void calculator::div(){
    cout<<n1<<"/"<<n2<<"="<<n1/n2<<endl;
}
int main(){
    int ch;
    calculator obj;
    
    
    do
    {
        cout<<"enter your choich"<<endl<<"enter 1 for addition"<<endl<<"enter 2 for subtraction"<<endl<<"enter 3 for multipication"<<endl<<"enter 4 for division"<<endl<<"enter 0 for exit"<<endl;
        cin>>ch;
        switch (ch)
        {
        case 1:obj.get(); obj.add();
            break;
        case 2:obj.get(); obj.sub();
            break;
        case 3: obj.get();obj.mul();
            break;
        case 4:obj.get(); obj.div();
            break;
        case 0 : exit(0);
        
        default: cout<<"wrong choise";
            break;
        }
    } while (ch>=1&&ch<=4);
    getch();
    return 0;
    
}
