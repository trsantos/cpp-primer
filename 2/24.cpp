// int i = 42; void *p = &i; long *lp = &i;

// The initialization of p is valid because it is a void* pointer, which can
// hold the address of any object. That of lp is invalid because i is not a
// long object.
