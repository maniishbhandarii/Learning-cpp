#include<stdio.h>
#include<stdlib.h>
//using namespace std;
 
int main(int argc, char **argv)
{
    char *heapMemory = malloc(100);
    if(NULL == heapMemory)
        perror("malloc failed bruh");
    return 0;
}