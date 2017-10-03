#include<stdio.h>
#include<string.h>

struct employee
{
	char name[20];
	char desig[10];
	int age;
	struct employee*report;
};
struct employee e[100];
void sort()
{
int i,j,dup;char temp1[20],temp2[10];
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<4;j++)
		{
		if(strcmp(e[i].name,e[j].name)>0)
				{
					strcpy(temp1,e[i].name);
					strcpy(temp2,e[i].desig);
					strcpy(e[i].name,e[j].name);
					strcpy(e[i].desig,e[j].desig);
					strcpy(e[j].name,temp1);	
					strcpy(e[j].desig,temp2);
					dup=e[i].age;
					e[i].age=e[j].age;
					e[j].age=dup;
				}
		}
	}
}
void searchnam(char *x)
{int i;
	for(i=0;i<4;i++)
{
	if(strcmp(x,e[i].name)==0)
	{
		printf("%-10s %-10s %d",e[i].name,e[i].desig,e[i].age);
		break;
	}
}
if(i==4)
{
	printf("record not found");
}	
}

int main()
{
	int i,n;
	char na[20];
 struct employee a={"xxx","ceo",76};
 e[0]=a;
 struct employee b={"monica","chef",89};
 e[1]=b;
 struct employee c={"chandler","transp",97};
 e[2]=c;
 struct employee d={"rach","fashion",56};
 e[3]=d;
 printf("%-10s %-10s %d\n",a.name,a.desig,a.age);
 printf("%-10s %-10s %d\n",b.name,b.desig,b.age);
 printf("%-10s %-10s %d\n",c.name,c.desig,c.age);
 printf("%-10s %-10s %d\n",d.name,d.desig,d.age);
sort();
printf("\t\tAFTER SORTING\t\t\n");
for(i=0;i<4;i++)
{
	printf("%-10s %-10s %d\n",e[i].name,e[i].desig,e[i].age);
}
printf("enter the name you want to search\n");
scanf("%s",na);
searchnam(na);
}
