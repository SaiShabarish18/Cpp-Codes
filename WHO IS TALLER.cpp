#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	   int alice,bob;
	   cin>>alice>>bob;
	   if(alice>bob){
	       cout<<"A"<<endl;
	   }
	   else{
	       cout<<"B"<<endl;
	   }
	}
	return 0;
}
