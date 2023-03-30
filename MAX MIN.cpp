#include <iostream>
//#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int high=max(a,max(b,c));
	     int least=min(a,min(b,c));
	    cout<<high-least<<endl;
	}
	return 0;
}
