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



void ex5() {
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


void ex5() {
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
		s = s + 1 / (double)temp;
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
		//tinh temp
		for (int j = 1; j <= i; j++) {
			temp = temp * j;
		}
		//
		s = s + 1 / (double)temp;
	}
	cout << "s bang: " << s << endl;
}


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





int main()
{
	//S= 1+ 2+ 3 +4 +5 + ... + n
	ex3(); 
	system("pause");
}