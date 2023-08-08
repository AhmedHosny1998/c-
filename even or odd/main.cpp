#include <iostream>

using namespace std;

int main()
{
int num;
cin >> num;
bool even1=(num%2==0);
double by2=(double)num;
by2=by2 - (int) by2;
bool even2=by2 == 0;
int last_digit = num % 10;
bool is_even3 = last_digit == 0 || last_digit == 2 || last_digit == 4 || last_digit == 6 || last_digit == 8;

    return 0;
}
