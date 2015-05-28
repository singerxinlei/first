#include<stdio.h>
#include"实验.h"
int number=0;
customer Customer[200];
int main()
{
	char infor[30];
	int pos,a=1;

	int pword;
	if(number==0)
	{
		printf("当前账户数量为0，请先进行注册\n");
		Register(Customer);
	}
	printf("是否登陆账号？登陆请输入y不登录退出请输入\n");
	char ch;
	ch=getchar();
	getchar();
	if(ch=='n')
		return 0;
	for(;a<4;)
	{
		printf("请输入账号");
		gets(infor);
		printf("请输入密码");
		scanf("%d",&pword);
		getchar();
		if (login(Customer,infor,&a,pword,&pos)==0)
			break;
	}
	if(a>3)
	{
		printf("最多输入三次密码，程序已退出");
		return 0;
	}

	int code=0;
	while(code!=5){
	choosefunc(&code);
	if(code==1)
		getmoney(&Customer[pos]);
	if(code==2)
		savemoney(&Customer[pos]);
	if(code==3)
		remain(&Customer[pos]);
	if(code==4)
		draw(&Customer[pos]);

	}
	if(code==5)
	{
		printf("程序已安全退出");
		return 0;
    }
	return 0;
}









