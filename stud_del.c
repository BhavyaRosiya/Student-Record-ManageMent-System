#include"student.h"

void student_del(SLL **ptr)
{
   char op;
   printf("\033[34m");
   printf("|================================|\n");
   printf("| r/R :Enter Rollno To Del       |\n");
   printf("| n/N :Enter Name To Del         |\n");
   printf("|================================|\n");
   printf("Enter The Choice = \033[0m");
   scanf(" %c",&op);
   
  
   if(op == 'r' || op == 'R')   //DELETE BY ROLLNO//
   {
      
      if(*ptr == 0)
      {
        printf("**********************\n");
        printf("No Nodes\n");
        printf("**********************\n");
        return;
      }
      
      SLL *del = *ptr , *prev;
      int n,f=0;
      printf("Enter The Rollno To Del = ");
      scanf("%d", &n);
      
      while(del)
      {
        if(del -> rollno == n)
        {
          f = 1;
          SLL *temp = del;
          if(*ptr == del)
          {
            *ptr = del -> next;
            del = *ptr;
          }
          else
          {
            prev -> next = del -> next;
            del = prev -> next;
          }
          free(temp);
          printf("\033[32m");
          printf("**********************\n");
          printf("Node Deleted\n");
          printf("**********************\033[0m\n");
        }
        else
        {
          prev = del;
          del = del -> next;
        }
      }
      if(f == 0)
      {
      printf("**********************\n");
      printf("No Nodes oF That Rollno\n");
      printf("**********************\n");
      }
   }
   
   else if(op == 'n' || op == 'R')  //DELETE BY NAME//
   {
     
      if(*ptr == 0)
      {
        printf("**********************\n");
        printf("No Nodes\n");
        printf("**********************\n");
        return;
      }
      SLL *del = *ptr , *prev;
      int z = 0;
      char s[20];
      printf("Enter The Name To Del = ");
      scanf("%s", s);
      
      while(del)
      {
        if(strcmp(del -> name , s) == 0)
        {
          z = 1;
          SLL *temp = del;
          
          if(*ptr == del)
          {
            *ptr = del -> next;
            del = *ptr;
          }
          else
          {
            prev -> next = del -> next;
            del = prev -> next;
          }
          free(temp);
          printf("\033[32m");
          printf("**********************\n");
          printf("Node Deleted\n");
          printf("**********************\033[0m\n");
        }
        else
        {
          prev = del;
          del = del -> next;
        }
      }
      if(z == 0)
      {
      printf("**********************\n");
      printf("No Nodes oF That Name\n");
      printf("**********************\n");
      }
   }
   
}
