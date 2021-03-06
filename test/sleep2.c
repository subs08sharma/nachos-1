/* sort.c
 *    Test program to sort a large number of integers.
 *
 *    Intention is to stress virtual memory system.
 *
 *    Ideally, we could read the unsorted array off of the file system,
 *	and store the result back to the file system!
 */

#include "syscall.h"

int
main()
{
  PrintInt(1);
  Sleep(300);
  Sleep(500);
  Sleep(200);
  Sleep(400);
  PrintInt(0);
}

