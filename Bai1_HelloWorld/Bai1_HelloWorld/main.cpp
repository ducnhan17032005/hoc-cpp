#include <iostream>
#include <string>
using namespace std;
//entry point
#include <math.h>

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    long themang, n;
    int sochuso;

    cout << "Nhap n: ";
    cin >> n;

    sochuso = 0;
    themang = n;

    if (n == 0)
        sochuso = 1;
    //n = 1234
    //n = 123 scs  +=1 = 1
    //n = 12  scs +=1  = 2
    //n=1      scs +=1 =3
    // n=0    scs +=1 =4
    //
    while (themang != 0)
    {
        sochuso = sochuso + 1;
        themang = themang / 10;
    }
    printf("\nSo chu so cua %ld la %d", n, sochuso);


    getch();
    return 0;
}