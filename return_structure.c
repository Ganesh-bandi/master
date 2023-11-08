#include<stdio.h>
struct point 
{
    int x;
    int y;
};

struct point fun(int x,int y)
{
    struct point news;
    news.x=x;
    news.y=y;
    return news;
}
 void print(struct point p1)
{
    printf("%d %d ",p1.x,p1.y);
}
int main()
{
    struct point p1,p2;
    p1=fun(3,6);
    print(p1);
}