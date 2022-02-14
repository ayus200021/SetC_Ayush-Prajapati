#include <stdio.h>

int sum(int a, int b);
int subtract(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int (*p[4]) (int x, int y);

int main(void)
{
  int result;
  int i, j, op;

  p[0] = sum;
  p[1] = subtract; 
  p[2] = mul; 
  p[3] = div; 

  printf("Enter 1st numbers:\n");
  scanf("%d", &i);
  printf("Enter 2nd numbers: \n");
  scanf("%d", &j);
  
  printf("0: Add, 1: Subtract, 2: Multiply, 3: Divide\n");
  do {
    printf("Enter number of operation To Perform : ");
    scanf("%d", &op);
  } while(op<0 || op>3);

  result = (*p[op]) (i, j);
  printf("%d", result);

  return 0;
}

int sum(int a, int b)
{
    printf("Sum Is: ");
  return a + b;
}

int subtract(int a, int b)
{
     printf("Subtraction  Is: ");
  return a - b;
}

int mul(int a, int b)
{
     printf("Multiplicati Is: ");
  return a * b;
}

int div(int a, int b)
{
  if(b)      // For Non Zero
      return a / b;
  else 
      return 0;
}

