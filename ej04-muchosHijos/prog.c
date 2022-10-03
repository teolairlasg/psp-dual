 #include <stdio.h>
 #include <sys/types.h>
 #include <sys/wait.h>
 #include <unistd.h>

 #define N_HIJOS 100

int main(int argc, char const *argv[])
{
    pid_t p;
    for (int i = 0; i < N_HIJOS; i++)
    {
        p=fork();
        if(p==0){
            printf("Soy el hijo num: %d - %d\n", i, getpid());
            return i;
        }
    }
    int estado;
    pid_t pid;
    for (int i = 0; i < N_HIJOS; i++)
    {
        pid = wait(&estado);
        printf("El hijo con pid %d, ha acabado con valor: %d\n", 
                pid, WEXITSTATUS(estado));
        
    }
    return 0;
}
