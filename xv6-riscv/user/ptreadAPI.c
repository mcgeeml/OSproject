//Hello there -obi one
void create_thread(int addy, void func, void arg){
  int funcAddy = &func;

  printf("Address of funcAddy is: %d. function address is: %p\n", funcAddy, func);

  if(pthread_create_call(addy, (void*)funcAddy, arg) != 0){
    printf("API ERROR: pthread_create_call");
  }
}
