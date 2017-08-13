// int null = 0, *p = null;
// The code above is illegal because a pointer to int cannot be simply assigned
// to an int. But if we take the address of null, or if we insert the const
// specifier in front of the declaration, the code becomes legal. In the first
// case, p would be an ordinary pointer to int, which could be changed later if
// desired. In the latter case, p will always hold the nullptr (or zero)
// address, as null will become a const int object.
