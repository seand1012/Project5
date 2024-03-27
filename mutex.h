#include "spinlock.h"
// mutex struct
typedef struct{
  uint isLocked;
  struct spinlock lock;
  struct proc *waiting_procs[64];
  // For debugging: 
  int pid;
}mutex;