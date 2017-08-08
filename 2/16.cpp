// int i = 0, &r1 = i; double d = 0, &r2 = d;

// r2 = 3.14159;
// Valid because r2 is a reference to an double object.

// r2 = r1;
// Valid because r1 is an int object and it can be casted into an double
// object.

// i = r2;
// Valid but r2's value will be truncated in order to fit i.

// r1 = d;
// Same as above.
