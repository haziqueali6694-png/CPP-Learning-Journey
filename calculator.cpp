#include<iostream>
using namespace std ;
int main ()
{
int choice;
cout << " choose operation (1=Add , 2= subtract, 3=Mul, 4=Div) : ";
cin >> choice ;
switch ( choice ) {
case 1 :
cout << " you choose Add";
break ;
case 2 :
cout << " you choose subtract ";
break;
case 3 :
cout << " you choose Mul ";
break;
case 4:
cout << "you choose Div" ;
break ;
default :
cout<< "invalid choice" ;
}
return 0;
}
