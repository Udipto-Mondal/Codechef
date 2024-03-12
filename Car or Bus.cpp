#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){

	    int x,y;
	    cin>>x>>y;
	    if(x>y)
	    cout<<"CAR"<<"\n";
	    else if (x==y)
	    cout<<"SAME"<<"\n";
	    else
	    cout<<"BIKE"<<"\n";
	}

}
