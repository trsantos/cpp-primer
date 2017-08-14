// a = 42;
// a is an int object, the same as i, so the assignment is ok and now i equals 42.

// b = 42;
// b itself is an int too, so b now equals 42 and ci is unchanged.

// c = 42;
// Same as with b. cr was just a reference to ci, so everything said of b applies here.

// d = 42;
// Illegal because 42 (an int object) cannot be assigned to an int *.

// e = 42;
// Illegal. For the same reason as above.

// g = 42;
// g is a reference to const int (ci, in this case). Since ci is const, its value cannot change.
