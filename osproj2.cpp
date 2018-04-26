#include<stdio.h>
#include<conio.h>
int main()
{
	float p;
	int m;
	int mod_percent;//percent of page modified
	int mod_time;//time taken to modify page
	int nmod_percent;//percent of page not modified
	int nmod_time;
	printf("enter the time of Memory access ::");
	scanf("%d",&m);
	printf("enter the percent of page modified");
	scanf("%d",&mod_percent);
	printf("enter the time taken to modify the page");
	scanf("%d",&mod_time);//enter in milli seconds
	printf("enter the percent of of page not modified");
	scanf("%d",&nmod_percent);
	printf("enter the time");
	scanf("%d",&nmod_time);//enter in milli seconds
	p=m*100/((mod_percent*mod_time)+(nmod_percent*nmod_time));
	printf("the page fault rate is:: %f",p);
	printf(" \nend ");
}
