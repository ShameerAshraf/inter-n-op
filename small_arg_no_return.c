#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
pid_t parent = getpid();
pid_t pid = fork();

if (pid == -1)
{
    // error, failed to fork()
} 
else if (pid > 0)
{
    int status;
    printf("waiting\n");
    waitpid(pid, &status, 0);
}
else 
{
    // we are the child
    char proc1[] = "small_arg_no_return";
    char *arg1[] = {"small_arg_no_return", "sye_", NULL};
    printf("executing\n");
    execv(proc1, arg1);
    _exit(EXIT_FAILURE);   // exec never returns
}
}
