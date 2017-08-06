// std::cin >> int input_value;
// Since the name input_value will become available immediately after defined,
// the above statement will just ask for some input to be stored in the
// input_value object.

// int i = { 3.14 };
// This definition will fail because list initializers do not allow loss of
// information. So a narrowing conversion is required in order to make this
// type of initialization work.

// double salary = wage = 9999.99;
// This one will only work if wage was already defined before. If not, the
// compilation will fail.

// int i = 3.14;
// It works but the 3.14 value will be truncated before in order to fit an int
// type. So i will have a value of 3.
