// const int buf;
// Illegal because initializer is missing.

// int cnt = 0;
// Ok.

// const int sz = cnt;
// Ok.

// ++cnt; ++sz;
// The first one is ok, the second is not ok. We can't change the value of a
// const object.
