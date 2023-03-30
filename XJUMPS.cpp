#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int rem= a%b;
	    cout<<((a/b) + rem)<<endl;
	}
	return 0;
}
