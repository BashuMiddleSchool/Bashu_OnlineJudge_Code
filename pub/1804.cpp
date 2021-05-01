
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	long num1 = 1, num2 = 1, i = 0;
	string str;
	cin>>str;
	i=0;
	while(i < str.length())	{
		num1 *= (str[i] - 'A' + 1);
		i++;
	}
	cin>>str;
	for(i=0;i < str.length();++i) {
		num2 *= (str[i] - 'A' + 1);
	}
	if(num1 % 47 == num2 % 47)cout << "GO\n";
	else cout << "STAY\n";
	return 0;
}