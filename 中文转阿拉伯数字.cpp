#include<stdio.h>
#include<string.h>
int main()
{
    int i,a;
    char number[100];
    int change(char c[]);
    for(i=0;i<=20;i++)
    {
        printf("�������������֣�");
        scanf(" %s",number); 
        a=change(number);
        if(a>=-10) printf("OK\n");
        else printf("Error\n");
    }
    return 0;
}
int change(char c[])
{
	if(strcmp(c,"��")==0) return 0;
	if(strcmp(c,"һ")==0) return 1;
	if(strcmp(c,"��")==0) return 2;
	if(strcmp(c,"��")==0) return 3;
	if(strcmp(c,"��")==0) return 4;
	if(strcmp(c,"��")==0) return 5;
	if(strcmp(c,"��")==0) return 6;
	if(strcmp(c,"��")==0) return 7;
	if(strcmp(c,"��")==0) return 8;
	if(strcmp(c,"��")==0) return 9;
	if(strcmp(c,"ʮ")==0) return 10;
	if(strcmp(c,"��һ")==0) return -1;
	if(strcmp(c,"����")==0) return -2;
	if(strcmp(c,"����")==0) return -3;
	if(strcmp(c,"����")==0) return -4;
	if(strcmp(c,"����")==0) return -5;
	if(strcmp(c,"����")==0) return -6;
	if(strcmp(c,"����")==0) return -7;
	if(strcmp(c,"����")==0) return -8;
	if(strcmp(c,"����")==0) return -9;
	if(strcmp(c,"��ʮ")==0) return -10;
	return -11;
}
