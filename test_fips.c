/*
 * Test OpenSSL FIPS Mode
 * modified from https://wiki.openssl.org/index.php/FIPS_mode_set()
 */

#include <stdio.h>
#include <openssl/crypto.h>
#include <stdlib.h>

int main(void)
{
    int mode = FIPS_mode(), ret = 0;
    /* Toggle FIPS mode */
    if(mode == 0)
    {
        ret = FIPS_mode_set(1 /*on*/);
    }
    else
    {
        ret = FIPS_mode_set(0 /*off*/);
    }
    if(ret == 1)
    {
        printf("FIPS_mode_set succeeded\n");
        exit(0);
    }
    else
    {
        printf("FIPS_mode_set failed\n");
        exit(1);
    }
    return ret;
}
