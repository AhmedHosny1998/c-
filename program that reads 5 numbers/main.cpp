#include <iostream>

using namespace std;

int main()
{

int n1,n2,n3,n4,n5;
cin >>n1>>n2>>n3>>n4>>n5;
double avg1=(n1+n2+n3+n4+n5)/5.0;
double sum1=(n1+n2+n3)/ (n4+n5);
double fnum=(n1+n2+n3) /3.0;
double lnum=(n4+n5) /2.0;

double avg2=fnum /lnum;

cout <<avg1<<"\n";
cout <<sum1<<"\n";
cout << avg2<<"\n";


    return 0;
}
