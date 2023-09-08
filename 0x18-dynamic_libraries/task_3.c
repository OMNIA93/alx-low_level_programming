int rand()
{
  int sequence[] = {9, 8, 10, 24, 75, 9};
  static int count = 0;

  return(sequence[count++]);
}
