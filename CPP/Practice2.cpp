// 1.You are given a positive integer n . Print the integers from 1 to n (inclusive), each on a separate line.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        cout << i << endl;
        i++;
    }
    
}
