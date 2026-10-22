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
