#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
   ll T,N,E,u,v,i,j,k,C=0,sum=0,ck=0,x,y;
   string S,S1;
   double d1,d2,d3;

   cin>>N;
   ll A[N];

   for(i=0;i<N;i++)
   {
      cin>>A[i];

      if(A[i]==1) C++;
   }

   for(i=0;i<N;i++)
   {
      ll ans=C;
      for(j=i;j<N;j++)
      {
         if(A[j]==1) ans--;

         else ans++;

         ck=max(ck,ans);

      }
   }
   cout<<ck<<endl;
}
