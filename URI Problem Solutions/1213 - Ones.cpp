/*
    Md Babul Hasan (Noyen)
    Patuakhali Science and Technology University
    Faculty of Computer Science and Engineering
    16 th Batch (PSTU-CSE-2019)
    bhyean@gmail.com // B H Yean Hasan
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int n, l, c;

	while(cin>>n){
		l = 1;c = 1;

		while(l % n != 0){
			l = (10 * l + 1) % n;
			c++;
		}

		cout<<c<<endl;
		c=0;
	}

	return 0;
}
