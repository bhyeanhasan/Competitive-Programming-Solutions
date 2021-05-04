/*
    Md Babul Hasan (Noyen)
    Patuakhali Science and Technology University
    Faculty of Computer Science and Engineering
    16 th Batch (PSTU-CSE-2019)
    bhyean@gmail.com // B H Yean Hasan
*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){
     float f, g, d;
     float c;

     while(cin >> d){
                    cin >> f;
                    cin >> g;

                    c = sqrt(d*d + 144);

                    if(c/g <= 12/f)
                    cout << "S"<<endl;
                    else
                    cout << "N"<<endl;
     }
     return 0;
     }
