#include <iostream>
using namespace std;

int main() {
int a, b, c;

cout << " input 3 numbers : " ;

cin >> a >> b >> c ;
if (a==b)  {
if (b==c)  {
cout << " all numbers are equal " ;
}
else {
cout << " numbers are not equal " ;
}
}
else {
cout << "numbers are not equal " ;
}
return 0;
}
