#include <sys/types.h>
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
int main(int argc, char const *argv[])
{
    if (argc != 2){
        printf("El uso del programa es: \n\t%s <num_pid>\n\n",argv[0]);
        exit(-1);
    }
    pid_t pid = atoi(argv[1]);
    kill(pid, SIGUSR1);
    return 0;
}
