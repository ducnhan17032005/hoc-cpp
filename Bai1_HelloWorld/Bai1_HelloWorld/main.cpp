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

int main()
{
	//S= 1+ 2+ 3 +4 +5 + ... + n
	ex2(); 
	system("pause");
}