#include <stdio.h>

int main()
{
  int main_ch, ch;
  float num1, num2, radius, base, height, side, principal, rate, time, final;
  printf("\n1. Assignment 1");
  printf("\n2. Assignment 2");
  printf("\n3. Assignment 3");
  printf("\n\nEnter choice --> ");
  scanf("%d", &main_ch);
  if (main_ch == 1)
  {
    printf("\n1. Add");
    printf("\n2. Subtract");
    printf("\n3. Product");
    printf("\n\nEnter choice --> ");
    scanf("%d", &ch);
    if (ch == 1)
    {
      printf("\nEnter first number --> ");
      scanf("%f", &num1);
      printf("Enter second number --> ");
      scanf("%f", &num2);
      printf("\nThe sum is --> %f\n", num1 + num2);
    }
    else if (ch == 2)
    {
      printf("\nEnter first number --> ");
      scanf("%f", &num1);
      printf("Enter second number --> ");
      scanf("%f", &num2);
      printf("\nThe difference is --> %f\n", num1 - num2);
    }
    else if (ch == 3)
    {
      printf("\nEnter first number --> ");
      scanf("%f", &num1);
      printf("Enter second number --> ");
      scanf("%f", &num2);
      printf("\nThe product is --> %f\n", num1 * num2);
    }
    else
      printf("\nInvalid Choice");
  }
  else if (main_ch == 2)
  {
    printf("\n1. Area of Circle");
    printf("\n2. Perimeter of Circle");
    printf("\n3. Area of Triangle");
    printf("\n4. Perimeter of Triangle");
    printf("\n5. Area of Rectangle");
    printf("\n6. Perimeter of Rectangle");
    printf("\n7. Area of Square");
    printf("\n8. Perimeter of Square");
    printf("\n\nEnter choice --> ");
    scanf("%d", &ch);
    if (ch == 1)
    {
      printf("\nEnter radius --> ");
      scanf("%f", &radius);
      final = (22 * radius * radius)/7;
      printf("The area is --> %f\n", final);
    }
    else if (ch == 2)
    {
      printf("\nEnter radius --> ");
      scanf("%f", &radius);
      final = (44 * radius)/7;
      printf("The perimeter is --> %f\n", final);
    }
    else if (ch == 3)
    {
      printf("\nEnter base --> ");
      scanf("%f", &base);
      printf("Enter height --> ");
      scanf("%f", &height);
      final = (base * height)/2;
      printf("The area is --> %f\n", final);
    }
    else if (ch == 4)
    {
      printf("\nEnter side 1 --> ");
      scanf("%f", &side);
      final = side;
      printf("Enter side 2 --> ");
      scanf("%f", &side);
      final = final + side;
      printf("Enter side 3 --> ");
      scanf("%f", &side);
      final = final + side;
      printf("The perimeter is --> %f\n", final);
    }
    else if (ch == 5)
    {
      printf("\nEnter side 1 --> ");
      scanf("%f", &base);
      printf("Enter side 2 --> ");
      scanf("%f", &height);
      final = base * height;
      printf("The area is --> %f\n", final);
    }
    else if (ch == 6)
    {
      printf("\nEnter side 1 --> ");
      scanf("%f", &side);
      final = side;
      printf("Enter side 2 --> ");
      scanf("%f", &side);
      final = final + side;
      final = final * 2;
      printf("The perimeter is --> %f\n", final);
    }
    else if (ch == 7)
    {
      printf("\nEnter side --> ");
      scanf("%f", &side);
      final = side * side;
      printf("The area is --> %f\n", final);
    }
    else if (ch == 8)
    {
      printf("\nEnter side --> ");
      scanf("%f", &side);
      final = 4 * side;
      printf("The perimeter is --> %f\n", final);
    }
    else
      printf("\nInvalid Choice");
  }
  else if (main_ch == 3)
  {
    printf("\nEnter principal amount --> ");
    scanf("%f", &principal);
    printf("Enter interest rate --> ");
    scanf("%f", &rate);
    printf("Enter time (years) --> ");
    scanf("%f", &time);
    printf("\nSimple Interest --> %f\n", principal + (principal * rate * time)/100);
  }
  else
    printf("\nInvalid Choice");
}
