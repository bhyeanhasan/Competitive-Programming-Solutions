/*
    Md Babul Hasan (Noyen)
    Patuakhali Science and Technology University
    Faculty of Computer Science and Engineering
    16 th Batch (PSTU-CSE-2019)
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b,c,d,x,s;
    a="esquerda";
    b="direita";
    c="nenhuma";
    d="as";
    while(cin>>s){
    if(s.compare(a)==0)
        cout<<"ingles"<<endl;
    else if(s.compare(b)==0)
        cout<<"frances"<<endl;

        else if(s.compare(c)==0)
        cout<<"portugues"<<endl;

        else if(s.compare(d)==0)
        cout<<"caiu"<<endl;

    }
    return 0;
}

