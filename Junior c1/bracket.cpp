#include<bits/stdc++.h>
using namespace std;

bool IsOk(char ok,char x)
{
    if((x=='[' && ok == ']') || (x=='{' && ok == '}')  || (x=='(' && ok == ')'))
        return true;
    return false;

}

int main()
{
    string s;
    cin>>s;

    int err = 0;
    bool is = true;

    stack<char> st;

    for(char x: s)
    {


            if(x=='(' || x=='[' || x=='{')
            {
                st.push(x);

            }
            if(x ==')' || x ==']' || x=='}')
            {
                if( st.empty())
                {

                    is = false;
                    break;
                }

                char ok = st.top();

                if(!IsOk(x,ok))
                {
                    break;
                }
                st.pop();
                err++;
            }
    }

    if(st.empty() && is == true)
        cout<<"Success"<<endl;
    else
        cout<<++err<<endl;

}
