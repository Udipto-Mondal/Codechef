#include <iostream>
using namespace std;
#include <cmath>

int main() {
int t ;
cin>>t;
while(t--)
{
    double n,x;
    cin>>n>>x;
    if(n!=1){
    double s=ceil(n/6);
    cout<<(s*x)<<endl;
    }
    else
    cout <<n*x<<endl;
}

	return 0;
}
