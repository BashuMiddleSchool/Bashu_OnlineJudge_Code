#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
using namespace std;
int pnum(int m);  //质数的判断
int main()
{
	char ch[1000];
	int array[100]={0};
	int m,n,i,j,k;
	int maxn=-500,minn=9999;
	scanf("%s",ch);
	for(int m=0;m<strlen(ch);m++){
		array[ch[m]-'a']++;
	}
	for(int m=0;m<26;m++){
		if(array[m]>maxn&&array[m]!=0) maxn=array[m];
		if(array[m]<minn&&array[m]!=0) minn=array[m];
	}
	if(pnum(maxn-minn)){
		printf("Lucky Word\n%d",maxn-minn);
	}else{
		printf("No Answer\n0");
	}
}
int pnum(int m)
{
	int i;
	if(m==2||m==3)	return 1;
	if(m==1||m==0)	return 0;
	if(m%6!=1&&m%6!=5) return 0;
	for(i=5;i<=sqrt(m);i+=5){
		if(m%i==0||m%(i+2)==0){
			return 0;
		}
	}
	return 1;
}
