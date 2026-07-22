#include"student.h"

//GENRATE ROLLNO//
int rollno(SLL *ptr)
{
  int roll = 1,f=0;
  SLL *t=ptr;
  while(1)
  {
  ptr=t;
  f=0;
  while(ptr)
  {
    if(ptr -> rollno == roll)
    f=1;
    ptr = ptr -> next;
  }
  if(f==0)
  return roll;
  roll++;
  }
  return roll;
}


//ADD STUDENT//
void student_add(SLL **ptr)
{
   SLL *newnode , *pos;
   newnode = malloc(sizeof(SLL));
   printf("Enter The Name,Marks\n");
   newnode -> rollno = rollno(*ptr);
   scanf("%s %f",newnode -> name , &newnode -> marks);
   
   if(*ptr == 0 || newnode -> rollno < (*ptr) -> rollno)
   {
     newnode -> next = *ptr;
     *ptr = newnode;
   }
   else
   {
     pos = *ptr;
     while(pos -> next != 0 && newnode -> rollno > pos -> next -> rollno)
     pos = pos -> next;
     newnode -> next = pos -> next;
     pos -> next = newnode;
   }
   
   
   printf("\033[32mData Added \033[0m\n");  
}
