#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, char const *argv[]) {
  int status;
  if (fork() != 0) {
    waitpid(-1, &status, 0);
   }
   else{
     execvp(args[0], args);
   }
  return 0;
}
