/*
A zombie process is a process that has terminated but has not been cleaned up yet.
It is the responsibility of the parent process to clean up its zombie children.
*/
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
  pid_t child_pid;
  child_pid = fork();
  if(child_pid > 0) {
    sleep(10);
  }
  else {
    exit(0);
  }
  return 0;
}
