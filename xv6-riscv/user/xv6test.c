#include "kernel/types.h"
#include "user/user.h"
#include "user/ptreadAPI.h"


void* get_pc() {return __builtin_return_address(0);}

void dummy(){
  printf("Dummy\n");
  exit(0);
}

int main(int argc, char *argv[]) {
  //printf("Hello from my test case in xv6\n");
  //uint64 p = 0xdeadbeef;
  //int threads[1];

  //unsigned int * addy = (unsigned int *) &threads[0];
  printf("%p\n", get_pc() );
  printf("Dummy is at: %p\n", dummy);

  printf("%p\n", get_pc());
  create_thread(0, dummy, 0);
  //pthread_create_call(0, 0, (void*) p);

  wait(0);

  exit(0);
}
