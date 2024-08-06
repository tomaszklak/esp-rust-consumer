#include <stdio.h>
#include <hello_world.h>

void app_main(void)
{
  printf("Hello world from C!\n");
  int result = hello_world("Alice");
  printf("Rust returned code: %d\n", result);
}
