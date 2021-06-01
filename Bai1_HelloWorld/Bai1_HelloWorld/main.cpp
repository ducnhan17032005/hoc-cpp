#include <iostream>
#include <string>
using namespace std;

/// <summary>
/// Bai 1
/// </summary>
void ex1_1() {
	int i, n, s;
	s = 0, i = 1;
	cout << "n = ";
	cin >> n;
	while (i <= n) {
		s = s + i;
		i++;
	}
	cout << "s bang: " << s << endl;
}
void ex1_2() {
	int i, n, s;
	s = 0, i = 1;

	cout << "n = ";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		s = s + i;

	}
	cout << "s bang: " << s << endl;
}

/// <summary>
/// bai 2
/// </summary>
void ex2() {
	int i, n, s;
	s = 0, i = 1;

	cout << "n = ";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		s = s + pow(i, 2);
	}
	cout << "s bang: " << s << endl;
}


/// <summary>
/// bai 3 
/// </summary>
void ex3() {
	int n;
	double s = 0;
	// s=  1/ (1*2) + 1/ (2*3) +... + 1/ (n* (n+1))
	cout << "n = ";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		s = s + 1 / (double) (i * (i + 1));
	}
	cout << "s bang: " << s << endl;
}
void ex4_sub() {
	//s = 1*2*3 .... * n 
	// i =1 , s=1 *1
	// i= 2 , s = 1 * 1 * 2  = s *i
	// i = 3, s= 1* 1  * 2 *3 = s * i
	int n= 5;
	int s = 1; 

	for (int i = 1;i <= n; i++) 
	{
		s = s * i;
	}
}
void ex4() {
	int n;
	int s = 0;
	// s=  1 + 1*2 + 1*2*3 + .... + 1*2.... *n
	cout << "n = ";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		int temp = 1;
		//tinh temp
		for (int j = 1; j <= i; j++) {
			temp = temp * j;
		}
		//
		s = s + temp;
	}
	cout << "s bang: " << s << endl;
}



void ex100() {
	int n;
	double s = 0;
	// s=  1/1 + 1/1+2 + 1/1+2+3 + .... + 1/1+2.... +n
	cout << "n = ";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		int temp = 1;
		//tinh temp
		for (int j = 1; j <= i; j++) {
			temp = temp + j;
		}
		//
		s = s +1/(double) temp;
	}
	cout << "s bang: " << s << endl;
}


void ex6() {
	int n;
	double s = 0;
	// s=  1/1! + 1/2! + 1/3! + .... + 1/n! 
	cout << "n = ";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		int temp = 1;
		//tinh temp: giai thua
		for (int j = 1; j <= i; j++) {
			temp = temp * j;
		}
		//
		s = s + 1 / (double)temp;
	}
	cout << "s bang: " << s << endl;
}

/// <summary>
/// 2 vong lap long nhau; i+=2; giai thua
/// </summary>
void ex7() {
	int n;
	double s = 0;
	// s=  1 , s +  x^1/1! + x^3/3! + x^5/5! +.,...  + x^(2n+1)/(2n+1)!
	cout << "n = ";
	cin >> n;

	for (int i = 1; i <= 2*n+1; i = i+2)
	{
		
		int temp = 1;
		//tinh temp

		for (int j = 1; j <= i; j++) {
			temp = temp * j;
		}
		//
		s = s + 1 / (double)temp;
	}
	cout << "s bang: " << s << endl;
}



void ex8()
{
	int n = 24;
	int count = 0;
	// i  = 1 la uoc => count =1 ( count +1 )
	// i = 2 la uoc => count  = 2 (count  +1 )
	// i=3		=> count =3 (count +1 )
	// i=4   => count=4  (count +1 )
	// i=5   => count = 4 
	//i = 6 => count =5 (coutn + 1)

	for (int i = 1; i <= 24; i++)
	{
		if (n % i == 0) {
			count = count + 1;
			cout << i << "\n";
		}
	}
	cout << "So uoc cua 24 la: " << count << "\n";
}

void ex10() {
	//dem tat ca so chan tu 0 -> 12
	int n = 12;
	int count = 0;
	for (int i = 0;i <= n;i++)
	{
		if (i % 2 == 0) {
			count++; //tuong duong count= count+1 va count+=1
		}
	}
}



int main()
{
	//S= 1+ 2+ 3 +4 +5 + ... + n
	ex8(); 
	system("pause");
}