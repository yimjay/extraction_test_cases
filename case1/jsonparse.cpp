#include <iostream>
#include "jsonparse.h"
using namespace std;

class JsonParser{
      private:
            const char *json;
            int pos;
            int len;
            int depth;
            /* for handling atomic values */
            int vstart;
            int vlen;
            char vtype;
            char error;
            char stack[JSONPARSE_MAX_DEPTH];
      public:
            
};