#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>

int main(int argc, char const *argv[])
{
    fprintf(stdout, "Mi pid: %d\n", getpid());
    char * parametros[]={"firefox","https://educa.aragon.es", "https://www.google.com"};

    execv("/usr/bin/firefox", parametros);

    return 0;
}
