#include <stdio.h>
#include <unistd.h>
#include <string.h>
#define MSGSIZE 16
char* msg1 = "Good Morning";
char* msg2 = "GoodAfternoon";

int main()
{
    char inbuf[MSGSIZE];
    char b[50];
    int p[2], i,a,j; 
    if (pipe(p) < 0) 
        exit(1); 
    /* continued /
    / write pipe /
    write(p[1], msg1, MSGSIZE);
    write(p[1], msg2, MSGSIZE);
    
    for (i = 0; i < 2; i++) {
        / read pipe */
        read(p[0], inbuf, MSGSIZE);
        a=strlen(inbuf);
    
        for (j=0;j<a;j++)
        {
         b[j]=inbuf[a-j];  
         
        }
        printf("% s\n", b);
    }
    return 0; 
}
