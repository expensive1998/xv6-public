#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[])
{
    int pid;
    int child_pid, waitT, runT;
    pid = fork();
    if (pid < 0)
    {
        printf(1, "fork faild!\n");
        exit();
    }
    if (pid == 0)
    {
        printf(1, "child created with pid %d\n", getpid());
    }
    else
    {   
        //delay for parent to wait for child
        int loopC = 0;
        while(loopC < 1085)
        {
            printf(1, "%d",loopC);
            loopC = loopC+1;
        }
        child_pid = waitx(&waitT, &runT);
        printf(1, "\n Parent wait time : %d , Parent RunTime : %d with cildpid : %d\n", waitT, runT, child_pid);
    }
    exit();
} 