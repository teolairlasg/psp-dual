#include <unistd.h>
#include <stdio.h>
#include <signal.h>

void tratarSenyal(int num_senyal);

int main(int argc, char const *argv[])
{
    signal(SIGUSR1, tratarSenyal);
    printf("%d\n", getpid());
    pause();
    return 0;
}

void tratarSenyal(int num_senyal)
{
    printf("He recibido la señal: %d\n", num_senyal);
}
