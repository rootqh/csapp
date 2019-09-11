long loop(long x,int n)
{
    long result = 0;
    long mask;
    for(mask = 1;mask != 0;mask = mask << (n & 0x0000ffff) ){
        result |= x & mask;
    }
    return result;
}