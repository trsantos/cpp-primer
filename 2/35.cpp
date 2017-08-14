// const int i = 42;
// i is const int, of course.

// auto j = i; const auto &k = i; auto *p = &i;
// j is int (i's top-level const is dropped); k is const int&; p is const int* (& of a const object is low-level const).

// const auto j2 = i, &k2 = i;
// j2 is a const int. k2 is a reference to const int.

int main()
{
  const int i = 42;
  // i = 1; // Not cool.
  auto j = i; const auto &k = i; auto *p = &i;
  j = 1; // Cool.
  // k = 1; // Not cool.
  // *p = 1; // Not cool.
  const auto j2 = i, &k2 = i;
  // j2 = 1; // Not cool.
  // k2 = 1; // Not cool.
  return 0;
}
