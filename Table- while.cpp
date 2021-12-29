#include <iostream>
#include <string>
using namespace std;
int main() {
    cout << "Type a number:";
    int a;
    cin >> a;
int i = 1;
int product;
while (i < 11) {
product = a*i;
  cout << a << " " << "X " << i << " = " << product << "\n";
  i++;
}
  return 0;
}
