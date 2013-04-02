#include <iostream>
#include "Aw.h"
#include "reason.h"

int main(int argc, char **argv)
{
  int rc;
  
  if ((rc = aw_init(AW_BUILD)) != RC_SUCCESS)
    {
      std::cout << "Failed at init: " << rc << std::endl;
      return -1;
    }
  
  aw_term();
  return 0;
}
