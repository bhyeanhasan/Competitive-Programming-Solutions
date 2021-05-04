
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);

    int n;
double part1,part2,five,sq;
cin >> n ;

part1 = pow((1.0+sqrt(5))/2.0,n);
part2 = pow((1.0-sqrt(5))/2.0,n);

printf("%.1f\n",(part1-part2)/sqrt(5));




    return 0;
}

