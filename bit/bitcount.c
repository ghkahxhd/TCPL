/* bitcount: count 1 bits in x */
int bitcount(unsigned x) {
    int b;

    for (b = 0; x != 0; x >>= 1)
        if (x & 1)
            b++;

    return b;
}

/* Ex 2-9; bitcount; faster version
(In a two's complement number system, x &= (x-1) deletes the rightmost 1-bit in x.) */
int bitcount(unsigned x) {
    int b = 0;

    for (b = 0; x != 0; x &= (x-1))
        b++;
        
    return b;
}
