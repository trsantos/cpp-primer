// const int v2 = 0; int v1 = v2;
// v2 has top-level const. When copied to v1, this top-level const gets
// ignored.

// int *p1 = &v1, &r1 = v1;
// Both definitions are ok, since v1 is an ordinary int object.

// const int *p2 = &v2, *const p3 = &i, &r2 = v2;
// So p2 will have a low-level const, p3 both low and high-level const
// (assuming i is a normal int object), and r2 a low-level const like p2.
