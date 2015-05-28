#include<stdio.h>
typedef struct{
	char name[10];//姓名
	char account[30];//账号
	char bank[40];//开户银行
	float money;//存款余额
	float rate;//利率
	int password;//密码
}customer,*cust;
extern int number;
extern customer Customer[200];
int login(cust p,char*name,int*time,int key,int*q);
void getmoney(cust p);
void savemoney(cust p);
void draw(cust p);
void remain(cust p);
void Register(cust p);
void choosefunc(int *a);
