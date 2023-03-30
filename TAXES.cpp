#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n!=0){
	  int tax;
	  cin>>tax;
	  if(tax>100){
	      cout<<tax-10<<endl;
	  }
	  else if(tax==100){
	      cout<<tax<<endl;
	  }
	  else{
	      cout<<tax<<endl;
	  }
	 n--;
	}
	return 0;
}
