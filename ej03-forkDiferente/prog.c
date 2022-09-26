#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char const *argv[])
{
    pid_t p;

    p = fork();
    if (p == 0)
    {

        sleep(1);
        printf("Soy el hijo\n");
    }
    else
    {
        printf("Soy el padre\n");
        wait(NULL);
    }
    printf("Hola soy %d\n", getpid());
    return 0;
}
