// int ival = 1.01;
// Invalid because the initializer must be an int object.

// int &rval = 1.01;
// Invalid because the initializer is not an object.

// int &rval2 = ival;
// Valid only if ival is an int object.

// int &rval3;
// Invalid because a reference must be initialized.
