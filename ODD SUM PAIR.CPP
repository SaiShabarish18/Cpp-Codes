#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    if(x%2==0 && y%2!=0){
	        cout<<"yes"<<endl;
	    }
	    else if(x%2==0 && z%2!=0){
	        cout<<"yes"<<endl;
	    }
	    else if(y%2==0 && z%2!=0){
	        cout<<"yes"<<endl;
	    }
	    else if(y%2!=0 && z%2==0){
	        cout<<"yes"<<endl;
	    }
	    else if(x%2!=0 && y%2==0){
	        cout<<"yes"<<endl;
	    }
	    else if(x%2!=0 && z%2==0){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}

//Optimised code

#include <iostream>
using namespace std;

int main() {
	int y,u,i,o,p,total1,total2;
	
	cin>>u;
	for(i=0;i<u;i++){
	    cin>>o>>p>>y;
	    total1=o+p;
	    total2=p+y;
	    
	    if(total1%2==0  && total2%2==0){
	        cout<<"NO\n";
	    }
	    else{
	        cout<<"YES\n";
	    }
	}
	return 0;
}
