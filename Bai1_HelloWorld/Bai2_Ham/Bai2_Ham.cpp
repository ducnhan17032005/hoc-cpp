#include <iostream>
#include <string>
using namespace std;

/*
int pow(int x, int y) {
    //s  = 2^3 = x^y = x * x*  x* x ....*x     (y thang x nhan nhau)
   int s = 1;
   //s =1
   for (int i = 0; i < y;i++) {
       s = s * s;
   }
   return s;
}
*/

//header
void hello_world(); 
int tong(int, int);



void inHelloWorld() {
    hello_world();
}
int tong(int a, int b) {
    return a + b;
}

void hello_world() {
    cout << "Helo World" << endl;
}
int main()
{

    inHelloWorld();
    system("pause"); 
}
