// int i, *const cp;
// Invalid because cp needs an initializer.

// int *p1, *const p2;
// Same as before, but the p1 part is ok.

// const int ic, &r = ic;
// Also invalid because an initializer for ic is missing.

// const int *const p3;
// Again, illegal because of missing initializer.

// const int *p;
// This one is ok. p will be a pointer to const int.
