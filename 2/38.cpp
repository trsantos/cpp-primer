// decltype differs from auto in a variety of ways. The first is that the
// former can be used even when we don't want to initialize an variable whereas
// auto requires an initializer to work. Second, decltype handles top-level
// const and references in a different way. When the expression given to
// decltype is a variable, it will return the type of the variable including
// its const and reference modifiers. So in the following code, for example, j
// has type const int and k has type int (nonconst):

// const int i = 10;
// decltype(i) j = i;
// auto k = i;
