#include "holberton.h"
#include <ctype.h>
/**
 *_isupper- print when upper
 * return: 0 or 1
 */
int _isupper(int c){
  if(isupper(c))
  {
    return(1);
  }
  else
  {
    return(0);
  }
}
