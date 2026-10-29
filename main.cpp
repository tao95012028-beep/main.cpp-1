#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string s;
    cin >> s;
    //coout << s << endl;
    int n = s.length();

    for (int i = 0; i <n; i++){
        for (int k=1; k<=n-i; k++){
            cout << s.substr(i,k) << " ";
        }
    } 
    return 0;
}