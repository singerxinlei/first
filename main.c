#include<stdio.h>
#include"ʵ��.h"
int number=0;
customer Customer[200];
int main()
{
	char infor[30];
	int pos,a=1;

	int pword;
	if(number==0)
	{
		printf("��ǰ�˻�����Ϊ0�����Ƚ���ע��\n");
		Register(Customer);
	}
	printf("�Ƿ��½�˺ţ���½������y����¼�˳�������\n");
	char ch;
	ch=getchar();
	getchar();
	if(ch=='n')
		return 0;
	for(;a<4;)
	{
		printf("�������˺�");
		gets(infor);
		printf("����������");
		scanf("%d",&pword);
		getchar();
		if (login(Customer,infor,&a,pword,&pos)==0)
			break;
	}
	if(a>3)
	{
		printf("��������������룬�������˳�");
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
		printf("�����Ѱ�ȫ�˳�");
		return 0;
    }
	return 0;
}









