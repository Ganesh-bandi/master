#include<stdio.h>
#include<stdlib.h>
struct point
{
    char name[30];
    int age;
};
int main()
{
  struct point *p1,*p2;
  p1=(struct point*)malloc(sizeof(int));
  printf("enter name :");
  scanf("%s ",p1->name);
  printf("enter a age:");
  scanf("%d ",&(p1->age));
  printf("%s  %d ",p1->name,p1->age);
  free(p1);
}