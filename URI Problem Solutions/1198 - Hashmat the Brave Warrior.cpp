/*
    Md Babul Hasan (Noyen)
    Patuakhali Science and Technology University
    Faculty of Computer Science and Engineering
    16 th Batch (PSTU-CSE-2019)
    bhyean@gmail.com // B H Yean Hasan
*/

#include <iostream>

using namespace std;

int main()
{
 long long x, y;

 while(cin >> x >> y)
 {
  if(x < y){
   cout << y - x << endl;
  }
  else{
   cout << x - y << endl;
  }
 }

 return 0;
}
