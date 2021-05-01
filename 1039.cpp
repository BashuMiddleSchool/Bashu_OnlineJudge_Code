#include<iostream>
int main()
{
	int i=0;
	char s;
	while(s!='#')
	{
		std::cin>>s;
    if (s=='a'||s=='A')i++;
    }    
	std::cout<<i;
    return 0;
}