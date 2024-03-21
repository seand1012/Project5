#include "spinlock.h"
// mutex struct
typedef struct{
  int isLocked;
  struct spinlock* lock;
  struct proc* owner;
}mutex;
