#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int a;
    void output(int sum); 
    printf("请输入阿拉伯数字：");
    while(scanf("%d",&a)!=EOF)
    {
        output(a);
        printf("\n");
        printf("请输入阿拉伯数字：");
    }
    return 0;
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
		if(sum==1000) printf("一千"); 
		if(sum>1000) printf("太有钱啦"); 
	}
	if(sum<0) 
	{
		sum=fabs(sum);
		if(sum<=10) 
		{
			printf("负");
			shi(sum);
		}
		if(sum>10&&sum<=20) 
		{
			printf("负");
			ershi(sum);
		}
		if(sum>20&&sum<100) 
		{
			printf("负");
			yibai(sum);
		}
		if(sum>=100&&sum<1000) 
		{
			printf("负");
			yiqian(sum);
		}
		if(sum==1000) printf("负一千"); 
		if(sum>1000) printf("负债累累了亲");
		
	}
}
void shi(int sum)
{
	switch(sum)
	{
		case 0 : printf("零");break;
		case 1 : printf("一");break;
		case 2 : printf("二");break;
		case 3 : printf("三");break;
		case 4 : printf("四");break;
		case 5 : printf("五");break;
		case 6 : printf("六");break;
		case 7 : printf("七");break;
		case 8 : printf("八");break;
		case 9 : printf("九");break;
		case 10 : printf("十");break;
	}
}
void ershi(int sum)
{
	switch(sum)
	{
		case 11 : printf("十一");break;
		case 12 : printf("十二");break;
		case 13 : printf("十三");break;
		case 14 : printf("十四");break;
		case 15 : printf("十五");break;
		case 16 : printf("十六");break;
		case 17 : printf("十七");break;
		case 18 : printf("十八");break;
		case 19 : printf("十九");break;
		case 20 : printf("二十");break;
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
		case 3 : printf("三十");break;
		case 4 : printf("四十");break;
		case 5 : printf("五十");break;
	    case 6 : printf("六十");break;
    	case 7 : printf("七十");break;
    	case 8 : printf("八十");break;
    	case 9 : printf("九十");break;
	}
}
void yibai_Situation_two1(int a)
{
	switch(a)
	{
		case 2 : printf("二十");break;
		case 3 : printf("三十");break;
	    case 4 : printf("四十");break;
		case 5 : printf("五十");break;
	    case 6 : printf("六十");break;
   	    case 7 : printf("七十");break;
   	    case 8 : printf("八十");break;
    	case 9 : printf("九十");break;
		}
}
void yibai_Situation_two2(int b)
{
	switch(b)
	{
		case 1 : printf("一");break;
    	case 2 : printf("二");break;
     	case 3 : printf("三");break;
     	case 4 : printf("四");break;
    	case 5 : printf("五");break;
    	case 6 : printf("六");break;
    	case 7 : printf("七");break;
    	case 8 : printf("八");break;
    	case 9 : printf("九");break;
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
		case 1 : printf("一百");break;
    	case 2 : printf("二百");break;
     	case 3 : printf("三百");break;
   		case 4 : printf("四百");break;
   		case 5 : printf("五百");break;
   		case 6 : printf("六百");break;
   		case 7 : printf("七百");break;
    	case 8 : printf("八百");break;
    	case 9 : printf("九百");break;
	}
}
void yiqian_Situation_two1(int sum)
{
	int a=sum/10;
	switch(a)
	{
		case 1 : printf("一百");break;
    	case 2 : printf("二百");break;
     	case 3 : printf("三百");break;
		case 4 : printf("四百");break;
    	case 5 : printf("五百");break;
    	case 6 : printf("六百");break;
   		case 7 : printf("七百");break;
   		case 8 : printf("八百");break;
   		case 9 : printf("九百");break;
	}
}
void yiqian_Situation_two2(int sum)
{
	int b=(sum-(sum/100)*100)/10;
	switch(b)
	{
		case 1 : printf("一十");break;
		case 2 : printf("二十");break;
		case 3 : printf("三十");break;
	    case 4 : printf("四十");break;
		case 5 : printf("五十");break;
	   	case 6 : printf("六十");break;
    	case 7 : printf("七十");break;
    	case 8 : printf("八十");break;
    	case 9 : printf("九十");break;
	}
}
void yiqian_Situation_three1(int sum)
{
	int a=sum/100;
	switch(a)
	{
		case 1 : printf("一百");break;
    	case 2 : printf("二百");break;
     	case 3 : printf("三百");break;
     	case 4 : printf("四百");break;
    	case 5 : printf("五百");break;
    	case 6 : printf("六百");break;
    	case 7 : printf("七百");break;
    	case 8 : printf("八百");break;
    	case 9 : printf("九百");break;
	}
}
void yiqian_Situation_three2(int sum)
{
	int b=sum-(sum/100)*100;
	switch(b)
	{
		case 1 : printf("零一");break;
		case 2 : printf("零二");break;
		case 3 : printf("零三");break;
		case 4 : printf("零四");break;
		case 5 : printf("零五");break;
	    case 6 : printf("零六");break;
    	case 7 : printf("零七");break;
    	case 8 : printf("零八");break;
    	case 9 : printf("零九");break;
	}
}
void yiqian_Situation_four1(int sum)
{
	int a=sum/100;
	switch(a)
	{
		case 1 : printf("一百");break;
    	case 2 : printf("二百");break;
     	case 3 : printf("三百");break;
     	case 4 : printf("四百");break;
    	case 5 : printf("五百");break;
    	case 6 : printf("六百");break;
    	case 7 : printf("七百");break;
    	case 8 : printf("八百");break;
    	case 9 : printf("九百");break;
	}
}
void yiqian_Situation_four2(int sum)
{
	int c1=(sum-(sum/100)*100)/10;
	switch(c1)
	{
		case 1 : printf("一十");break;
		case 2 : printf("二十");break;
		case 3 : printf("三十");break;
		case 4 : printf("四十");break;
		case 5 : printf("五十");break;
	   	case 6 : printf("六十");break;
    	case 7 : printf("七十");break;
    	case 8 : printf("八十");break;
    	case 9 : printf("九十");break;
	}
}
void yiqian_Situation_four3(int sum)
{
	int c2=sum-(sum/100)*100-((sum-(sum/100)*100)/10)*10;
	switch(c2)
	{
		case 1 : printf("一");break;
    	case 2 : printf("二");break;
     	case 3 : printf("三");break;
     	case 4 : printf("四");break;
    	case 5 : printf("五");break;
    	case 6 : printf("六");break;
    	case 7 : printf("七");break;
    	case 8 : printf("八");break;
    	case 9 : printf("九");break;
	}
}
