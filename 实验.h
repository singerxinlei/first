#include<stdio.h>
typedef struct{
	char name[10];//����
	char account[30];//�˺�
	char bank[40];//��������
	float money;//������
	float rate;//����
	int password;//����
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
