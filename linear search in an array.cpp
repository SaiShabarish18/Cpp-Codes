#include<iostream>
using namespace std;
int main(){
    int myArray[5];
    int n;
    cout<<"Enter the number of values to be inserted into an array\n";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter:\n";
        cin>>myArray[i];
    }
    int keyValue,pos=-1,i;
    cout<<"Enter the element to be searched\n";
    cin>>keyValue;
    for(i=0;i<n;i++){
        if(myArray[i]==keyValue){
            pos=i;
            cout<<"Position of Element in an array="<<pos<<endl;
        }
        }
        if(pos==-1){
            cout<<"Element not found!";
        }
      return 0;  
    }
