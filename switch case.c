#include<stdio.h>
main()
{
 printf("select a colour:\n1. green\n2. yellow\n3. pink\n4. black");
 int choice=0;
 sacnf("%d",&choice);
 switch(choice)
 {
  case 1:printf("you selected green.");
          break;
  case 2:printf("you selected yellow.");
          break;
  case 3:printf("you selected pink.");
         break;
  case 4:printf("you selected black.");
         break;
   default:printf("Invalid choice");
 }
} 
