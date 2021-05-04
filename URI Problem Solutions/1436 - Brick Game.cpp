/*
    Md Babul Hasan (Noyen)
    Patuakhali Science and Technology University
    Faculty of Computer Science and Engineering
    16 th Batch (PSTU-CSE-2019)
    bhyean@gmail.com // B H Yean Hasan
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int j=1;
    while(j<=n)
    {
        int x;
        cin>>x;
        int arr[x];
        for(int i=0;i<x;i++)
        {
            cin>>arr[i];
        }
        printf("Case %d: %d\n",j,arr[x/2]);
        j++;
    }
    return 0;
}
