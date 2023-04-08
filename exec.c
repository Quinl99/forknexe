#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>



int main (){ 

//command that will be executed
char* cmd = "ls";

//arguments for command
char* argv[3];
argv[0]="ls";
argv[1]="-l";
argv[2]="/usr";
argv[3]=NULL;

//call execvp system call
int cmdd = execvp(cmd, argv);

//determined if command was terminated correctly
if( *cmd == -1){
printf("incorrectly terminated");
exit(1);

}

return 0;
}

