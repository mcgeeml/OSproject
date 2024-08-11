#include "kernel/types.h"
#include "user/user.h"

int main(int argc, char *argv[]) {
  //printf("Hello from my test case in xv6\n");
  uint64 p = 0xdeadbeef;

  pthread_create_call(0, 0, (void*) p);

  exit(0);
}
