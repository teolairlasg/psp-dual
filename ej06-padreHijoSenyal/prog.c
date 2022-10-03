#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>

void tratarSenyal(int numSenyal);

int main(int argc, char const *argv[])
{
    signal(SIGINT, tratarSenyal);
    pid_t p;
    p=fork();
    if (p==0)
    {
        printf("Soy el hijo.\n");
        sleep(1);
        kill(getppid(),SIGINT);
    }else{
        printf("Soy el padre.\n");
        pause();
        
        pid_t hijoTerminado;
        int estado;
        hijoTerminado = wait(&estado);
        printf("El hijo %d ha terminado con estado: %d\n", hijoTerminado, WEXITSTATUS(estado));
    }
    

    return 0;
}

void tratarSenyal(int numSenyal){
    printf("He recibido una señal!!\n");
}
