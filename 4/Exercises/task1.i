# 1 "task1.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "task1.c"







int main(void)
{
 int i, grade, total, average;

 i = 0;
 total = 0;

 while (i < 10) {
  printf("Enter grade: ");
  scanf("%d", &grade);
  total += grade;
  ++i;
 }

 average = total / 10;
 printf("Average is %d\n", average);

 return 0;
}
