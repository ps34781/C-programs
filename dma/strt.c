#include<stdio.h>
struct st
{
	int rollno;
	char name[10];
	float marks;
};
void main()
{
	struct st s1;
	struct st *p;
	p = &s1;
	//scanf("%d %s %f",&s1.rollno,&s1.name,&s1.marks);
	scanf("%d %s %f",&p->rollno,&p->name,&p->marks);
	//printf("Roll number = %d\n Name =  %s\n marks =  %f\n",s1.rollno,s1.name,s1.marks);
//	struct st s2;
//	printf("%d %s %f\n",s2.rollno,s2.name,s2.marks);
	printf("%d %s %f\n",p->rollno,p->name,p->marks);
	printf("\n");	
}
