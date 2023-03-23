#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

void Error(char *msg) { // error function
    fprintf(stderr, "Error: %s\n", msg);
    exit(1);
} 

int main(int argc, char *argv[])
{
    if (argc != 1)
        Error("Bad number of parameters.\n"); // checks the amount of parameters.

    char prog[30], tempProg[30], tempProg2[30], *param[4];

    do {
        printf("\nMyShell> "); //prints prompt line.
        fgets(prog, 32, stdin); // get programeters from the user.
        prog[strlen(prog) - 1] = '\0';
        param[0] = strtok(prog, " ");
        param[1] = strtok(NULL, " ");
        param[2] = strtok(NULL, " ");
        param[3] = strtok(NULL, " ");

        if (fork() == 0) { // new process for exec prog.
            execlp(prog, param[0], param[1], param[2], param[3], 0);
            execlp(prog, param[0], param[1], param[2], 0);
            execlp(prog, param[0], param[1], 0);
            execlp(prog, param[0], 0);
            strcpy(tempProg, param[0]);
            strcpy(tempProg2, "./");
            strcat(tempProg2, tempProg);
            execlp(tempProg2, tempProg2, param[1], param[2], param[3], 0);
            execlp(tempProg2, tempProg2, param[1], param[2], 0);
            execlp(tempProg2, tempProg2, param[1], 0);
            execlp(tempProg2, tempProg2, 0);
            Error("Not Supported.");
        }
        wait(); // wait for the process to end before get another one.
    } while (strcmp(prog, "exit") != 0); // run until got 'exit'.

    wait();
    return 0;
}