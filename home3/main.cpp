#include <iostream>

using namespace std;

int main()
{
/*
	 * We know we will read 8 numbers
	 * 	The first number is the first odd
	 * 	The third number is the second odd
	 * 	The fifth number is the their odd
	 * 	The seventh number is the forth odd
	 *
	 * Same logic for even numbers
	 *
	 * The key: good naming variables and read them in right order
	 */
	 int o1,o2,o3,o4;
	 int e1,e2,e3,e4;
	 cin>>o1>>e1;
     cin>>o2>>e2;
	 cin>>o3>>e3;
	 cin>>o4>>e4;
	 int ood=o1+o2+o3+o4;
     int even=e1+e2+e3+e4;
    cout<<"the ood= "<<ood<<" "<<"\n the even= " <<even;


    return 0;
}
