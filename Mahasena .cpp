#include <bits/stdc++.h>
using namespace std;

int main() {
int t,count1=0,count2=0;
cin>>t;
while(t--){
    int X;
    cin>>X;
    if ( X%2==0)

        count1++;
        else

            count2++;

}
if (count1>count2)
  cout<<"READY FOR BATTLE"<<"\n";
  else
    cout<<"NOT READY"<<"\n";


return 0;
}

