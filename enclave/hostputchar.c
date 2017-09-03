#include <openenclave.h>
#include <oeinternal/calls.h>

int OE_HostPutchar(int c)
{
    int ret = -1;

    if (__OE_OCall(OE_FUNC_PUTCHAR, (oe_uint64_t)c, OE_NULL) != OE_OK)
        goto done;

    ret = 0;

done:

    return ret;
}
