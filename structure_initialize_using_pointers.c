#include<stdio.h>
struct point
{
    int x;
    int y;
};
int main()
{
  struct point *p1,*p2;
  p1=(struct point*)malloc(sizeof(int));
  p1->x=5;
  p1->y=9;
  printf("%d  %d ",p1->x,p1->y);
}