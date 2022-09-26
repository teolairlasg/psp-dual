#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main(int argc, char const *argv[])
{
    fork();
    fork();
    printf("Soy: %d y mi padre es: %d\n",getpid(),getppid());
    return 0;
}
