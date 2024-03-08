#include<bits/stdc++.h>
using namespace std;
int main (){
int t;
cin>>t;
while(t--){
    int n,x;
    cin>>n>>x;

    int s=(n*x);
    int z=(s/4);
    if (z%4==0){
    cout<<z<<"\n";
    }
    else
    cout<<z+1<<"\n";
}

return 0;
}
