//
//  main.cpp
//  Cpp Universal
//
//  Created by 李君好 on 2021/4/14.
//

#include <cstdlib>
#include <cstdio>
using namespace std;
struct student
{
    char name[20];//姓名
    int lastgride;//期末
    int evolutiongride;//班级
    char leadstu;//干部
    char weststu;//西部
    int letter;//论文
    int money;//奖学金
}stu[100];

int main()
{
    int index,n;
    int totalmoney;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].lastgride,&stu[i].evolutiongride,&stu[i].leadstu,&stu[i].weststu,&stu[i].letter);
        if(stu[i].lastgride>80&&stu[i].letter>=1){stu[i].money+=8000;}
        if(stu[i].lastgride>85&&stu[i].evolutiongride>80){stu[i].money+=4000;}
        if(stu[i].lastgride>90){stu[i].money+=2000;}
        if(stu[i].lastgride>85&&stu[i].weststu=='Y'){stu[i].money+=1000;}
        if(stu[i].evolutiongride>80&&stu[i].leadstu=='Y'){stu[i].money+=850;}
    }
    index=0;
    totalmoney=stu[0].money;
    for(int i=1; i<n; ++i)
    {
        if(stu[i].money>stu[index].money)
            index=i;
            totalmoney+=stu[i].money;
    }
    printf("%s\n%d\n%d\n",stu[index].name,stu[index].money,totalmoney);
    return 0;
}
