#include<stdio.h>
struct Employee
{
 int empid;
char name[10];
 int salary;
};

int main()
{
 struct Employee(e);

 struct Employee accept(struct Employee e2);

 void display(struct Employee e1);

e=accept(e);
 display(e);
}

void display(struct Employee e1)
{
 printf("\nEmployee details are: ");
 printf("\nempid=%d\tname=%s\tsalary=%d",e1.empid,e1.name,e1.salary);
}

struct Employee accept(struct Employee e2)
{
printf("\nEnter details: ");
scanf("%d%s%d",&e2.empid,e2.name,&e2.salary);
return e2;
}