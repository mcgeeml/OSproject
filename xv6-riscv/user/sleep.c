#include "kernel/types.h"
#include "user/user.h"

int main(int argc, char **argv)
{
  if(argc < 2){
    printf("incorrect number of arguments. should have one int input");
    exit(0);
  }

  int tick = atoi(argv[1]);
  sleep(tick);
  exit(1);
}
