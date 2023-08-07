#include <iostream>

using namespace std;

int main()
{
   cout<<"enter the students \n";
   string name1;
   cout<<"enter the std name 1: ";
   cin>>name1;

   int id1;
   cout << "enter the id: ";
   cin >> id1 ;

   double grade1;
   cout<< "enter the grade :";
   cin>>grade1;

   string name2;
   cout<<"enter the std name 2: ";
   cin>>name2;

   int id2;
   cout << "enter the id: ";
   cin >> id2;

   double grade2;
   cout<< "enter the grade :";
   cin>>grade2;

   cout<<" \n the student name1: " <<name1<<" \n id: " <<id1 << " \n grade: \n "<<grade1;
    cout<<" \n the student name2: " <<name2<<" \n id: " <<id2 << " \n grade: \n "<<grade2;
       cout<<" \n the Avg: "<<(grade1+grade2)/2.0;




       return 0;
}
