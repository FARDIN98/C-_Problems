/*6. Write a program that reverses a 2 digit positive number without using any loop.*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,rev;
    cout << "Enter an Integer: ";
    cin >> a;
    rev = a % 10;   //21 % 10
    rev *= 10;   // 1 * 10
    a /= 10;  //21 / 10 = 2
    rev += a;  // 10 + 2 = 12
    return 0;
}
