
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // for
    int sum1 = 0;
    for (int i = 1; i <= n; i++) sum1 += i;

    // while
    int sum2 = 0, j = 1;
    while (j <= n) { sum2 += j; j++; }

    // do-while
    int sum3 = 0, k = 1;
    do { sum3 += k; k++; } while (k <= n);

    cout << "for: " << sum1 << endl;
    cout << "while: " << sum2 << endl;
    cout << "do-while: " << sum3 << endl;
    return 0;
}