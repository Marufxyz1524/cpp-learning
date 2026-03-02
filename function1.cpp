#include <iostream>
using namespace std;

int sumN(int n);
int main()
{
    cout << "Sum of number : " << sumN(10) << endl;
    return 0;
}

int sumN(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}
