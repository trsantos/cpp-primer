// r1 = v2;
// This will make v1 (the object referenced by r1) equal to v2 (or zero) and
// v2's top-level const will get ignored during the copy.

// p1 = p2;
// This statement is invalid because p1 cannot hold an address of a const int
// object, but that is the type of the object p2 points to.

// p2 = p1;
// Fine. No const ignoring here.

// p1 = p3;
// Can't do that. p3 is a const pointer to const int (wow) so it cannot be
// assigned to p1 because of its low-level const, which never gets ignored.

// p2 = p3;
// Fine. And p3's top-level const will get ignored during this copy.
