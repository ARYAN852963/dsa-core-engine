// 1.
#include <iostream>
using namespace std;

void n_time(int n) {
    for (int i = 0; i < n; i++) {
        cout << "I am learning functions" << endl;
    }
}

int main() {
    int n;
    cin >> n;

    n_time(10);
}
// 2.
#include <iostream>
using namespace std;
void nfactor(int n){
    for(int i = n; i >= 1; i--){
        if(n % i == 0){
            cout << i << " ";
        }
    }
}
int main()
{
    int n;
    cin >> n;
    nfactor(n);
}
// 3.
#include <iostream>
using namespace std;
int n_factor(int n){
    int NumberOf_factor = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            NumberOf_factor += 1;
        }
        
    } return NumberOf_factor;
}
int main()
{
    int n;
    cin >> n;
    int ans = n_factor(n);
    if(ans <= 2 && ans > 1){
        cout << "Prime";
    } else{
        cout << "Not Prime";
    }
}
// 4.
#include <iostream>
using namespace std;
int combination(int n){
    int factorial = 1;
    for(int i = 1; i <= n; i++){
        factorial *= i;
    } return factorial;
}

int main()
{
    int n,r;
    cin >> n >> r;
    int f = combination(n);
    int s = combination(r);
    int j = combination(n - r);
    cout << "f = " << f << endl;
    cout << "s = " << s << endl;
    cout << "j = " << j << endl;

} 
// 5.

#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) {
        return false;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

void printPrimes(int n) {
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
}

int main() {
    int n;
    cin >> n;

    printPrimes(n);

    return 0;
}
