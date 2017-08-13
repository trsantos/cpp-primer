// int i = -1, &r = 0;
// Illegal because the nonconst r cannot be assigned a temporary object.

// int *const p2 = &i2;
// That's ok only if i2 is an int object. In that case, p2 will be a const
// pointer to i2.

// const int i = -1, &r = 0;
// Legal. i will be a const int object with permanent value of -1 and r will be
// a const reference to a temporary int object of value 0.

// const int *const p3 = &i2;
// Legal if i2 is an int object (const or nonconst).

// const int *p1 = &i2;
// Legal if i2 is an int object. p1 will be a pointer to const, which will not
// be allowed to change the value of the object it points to, even if it's
// nonconst.

// const int &const r2;
// This one is invalid because 1) a reference should be initialized when
// declared and 2) a reference itself cannot be const.

// const int i2 = i, &r = i;
// Fine if i is an int object (again, const or nonconst).
