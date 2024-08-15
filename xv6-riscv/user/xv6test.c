#include "kernel/types.h"
#include "user/user.h"
#include "user/ptreadAPI.h"
#include "user/joinAPI.h"

//void* get_pc() {return __builtin_return_address(0);}

void dummy(){
  printf("Dummy\n");
  exit(0);
}

int main(int argc, char *argv[]) {
  //printf("%p\n", get_pc() );
  //printf("Dummy is at: %p\n", dummy);

  //printf("%p\n", get_pc());
  create_thread(0, dummy, 0);

  wait(0);

  join_thread();

  exit(0);
}
