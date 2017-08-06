// short, int, long and long long differ from each other in regards to their
// minimum sizes (16, 16, 32 and 64 bits, respectively). Compilers may choose
// sizes greater than the minimum, of course, provided that sizeof(short) <=
// sizeof(int) <= sizeof(long) <= sizeof(long long).

// signed types can be used to represent negative or positive numbers, whereas
// unsigned types can only be zero or greater.

// float and double are both floating-point number types, and again differ on
// their minimum "sizes" (or minimum significant digits, to be more precise).
// So float should have at least 6 significant digits, and double 10
// significant digits. In practice, these types are typically represented in
// one and two words, respectively, yielding 7 significant digits for float and
// 16 for doubles.
