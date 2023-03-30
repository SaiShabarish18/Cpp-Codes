#include<iostream>
using namespace std;
int main(){
    float height, weight;
    cout<<"Enter height(m) and weight(kg)"<<endl;
    cin>>height>>weight;
    float BMI=weight/(height*height);
    if(BMI<18.5){
        cout<<"under weight."<<endl;
    } else{
        if(BMI>25){
            cout<<"over weight.\n";
        } else{
            cout<<"normal weight.\n";
        }
    }
    cout<<"BMI="<<BMI<<endl;
    return 0;
}
