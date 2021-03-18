#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
   int x=0,y=0,z=0;
   for(int i=0;i<n;i++){
       int xi,yi,zi;
       cin>>xi;
       x+=xi;
       cin>>yi;
       y+=yi;
       cin>>zi;
       z+=zi;
   }
   if(x==0 && y==0 && z==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
return 0;
}