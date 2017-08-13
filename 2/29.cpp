// Assuming all variables had been properly initialized...

// i = ic;
// Cool.

// p1 = p3;
// Not cool. p1 is an ordinary pointer to int, which cannot hold the address
// of any const object.

// p1 = &ic;
// Same as above. In this case, we are trying to match 'int *' to
// 'const int *'.

// p3 = &ic;
// Invalid because p3 value cannot change, since it is a cont pointer.

// p2 = p1;
// Same as above.

// ic = *p3;
// Invalid because ic is a const int object, so its value cannot change.
