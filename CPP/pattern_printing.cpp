// 1.
#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    for(int i = 1; i <= number; i++ ){
        cout << "**" << endl;
    }
}
// 2. 
#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    for(int i = 0; i <= m; i++ ){
        for(int j = 0; j <= n; j++){
            cout << "*";
        } cout << endl;
    }
}
// 3.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "*";
        }
     cout << endl;
    }
}
// 4.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "*";
        }
     cout << endl;
    }
}
// 5.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n; j++){
            if(i == 0 or i == n or j == n or j == 0){
            cout << "*";
          } else{
             cout << " ";
          }
        }
        cout << endl;
    } 
}
// 6.
#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    for(int i = 0; i <= m; i++ ){
        for(int j = 0; j <= n; j++){
            if(i == 0 or i == m - 1 or j == 0 or j == n - 1){
            cout << "*";
          } else{
             cout << " ";
          }
        } cout << endl;
    }
}
// 7.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j =1; j <= i; j++){
            cout << i;
        } 
        cout << endl;
    }
}
// 8.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = n; i > 0; i--){
        for(int j = 0; j < i; j++){
            cout << "*";
        } 
        cout << endl;
    }
}
// 9.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j =1; j <= i; j++){
            cout << i;
        } 
        cout << endl;
    }
}
// 10.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        if (i % 2 == 0)
        {
            cout << "1";
        } else{
            cout << "0";
        }
        
        for(int j =1; j <= i; j++){
              if (i % 2 == 0)
        {
            cout << "0";
        } else{
            cout << "1";
        }
            cout << i;
        } 
        cout << endl;
    }
}
// 11.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 0; i <= n; i++)


}
