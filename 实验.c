#include<stdio.h>
#include<string.h>
#include"ʵ��.h"
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
				printf("�����������������\n");
				(*time)++;
				return 1;
			}

		}
	}
	printf("���˻�����������������");
	(*time)++;
	return 1;

}
void getmoney(cust p)
{
	int money;
	printf("������ȡ���");
	scanf("%d",&money);
	while(money>p->money)
	{
		printf("���㣬����������ȡ����");
		scanf("%d",&money);
	}
	printf("��ȡ�������ֽ�\n");
	p->money=(p->money)-money;
	remain(p);
}
void savemoney(cust p)
{
	int money;
	printf("���������Ĵ���\n");
    scanf("%d",&money);
	p->money=(p->money)+money;
	remain(p);
}
void draw(cust p)
{
	char receiver[30];
	int money=0;
	int m=0;
    printf("������Է��˻���");
	gets(receiver);
	printf("����������ת�˽�\n");
    scanf("%d",&money);
	while(money>p->money){
		printf("�����������������룺");
		scanf("%d",&money);}
		int i=0;
    for(i=0;i<number;i++)
	{
		if(strcmp(Customer[i].account,receiver)==0)
		{
			Customer[i].money=Customer[i].money+money;
			p->money=p->money-money;
			printf("ת�˳ɹ���");
			remain(p);
			m=1;
		}
    }
	if(m==0)
	{
		printf("��������˻������ڣ�ת��ʧ�ܣ�");
	}
}
void remain(cust p)
{
	printf("�����˻���%f\n",p->money);
}
void Register(cust p)
{
	char word='y';

	while(word=='y')
	{
		int temp=0;
		char code;
		printf("����������");
		scanf("%s",p->name);
		printf("�������˺�");
		scanf("%s",p->account);
		printf("�����뿪������");
		scanf("%s",p->bank);
		printf("�����������");
		scanf("%f",&p->money);
		printf("������������");
		scanf("%f",&p->rate);
		printf("�������˻�����(����Ϊ��λ�����벻Ҫ��0��ͷ)");
		scanf("%d",&temp);
		printf("����һ��ȷ����������");
		scanf("%d",&p->password);
		getchar();
		while(temp!=p->password)
		{
			printf("��������������벻��ͬ����������");
			printf("�������˻�����(����Ϊ��λ�����벻Ҫ��0��ͷ)");
			scanf("%d",&temp);
			printf("����һ��ȷ����������");
			scanf("%d",&p->password);
		}
		printf("�Ƿ���ɱ���ע�����������yȡ��������n");
	    code=getchar();
		getchar();
		if(code=='y')
			number++;
		printf("�Ƿ����ע���˻���Ϣ?�ǣ�y����n��");
		word=getchar();
		getchar();
		p++;

	}

}
void choosefunc(int	 *a)
{
	printf("��ѡ�������Ŀ��\n");
	printf("ȡ��������1\n���������2\n��ѯ���������3\nת��������4\n��ȫ�˳�������5\n");
	scanf("%d",a);
	getchar();
}









