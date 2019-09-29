#include <bits/stdc++.h>
using namespace std;
int main(){

    int a[3];
    while(cin>>a[0]>>a[1]>>a[2]){

    int frag=0;
    sort(a,a+3);
    int check=a[0];
    if(pow(a[2],2)==pow(a[1],2)+pow(a[0],2)){
        while(check>1)
        {
            if((a[0]%check==0)&&(a[1]%check==0)&&(a[2]%check==0))
                frag=1;
            check--;
        }
            if(frag==0)
            cout<<"tripla pitagorica primitivan";
    else
            cout<<"tripla pitagorican";
        }
        else
            cout<<"triplan";

    }
    return 0;
}
