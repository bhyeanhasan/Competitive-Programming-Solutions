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
    int n,count=0;
    cin>>n;

    int valu = n-1;
    int x=n/2;
    int arr[n][n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    int extra =arr[x][x]*3;



    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j==valu)
            {
                count+=arr[i][j];
                valu--;
            }



            if(i==j){
                count+=arr[i][j];
            }

            if(j==x)
            {
                count+=arr[i][j];
            }
            if(i==x)
            {
                count+=arr[i][j];
            }

        }
    }


    cout<<count-extra;






    return 0;
}
