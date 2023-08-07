#include <iostream>

using namespace std;

int main()
{

int num1,num2,num3;
cin>>num1>>num2;
cout<<num1<<" " <<num2<<"\n";
num3=num2;
num2=num1;
num1=num3;
cout<<"the num1= "<<num1<<"\t the num2= " <<num2;



    return 0;
}
