
#include <limits.h>
#include <iostream> 
using namespace std; 
int main() 
{ 
int n, max; 
cin >> n; 
max = INT_MIN; 
for (int i = 0; i < n; i++) 
{ 
int value; 
cin >> value; 
if (value > max) max = value; 
} 
cout << max << endl; 
return 0; 
} 