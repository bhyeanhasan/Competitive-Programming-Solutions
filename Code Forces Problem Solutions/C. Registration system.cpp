/*
    Md Babul Hasan (Noyen)
    Patuakhali Science and Technology University
    Faculty of Computer Science and Engineering
    16 th Batch (PSTU-CSE-2019)
    bhyean@gmail.com // B H Yean Hasan
*/

#include<bits/stdc++.h>
#define ll long long int
#define pi acos(-1)
#define vc vector<ll>
#define in(a) scanf("%d",&a)
#define srt(a) sort(a.begin(),a.end())
#define fr(i,n) for(ll i=0;i<n;i++)


using namespace std;

int main()
{


int i,j,n,k,l;
map<string,int>m;
string s;


	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>s;
		if(m[s]==0) cout<<"OK"<<endl;
		else cout<<s<<m[s]<<endl;
		m[s]++;
	}



    return 0;
}


