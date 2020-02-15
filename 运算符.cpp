#include<stdio.h>
#include<string.h>
int main()
{
    int i,a;
    char yunsuanfu[100];
    int judge(char b[]);
    for(i=0;i<2;i++)
    {
        printf("请输入运算符：");
        scanf(" %s",yunsuanfu); 
        a=judge(yunsuanfu);
        if(a>=0) printf("OK\n");
        else printf("Error\n");
    }
    return 0;
}
int judge(char b[])
{
    if(strcmp(b,"增加")==0) return 1;
    if(strcmp(b,"减少")==0) return 0;
    return -1;
}
