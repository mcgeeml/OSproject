//Hello there -obi one

void create_thread(int addy, void(* func), void* arg){
  //void (*funcAddy)(int) = (void *) &func;

  printf("Address of funcAddy is: %d. function address is: %p\n", 0, func);

  if(pthread_create_call(addy, func, arg) != 0){
    printf("API ERROR: pthread_create_call");
  }//(void*) funcAddy
}
