#include <iostream>

using namespace std;

int main()
{
int num1,num2,num3,var;
cin>>num1>>num2>>num3;
var=num1;
num1=num2;
num2=num3;
num3=var;
cout<<"num1= "<<num1<<"\t num2=  "<<num2<<"\t num3= " <<num3;


    return 0;
}
