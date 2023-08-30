#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>  // Include this header for wait() and related functions

int main() {
    pid_t child;
    int status;
    child = fork();
    switch (child) {
        case -1:
            perror("fork");
            exit(1);
        case 0:
            exit(2);
            break;
        default:
            wait(&status);
            printf("%d\n", WEXITSTATUS(status));
            break;
    }
    return 0;
}
