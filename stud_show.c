#include"student.h"

void show_list(SLL *ptr)
{
   printf("\033[32m*******STUDENT LIST*******\033[0m\n");
   printf("\033[35m");
   printf("**************************\n");
   if(ptr == 0)
   {
     printf("No Nodes\n");
     printf("**************************\n");
     return;
   }
   
   while(ptr)
   {
     printf("%d %s %f\n",ptr -> rollno ,ptr -> name , ptr -> marks);
     ptr = ptr -> next;
   }
   printf("**************************\n");
   printf("\033[0m");
}
