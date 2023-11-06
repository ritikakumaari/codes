#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
    int val;
    struct node *next;
};
void main()
{
    int count = 0, i, val, after, before;
    struct node * head = NULL;
    printf("enter number of elements: ");
    scanf(%d, &count);
    for (i = 0; i < count; i++)
    {
        printf("enter %dth element: ", i);
        scanf("%d", &val);
        insert_front(&head, val);
    }
}
