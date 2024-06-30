#include <stdio.h>
#include <unistd.h>
int main() {
 // Check and display _POSIX_VERSION constant
 printf("_POSIX_VERSION constant: %ld\n", _POSIX_VERSION);
 // Print POSIX defined configuration options supported on the system
#ifdef _POSIX_ASYNCHRONOUS_IO
 printf("POSIX Asynchronous I/O supported\n");
#endif
#ifdef _POSIX_BARRIERS
 printf("POSIX Barriers supported\n");
#endif
#ifdef _POSIX_CHOWN_RESTRICTED
 printf("POSIX Chown Restricted supported\n");
#endif
#ifdef _POSIX_CLOCK_SELECTION
 printf("POSIX Clock Selection supported\n");
#endif
#ifdef _POSIX_CPUTIME
 printf("POSIX CPU Time supported\n");
#endif
#ifdef _POSIX_FSYNC
 printf("POSIX Fsync supported\n");
#endif
#ifdef _POSIX_IPV6
 printf("POSIX IPv6 supported\n");
#endif
#ifdef _POSIX_JOB_CONTROL
 printf("POSIX Job Control supported\n");
#endif printf("POSIX Saved IDs supported\n");
#endif
#ifdef _POSIX_SEMAPHORES
 printf("POSIX Semaphores supported\n");
#endif
#ifdef _POSIX_SHARED_MEMORY_OBJECTS
 printf("POSIX Shared Memory Objects supported\n");
#endif
#ifdef _POSIX_SHELL
 printf("POSIX Shell supported\n");
#endif
#ifdef _POSIX_SPAWN
 printf("POSIX Spawn supported\n");
#endif
#ifdef _POSIX_SPIN_LOCKS
 printf("POSIX Spin Locks supported\n");
#endif#ifdef _POSIX_V7_LPBIG_OFFBIG
 printf("POSIX V7 LPBIG OFFBIG supported\n");
#endif
 return 0;
}
