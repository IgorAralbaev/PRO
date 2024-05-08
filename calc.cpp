#include <iostream>
using namespace std;
int main()
{
	int a;
	int b;
	char c;
	cin >> a >> b;
	cin >> c;
	if (c == '+') {
		cout << a + b;
	} else if (c == '-'){
		cout << a - b;
	} else if (c == '*'){
		cout << a * b;
	} else if (c == '/'){
		if (b == 0) {
			cout << "Division by zero!";
		}
		else {
			cout << double(a) / double(b);
		}
	}
}

