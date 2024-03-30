#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    float a,b,x,y;
	    cin>>a>>b>>x>>y;
	    float c=a/x;
	    float d=b/y;
	    if(c<d) cout<<"Chef\n";
	    else if(c>d) cout<<"Chefina\n";
	    else cout<<"Both\n";
	}
}
