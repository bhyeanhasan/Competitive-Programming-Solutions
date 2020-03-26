#include<bits/stdc++.h>

using namespace std;

int main()
{
    int from ,to ,lift ,stair_time ,lift_time ,lift_door ;

    int lift_res,stair_res;

    cin>>from>>to>>lift>>stair_time>>lift_time>>lift_door;

    stair_res = abs(from-to)*stair_time;
    lift_res = (abs(from-to)*lift_time)+(lift_door*3)+(abs(from-lift)*lift_time);

    if(stair_res<lift_res)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;

    return 0;
}
