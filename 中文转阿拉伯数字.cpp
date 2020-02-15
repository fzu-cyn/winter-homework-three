#include<stdio.h>
#include<string.h>
int main()
{
    int i,a;
    char number[100];
    int change(char c[]);
    for(i=0;i<=20;i++)
    {
        printf("请输入中文数字：");
        scanf(" %s",number); 
        a=change(number);
        if(a>=-10) printf("OK\n");
        else printf("Error\n");
    }
    return 0;
}
int change(char c[])
{
	if(strcmp(c,"零")==0) return 0;
	if(strcmp(c,"一")==0) return 1;
	if(strcmp(c,"二")==0) return 2;
	if(strcmp(c,"三")==0) return 3;
	if(strcmp(c,"四")==0) return 4;
	if(strcmp(c,"五")==0) return 5;
	if(strcmp(c,"六")==0) return 6;
	if(strcmp(c,"七")==0) return 7;
	if(strcmp(c,"八")==0) return 8;
	if(strcmp(c,"九")==0) return 9;
	if(strcmp(c,"十")==0) return 10;
	if(strcmp(c,"负一")==0) return -1;
	if(strcmp(c,"负二")==0) return -2;
	if(strcmp(c,"负三")==0) return -3;
	if(strcmp(c,"负四")==0) return -4;
	if(strcmp(c,"负五")==0) return -5;
	if(strcmp(c,"负六")==0) return -6;
	if(strcmp(c,"负七")==0) return -7;
	if(strcmp(c,"负八")==0) return -8;
	if(strcmp(c,"负九")==0) return -9;
	if(strcmp(c,"负十")==0) return -10;
	return -11;
}
