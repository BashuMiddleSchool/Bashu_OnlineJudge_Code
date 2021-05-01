#include<bits/stdc++.h>
int main() {
	int a,b;
	float x,y;
	scanf("%d%d%f%f",&a,&b,&x,&y);
	printf("%0.2f",(b>a?a*x+(b-a)*y:b*x));
	return 0;
	}