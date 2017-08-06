// int month = 9, day = 7;
// int month = 09, day = 07;

// The differences between the first and second definitions is that the number
// literals 9 and 7 are prefixed with a 0 in the latter case, which causes the
// program to fail at compile time because 09 isn't an valid octal number. The
// day variable would, of course, have the same value in either case, if the
// rest of the program is changed to allow compilation.
