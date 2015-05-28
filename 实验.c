#include<stdio.h>
#include<string.h>
#include"实验.h"
int login(cust p,char*name,int*time,int key,int*q)
{
    int i;
	for(i=0;i<number;i++)
	{
		if(strcmp(p[i].account,name)==0)
		{
			if(p[i].password==key)
			{
				*q=i;
				(*time)++;
				return 0;
			}
		    else
			{
				printf("密码错误请重新输入\n");
				(*time)++;
				return 1;
			}

		}
	}
	printf("该账户不存在请重新输入");
	(*time)++;
	return 1;

}
void getmoney(cust p)
{
	int money;
	printf("请输入取款金额：");
	scanf("%d",&money);
	while(money>p->money)
	{
		printf("余额不足，请重新输入取款金额");
		scanf("%d",&money);
	}
	printf("请取走您的现金\n");
	p->money=(p->money)-money;
	remain(p);
}
void savemoney(cust p)
{
	int money;
	printf("请输入您的存款金额：\n");
    scanf("%d",&money);
	p->money=(p->money)+money;
	remain(p);
}
void draw(cust p)
{
	char receiver[30];
	int money=0;
	int m=0;
    printf("请输入对方账户：");
	gets(receiver);
	printf("请输入您的转账金额：\n");
    scanf("%d",&money);
	while(money>p->money){
		printf("您的余额不足请重新输入：");
		scanf("%d",&money);}
		int i=0;
    for(i=0;i<number;i++)
	{
		if(strcmp(Customer[i].account,receiver)==0)
		{
			Customer[i].money=Customer[i].money+money;
			p->money=p->money-money;
			printf("转账成功！");
			remain(p);
			m=1;
		}
    }
	if(m==0)
	{
		printf("您输入的账户不存在！转账失败！");
	}
}
void remain(cust p)
{
	printf("您的账户余额：%f\n",p->money);
}
void Register(cust p)
{
	char word='y';

	while(word=='y')
	{
		int temp=0;
		char code;
		printf("请输入名字");
		scanf("%s",p->name);
		printf("请输入账号");
		scanf("%s",p->account);
		printf("请输入开户银行");
		scanf("%s",p->bank);
		printf("请输入存款余额");
		scanf("%f",&p->money);
		printf("请输入存款利率");
		scanf("%f",&p->rate);
		printf("请输入账户密码(密码为六位数，请不要以0开头)");
		scanf("%d",&temp);
		printf("请再一次确认您的密码");
		scanf("%d",&p->password);
		getchar();
		while(temp!=p->password)
		{
			printf("您输入的两次密码不相同请重新输入");
			printf("请输入账户密码(密码为六位数，请不要以0开头)");
			scanf("%d",&temp);
			printf("请再一次确认您的密码");
			scanf("%d",&p->password);
		}
		printf("是否完成本次注册完成请输入y取消请输入n");
	    code=getchar();
		getchar();
		if(code=='y')
			number++;
		printf("是否继续注册账户信息?是（y）否（n）");
		word=getchar();
		getchar();
		p++;

	}

}
void choosefunc(int	 *a)
{
	printf("请选择服务项目：\n");
	printf("取款请输入1\n存款请输入2\n查询余额请输入3\n转账请输入4\n安全退出请输入5\n");
	scanf("%d",a);
	getchar();
}









