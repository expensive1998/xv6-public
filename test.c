#include "types.h"
#include "stat.h"
#include "user.h"

struct proc_info
{
  int pid;
  int memsize;
}; 

int
main(void)
{
    if (fork() != 0)
    {
        if (fork())
        {
            malloc(40));
        }
        else
        {
            malloc(20);
        }
        wait();
    }
    else
    {
        if (fork())
        {
            malloc(30);
        }
        else
        {
            malloc(50);
        }
        wait();
    }
    int max_p = 20;
    struct proc_info *allProcess = malloc(max_p*sizeof(struct proc_info));
    int N = procs(max_p, allProcess);
    for (int i = 0; i < N; i++)
    {
        printf(1, "pid : %d  memory size : %d \n", allProcess[i].pid, allProcess[i].memsize);
    }
    wait();
    exit();
}