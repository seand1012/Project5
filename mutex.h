#include "spinlock.h"
// mutex struct
typedef struct{
  uint isLocked;
  struct spinlock lock;
  // For debugging: 
  // struct proc* owner;
}mutex;