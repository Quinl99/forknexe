#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <string.h>


//parent and child process            
void  pp(void);               
void  cd(void); 

void  main(void)
{
//if statement which determine if process will be child or parent process
   if (fork() == 0)
        cd();
   else 
        pp();
}

void cd(void)
{
   int i;
   //simple loop that always processes to go up to 20
   for (i = 1; i <= 20; i++)
        printf("Child : %d\n", i);   
}

void pp(void)
{
   int i;
   //simple loop that always processes to go up to 20
   for (i = 1; i <= 20; i++)
          printf("Parent: %d\n", i);
}
