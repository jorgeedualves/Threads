#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int main( int argc, char *argv)
{
int pid;

pid = fork();

if (pid == -1)
    return (1);
printf("Hello from Process\n");
printf("Process id %d\n", getpid());
if (pid != 0)
    wait(NULL);

return(0);
}