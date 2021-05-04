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
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0,c=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        float avg=sum/n;

        for(int i=0;i<n;i++)
        {
            if(arr[i]>avg)
            {
                c++;

            }
        }
        float fol=(c*1.00/n)*100;
        printf("%.3f%%\n",fol);

    }
}
