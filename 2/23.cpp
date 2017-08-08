// We can only test whether a pointer p has a non-null value. If it has not
// been initialized, there is no way to distinguish its value from an address
// to a valid object, but using it will be an error. So pointers should always
// be initialized to nullptr or to an address of a valid object.
