#include<iostream>
#include <string>
using namespace std;
int main()
{
	string T, P, s1, s2;
	int a, b, c;
	int m;
	cout << "Text = ";
	cin >> T;
	int spur = -1;
	cout << '\n';
	cout << "Pattern = ";
	cin >> P;
	cout << '\n';
	cout << "Modulo = ";
	cin >> m;
	cout << '\n';
	a = P[0] - 48;
	b = P[1] - 48;
	c = a * 10 + b;
	for (int i = 0; i<T.size() - 1; i++){
		a = T[i] - 48;
		b = T[i + 1] - 48;
		if (((a * 10 + b) % m) == c%m)
		{
			spur++;
		}
	}
	cout << "Supuriois hits = " << spur;
	return 0;
}
