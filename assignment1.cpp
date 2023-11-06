#include<stdio.h>
int triangle_area(int base,int height)
{
	double area;
	area=(base*height)/2;
	return area;
}

void swap(int h,int j)
{
	h=h^j;
	j=h^j;
	h=h^j;
	printf("after swapping a= %d and b = %d\n",h,j);
}

float remainder(int a,int b)
{
 int c;
c=a/b;
return c;
}

int main(void)
{
	int e,p;
	printf("Enter the base and height of triangle\n");
	scanf("%d%",&e,&p);
	printf("the area of the triangle is%d\n",triangle_area(e,p));
	int x,y;
	printf("enter the two value for swapping\n");
	scanf("%d%d",&x,&y);
	swap(x,y);
	int i,j;
	printf("enter the number for remainder\n");
	scanf("%d%d",&i,&j);
	printf("the remainder is%f\n",remainder(i,j));
	return 0;
}
