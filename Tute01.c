/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int marks1, marks2;
  int sum;
  float avg;45
    

  printf("Enter your marks on subject 01: ");
  scanf("%d",&marks1);

  printf("Enter your marks on subject 02: ");
  scanf("%d",&marks2);

  sum = marks1 + marks2;
  avg = sum / 2.0;

  printf("Average of 02 subject is %.2f",avg);
  
  return 0;
}

