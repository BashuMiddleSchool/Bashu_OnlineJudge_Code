#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int sum(int max);
    int main() {
    int a;
    cin >> a;	
    cout<<sum(a)<<endl; 	
    return 0; 
} 
int sum(int max)
{ 
    if(max>1)
{ 
    return max+sum(max-1); 
    }
    else { 
        return 1; 
        }
}