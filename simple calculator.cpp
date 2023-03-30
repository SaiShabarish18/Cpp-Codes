#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Input two numbers:"<<endl;
    cin>>a>>b;
    char op;
    cout<<"input an operator:"<<endl;
    cin>>op;
    switch(op){
        case '+':
        
        cout<<"sum = "<<a+b<<endl;
        break;
        case '-':
        
        cout<<"subtraction = "<<a-b<<endl;
        break;
        case '*':
      
        cout<<"product = "<<a*b<<endl;
        break;
        case '/':
        
        cout<<"division = "<<a/b<<endl;
        break;
        
        default:
        cout<<"This calculator can perform only simple arithematic operations:"<<endl;
        break;
    }
    return 0;
}
