#include <stdio.h>
#include <conio.h>
#include <process.h>
int Insert();
int Delete();

int main()
{

  while (1)
  {
    int ch;
    printf("\nWhat your want to do in your array\n");
    printf("\nOPERATIONS \n\n");
    printf("1.Insert\n");
    printf("2.Delete\n");
    printf("3.Close\n");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      Insert();
      break;
    case 2:
      Delete();
      break;

    case 3:
      printf("===========Thank You=============\n");
      exit(1);

    default:
      printf("Wrong choice\n");
    }
  }
  return 0;
}

int Insert() // program of Insertion
{
  int i, a[20], value, siz, pos;
  printf("INSERTION\n");
  printf("Enter the size of your array\n");
  scanf("%d", &siz);
  printf("Enter element of your array \n");
  for (i = 0; i < siz; i++)
  {
    printf("Enter the value = ");
    scanf("%d", &a[i]);
  }
  printf("Enter at which position you have to insert your value\n");
  scanf("%d", &pos);
  if (pos > siz)
  {
    printf("Insertion  is not possible\n");
  }
  else
  {
    printf("Enter which value you want to insert\n");
    scanf("%d", &value);

    for (i = siz; i > pos - 1; i--)
    {
      a[i] = a[i - 1];
    }
    a[pos - 1] = value;
    printf("Your value ");
    printf("%d", value);
    printf(" is inserted at ");
    printf("%d", pos);
    printf(" position\n");

    printf("# your new array after insertion is :-\n");
    for (i = 0; i <= siz; i++)
    {
      if (i == pos - 1)
      {
        printf("\n");
        printf("%d", a[i]);
      }
      else
      {
        printf("\n%d", a[i]);
      }
    }
  }
  return 0;
}

int Delete() //Program of Deletion
{
  int a[20], i, pos, siz, element;
  printf(" PROGRAM OF DELETION\n");
  printf(" Enter size of your array\n");
  scanf("%d", &siz);
  printf(" Enter element in your array according to your size\n");
  for (i = 0; i < siz; i++)
  {
    printf("Enter the value = ");
    scanf("%d", &a[i]);
  }
  printf("Which element you have to delete\n");
  scanf("%d", &element);
  printf("Enter at which position of element you have to delete \n");
  scanf("%d", &pos);
  if (pos > siz)
  {
    printf("Sorry deletion is not possible\n");
  }
  else
  {
    for (i = pos - 1; i < siz - 1; i++)
    {
      a[i] = a[i + 1];
    }
    printf(" Element ");
    printf("%d", element);
    printf(" has been deleted from your array\n");
    printf("Your new array is :-\n");
    for (i = 0; i < siz - 1; i++)
    {

      printf("\n ");
      printf("%d", a[i]);
    }
  }
  return 0;
}
