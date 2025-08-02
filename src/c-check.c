#include <bson/bson.h>
#include <mongoc/mongoc.h>

#if defined(BUILD_MONOLITHIC)
#define main   bson_c_check_test_main
#endif

int
main (void)
{
   return 0;
}
