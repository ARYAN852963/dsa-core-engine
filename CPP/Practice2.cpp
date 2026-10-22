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
// 2. You are given an integer N . Print all integers from N to 1 in decreasing order.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = n;
    while (i >= 1)
    {
        cout << i << " ";
        i--;
    }
     

}
// 3. You are given an integer N. Print all even numbers between 1and N (inclusive) in increasing order.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 2;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
        i ++;
    }

}
// 4. You are given two integers L and R . Print all integers from L to R in increasing order.
#include <iostream>
using namespace std;
int main()
{
    int L, R;
    cin >> L >> R;

    while (L <= R )
    { 
        cout << L << " ";
        L ++;
    }
    
}
//5. Print all uppercase English alphabets from A to Z using loops.
#include <iostream>
using namespace std;
int main()
{
    char first = 'A';
    while (first <= 'Z')
    {
        cout << first << " ";
        first++;
    }

}
// 6. You are given an integer N. Your task is to print the multiplication table of N from 1 to 10.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= 10)
    {
        cout << n << " * " << i << " = " << n * i << endl;
        i ++; 
    }
    
}
//7.You are given an integer N
//followed by N
//integers. Count how many of the given numbers are:
//Positive
//Negative
//Even
//Odd
#include <iostream>
using namespace std;
int main()
{
 
}
//8. You are given an integer N. Find the sum
#include<iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;

    long long i = 1, sum = 0;
    while (i <= N)
    {
        sum += i;
        i++;
    }
    cout << sum <<endl;
}
// 9. You are given an integer N
// Find the factorial of N
//  by writing a function that takes N
//  as a parameter and returns N!#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long fact = 1;
    while (n != 0)
    {
        fact = fact * n;
        n = n - 1;
    }
    cout << fact << endl;
}
//10. 
#include <iostream>
using namespace std;

int main()
{
    int x, n;
    cin >> n >> x;

    long long result = 1;

    // Loop runs n times, multiplying result by x each time
    while (n > 0)
    {
        result = result * x; // Accumulate the multiplication
        n = n - 1;           // Count down n
    }
    cout << result << endl;
}
// 11.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long sum = 0;

    while (n != 0)
    {
        sum = (sum * 10) + n % 10; 
        n = n / 10;           
    }
    cout << sum << endl;
}
// 12.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long sum = 0;
    long long og_n = n;

    while (n != 0)
    {
        sum = (sum * 10) + n % 10; 
        n = n / 10;           
    }
    cout << sum << endl;
    if (sum == og_n)
    {
        cout << "Yes" << endl;
    }
    
}

