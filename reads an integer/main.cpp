#include <iostream>

using namespace std;

int main()
{

int c;
cin >> c;
int even = c % 2 ==0;
int ood = 1-even;
int res= even *100 + ood * 7;
cout << res;


    return 0;
}
