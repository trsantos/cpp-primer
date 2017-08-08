int main()
{
  int i = 10;
  int j = 100;
  int *pi = &i;
  *pi = 20;
  pi = &j;
  return 0;
}
