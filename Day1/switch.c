#include <stdio.h>

// int main()
// {
//   int day = 7;

//   switch (day)
//   {
//   case 1:
//     printf("Monday");
//     break;
//   case 2:
//     printf("Tuesday");
//     break;
//   case 3:
//     printf("Wednesday");
//     break;
//   case 4:
//     printf("Thursday");
//     break;
//   case 5:
//     printf("Friday");
//     break;
//   case 6:
//     printf("Saturday");
//     break;
//   case 7:
//     printf("Sunday");
//     break;
//   }
//   return 0;
// }

// using default now

#include <stdio.h>

int main()
{
  int day = 4;

  switch (day)
  {
  case 6:
    printf("Today is Saturday");
    break;
  case 7:
    printf("Today is Sunday");
    break;
  default:
    printf("Looking forward to the Weekend");
  }

  return 0;
}

//
// int main()
// {
//   int value = 0;
//   switch (value)
//   {
//   case 0:
//     // do something
//     break;
//   case 1:
//     // do something else
//     break;

//   default:
//     // something if anything not match
//   }
// }
