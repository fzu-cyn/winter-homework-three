#include<stdio.h>
#include<string.h>
#include<math.h> 
int main()
{
	char name1[100],name2[100],name3[100],name4[100];
	int i=0,m,sum=0,j,j0;
	int change(char c[]); 
	int input();
	void output(int sum);
	scanf("%s %s %s %s",name1,name2,name3,name4);
	j0=change(name4);
	sum=input();
	sum=sum+j0;
	output(sum);
	return 0;
}
int input()
{
	char a[100],b[100],c[100];
	int sum=0,j,d;
	int judge(char b[100],char c[100]);
	while(1)
	{
		scanf(" %s",a);
		if(strcmp(a,"����")==0) 
		{
			scanf(" %s",b);
			break;
		}
		scanf(" %s %s",b,c);
		d=judge(b,c);
		sum=sum+d;
	}
	return sum;
}
int judge(char b[100],char c[100])
{
	int sum=0,j;
	int change(char c[]);
	if(strcmp(b,"����")==0)
	{
		j=change(c);
		sum=sum+j;
	}
	if(strcmp(b,"����")==0)
	{
		j=change(c);
		sum=sum-j;
	}
	return sum;
}
void output(int sum)
{
	void shi(int sum);
	void ershi(int sum);
	void yibai(int sum); 
	void yiqian(int sum);
	if(sum>=0)
	{
		if(sum<=10) shi(sum);
		if(sum>10&&sum<=20) ershi(sum);
		if(sum>20&&sum<100) yibai(sum);
		if(sum>=100&&sum<1000) yiqian(sum);
		if(sum==1000) printf("һǧ"); 
		if(sum>1000) printf("̫��Ǯ��"); 
	}
	if(sum<0) 
	{
		sum=fabs(sum);
		if(sum<=10) 
		{
			printf("��");
			shi(sum);
		}
		if(sum>10&&sum<=20) 
		{
			printf("��");
			ershi(sum);
		}
		if(sum>20&&sum<100) 
		{
			printf("��");
			yibai(sum);
		}
		if(sum>=100&&sum<1000) 
		{
			printf("��");
			yiqian(sum);
		}
		if(sum==1000) printf("��һǧ"); 
		if(sum>1000) printf("��ծ��������");
		
	}
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
	
}
void shi(int sum)
{
	switch(sum)
	{
		case 0 : printf("��");break;
		case 1 : printf("һ");break;
		case 2 : printf("��");break;
		case 3 : printf("��");break;
		case 4 : printf("��");break;
		case 5 : printf("��");break;
		case 6 : printf("��");break;
		case 7 : printf("��");break;
		case 8 : printf("��");break;
		case 9 : printf("��");break;
		case 10 : printf("ʮ");break;
	}
}
void ershi(int sum)
{
	switch(sum)
	{
		case 11 : printf("ʮһ");break;
		case 12 : printf("ʮ��");break;
		case 13 : printf("ʮ��");break;
		case 14 : printf("ʮ��");break;
		case 15 : printf("ʮ��");break;
		case 16 : printf("ʮ��");break;
		case 17 : printf("ʮ��");break;
		case 18 : printf("ʮ��");break;
		case 19 : printf("ʮ��");break;
		case 20 : printf("��ʮ");break;
	}
}
void yibai(int sum)
{
	int a,b;
	void yibai_Situation_one(int sum);
	void yibai_Situation_two1(int a);
    void yibai_Situation_two2(int b);
	if(sum%10==0) yibai_Situation_one(sum);
	else
	{
		a=sum/10;
		b=sum%10;
		yibai_Situation_two1(a);
        yibai_Situation_two2(b);
	}
}
void yibai_Situation_one(int sum)
{
	switch(sum/10)
	{
		case 3 : printf("��ʮ");break;
		case 4 : printf("��ʮ");break;
		case 5 : printf("��ʮ");break;
	    case 6 : printf("��ʮ");break;
    	case 7 : printf("��ʮ");break;
    	case 8 : printf("��ʮ");break;
    	case 9 : printf("��ʮ");break;
	}
}
void yibai_Situation_two1(int a)
{
	switch(a)
	{
		case 2 : printf("��ʮ");break;
		case 3 : printf("��ʮ");break;
	    case 4 : printf("��ʮ");break;
		case 5 : printf("��ʮ");break;
	    case 6 : printf("��ʮ");break;
   	    case 7 : printf("��ʮ");break;
   	    case 8 : printf("��ʮ");break;
    	case 9 : printf("��ʮ");break;
		}
}
void yibai_Situation_two2(int b)
{
	switch(b)
	{
		case 1 : printf("һ");break;
    	case 2 : printf("��");break;
     	case 3 : printf("��");break;
     	case 4 : printf("��");break;
    	case 5 : printf("��");break;
    	case 6 : printf("��");break;
    	case 7 : printf("��");break;
    	case 8 : printf("��");break;
    	case 9 : printf("��");break;
	}
}
void yiqian(int sum)
{
	void yiqian_Situation_one(int sum);
	void yiqian_Situation_two1(int sum);
	void yiqian_Situation_two2(int sum);
	void yiqian_Situation_three1(int sum);
	void yiqian_Situation_three2(int sum);
	void yiqian_Situation_four1(int sum);
	void yiqian_Situation_four2(int sum);
	void yiqian_Situation_four3(int sum);
	if(sum%100==0)  yiqian_Situation_one(sum);
	if(sum%100!=0&&sum%10==0)
	{
		yiqian_Situation_two1(sum);
	    yiqian_Situation_two2(sum);
	}
	if(sum%100!=0&&sum%10!=0)
	{
		if(sum-(sum/100)*100<10)
		{
			yiqian_Situation_three1(sum);
	        yiqian_Situation_three2(sum);
		} 
		else
		{
			yiqian_Situation_four1(sum);
	        yiqian_Situation_four2(sum);
            yiqian_Situation_four3(sum);
		}
	}
}
void yiqian_Situation_one(int sum)
{
	switch(sum/100)
	{
		case 1 : printf("һ��");break;
    	case 2 : printf("����");break;
     	case 3 : printf("����");break;
   		case 4 : printf("�İ�");break;
   		case 5 : printf("���");break;
   		case 6 : printf("����");break;
   		case 7 : printf("�߰�");break;
    	case 8 : printf("�˰�");break;
    	case 9 : printf("�Ű�");break;
	}
}
void yiqian_Situation_two1(int sum)
{
	int a=sum/10;
	switch(a)
	{
		case 1 : printf("һ��");break;
    	case 2 : printf("����");break;
     	case 3 : printf("����");break;
		case 4 : printf("�İ�");break;
    	case 5 : printf("���");break;
    	case 6 : printf("����");break;
   		case 7 : printf("�߰�");break;
   		case 8 : printf("�˰�");break;
   		case 9 : printf("�Ű�");break;
	}
}
void yiqian_Situation_two2(int sum)
{
	int b=(sum-(sum/100)*100)/10;
	switch(b)
	{
		case 1 : printf("һʮ");break;
		case 2 : printf("��ʮ");break;
		case 3 : printf("��ʮ");break;
	    case 4 : printf("��ʮ");break;
		case 5 : printf("��ʮ");break;
	   	case 6 : printf("��ʮ");break;
    	case 7 : printf("��ʮ");break;
    	case 8 : printf("��ʮ");break;
    	case 9 : printf("��ʮ");break;
	}
}
void yiqian_Situation_three1(int sum)
{
	int a=sum/100;
	switch(a)
	{
		case 1 : printf("һ��");break;
    	case 2 : printf("����");break;
     	case 3 : printf("����");break;
     	case 4 : printf("�İ�");break;
    	case 5 : printf("���");break;
    	case 6 : printf("����");break;
    	case 7 : printf("�߰�");break;
    	case 8 : printf("�˰�");break;
    	case 9 : printf("�Ű�");break;
	}
}
void yiqian_Situation_three2(int sum)
{
	int b=sum-(sum/100)*100;
	switch(b)
	{
		case 1 : printf("��һ");break;
		case 2 : printf("���");break;
		case 3 : printf("����");break;
		case 4 : printf("����");break;
		case 5 : printf("����");break;
	    case 6 : printf("����");break;
    	case 7 : printf("����");break;
    	case 8 : printf("���");break;
    	case 9 : printf("���");break;
	}
}
void yiqian_Situation_four1(int sum)
{
	int a=sum/100;
	switch(a)
	{
		case 1 : printf("һ��");break;
    	case 2 : printf("����");break;
     	case 3 : printf("����");break;
     	case 4 : printf("�İ�");break;
    	case 5 : printf("���");break;
    	case 6 : printf("����");break;
    	case 7 : printf("�߰�");break;
    	case 8 : printf("�˰�");break;
    	case 9 : printf("�Ű�");break;
	}
}
void yiqian_Situation_four2(int sum)
{
	int c1=(sum-(sum/100)*100)/10;
	switch(c1)
	{
		case 1 : printf("һʮ");break;
		case 2 : printf("��ʮ");break;
		case 3 : printf("��ʮ");break;
		case 4 : printf("��ʮ");break;
		case 5 : printf("��ʮ");break;
	   	case 6 : printf("��ʮ");break;
    	case 7 : printf("��ʮ");break;
    	case 8 : printf("��ʮ");break;
    	case 9 : printf("��ʮ");break;
	}
}
void yiqian_Situation_four3(int sum)
{
	int c2=sum-(sum/100)*100-((sum-(sum/100)*100)/10)*10;
	switch(c2)
	{
		case 1 : printf("һ");break;
    	case 2 : printf("��");break;
     	case 3 : printf("��");break;
     	case 4 : printf("��");break;
    	case 5 : printf("��");break;
    	case 6 : printf("��");break;
    	case 7 : printf("��");break;
    	case 8 : printf("��");break;
    	case 9 : printf("��");break;
	}
}
