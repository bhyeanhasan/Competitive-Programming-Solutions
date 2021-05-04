
/*
    Md Babul Hasan (Noyen)
    Patuakhali Science and Technology University
    Faculty of Computer Science and Engineering
    16 th Batch (PSTU-CSE-2019)
    bhyean@gmail.com // B H Yean Hasan
*/

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);

    int n,x,count=0;
    cin>>n>>x;

    for(int i=1;i<=n;i++){
      if(x%i==0 && x/i<=n){
         count++;
      }
  }
  cout<<count;


    return 0;
}







