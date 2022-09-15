#include <ctype.h>
#include "main.h"
/**
 ** _isupper - check for upper case letter
 ** @c : character to check the case
 ** Return:0 or 1
 * */
int _isupper(int c)
{
  if (isupper(c))
  {
    return(0);
  }
  else
  {
    return(1);
  }
}
