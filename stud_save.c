#include"student.h"

int countnode(SLL *ptr)            //COUNT NODE
{
  int c = 0;
  
  while(ptr)
  {
    c++;
    ptr = ptr -> next;
  }
  return c;
}


void delete_all_node(SLL **ptr)     //DELETE ALL NODE
{
  if(*ptr == 0)
  {
    printf("***********************\n");
    printf("No Nodes\n");
    printf("***********************\n");
    return;
  }
  
  SLL *del = *ptr,*temp;
  while(del)
  {
    temp = del -> next;
    free(del);
    printf("Node Deleted\n");
    sleep(1);
    del = temp;
  }
  *ptr = 0;
  printf("***********************\n");
  printf("All Node Deleted\n");
  printf("***********************\n");
}


void reverselinks(SLL **ptr)         //REVERSE LINKS
{
  if(*ptr == 0)
  {
     printf("***********************\n");
     printf("No Nodes\n");
     printf("***********************\n");
     return;
  }
  
  SLL *p = *ptr , *q = 0, *r;
  
  while(p)
  {
    r = q;
    q = p;
    
    p = p -> next;
    q -> next = r;
  } 
  
  *ptr = q;
  
  printf("***********************\n");
  printf("LIST IS REVERSED\n");
  printf("***********************\n");
}

void sortnode(SLL *ptr)
{
  char op;
  
  printf("==================================\n");
  printf("| n/N :Sort With Name            |\n");
  printf("| p/P :Sort With Percentage      |\n");
  printf("==================================\n");
  printf("Enter The Choice = ");
  scanf(" %c",&op);
  
  if(op == 'p' || op == 'P')
  {
     if(ptr == 0)
     {
       printf("***********************\n");
       printf("No Nodes\n");
       printf("***********************\n");
       return;
     }
     
     SLL *p1 = ptr , *p2, t;
     int i , j , c = countnode(ptr);
     
     for( i = 0; i < c - 1; i++)
     {
       p2 = p1 -> next;
       for(j = 0 ; j < c - 1 - i; j++)
       {
         if(p1 -> marks > p2 -> marks)
         {
            t.rollno = p1 -> rollno;
            strcpy(t.name , p1 -> name);
            t.marks = p1 -> marks;
            
            p1 -> rollno = p2 -> rollno;
            strcpy(p1 -> name , p2 -> name);
            p1 -> marks = p2 -> marks;
            
            p2 -> rollno = t.rollno;
            strcpy(p2 -> name , t.name);
            p2 -> marks = t.marks;
         }
         p2 = p2 -> next;
       }
       p1 = p1 -> next;
     }
     printf("***********************\n");
     printf("Nodes Sorted BY Marks\n");
     printf("***********************\n"); 
     
  }
  
  else if(op == 'n' || op == 'N')
  {
      if(ptr == 0)
     {
       printf("***********************\n");
       printf("No Nodes\n");
       printf("***********************\n");
       return;
     }
     
     SLL *p1 = ptr , *p2 , t;
     int i , j , c = countnode(ptr);
     
     for(i = 0; i < c - 1; i++)
     {
       p2 = p1 -> next;
       for(j = 0; j < c - 1 - i; j++)
       {
         if(strcmp(p1 -> name , p2 -> name) > 0)
         {
           t.rollno = p1 -> rollno;
           strcpy(t.name , p1 -> name);
           t.marks = p1 -> marks;
           
           p1 -> rollno = p2 -> rollno;
           strcpy(p1 -> name , p2 -> name);
           p1 -> marks = p2 -> marks;
           
           p2 -> rollno = t.rollno;
           strcpy(p2 -> name , t.name);
           p2 -> marks = t.marks; 
         }
        p2 = p2 -> next;
       }
        p1 = p1 -> next;
     }
     
     printf("***********************\n");
     printf("Nodes Sorted BY Name\n");
     printf("***********************\n"); 
  }
}

void savedata(SLL *ptr)   //SAVE FILE 
{
   char op;
   
  printf("==================================\n");
  printf("| s/S :Save And Exit             |\n");
  printf("| E/e :Exit Without Saving       |\n");
  printf("==================================\n");
  printf("Enter The Choice = ");
  scanf(" %c",&op);
  
  if(op == 's' || op == 'S')
  {
    if(ptr == 0)
    {
     printf("***********************\n");
     printf("No Nodes\n");
     printf("***********************\n");
     return; 
    }
    
    FILE *fp = fopen("student.data","w");
    while(ptr)
    {
      fprintf(fp,"%d %s %f\n",ptr -> rollno , ptr -> name , ptr -> marks);
      ptr = ptr -> next;
    }
    printf("***********************\n");
    printf("Data Saved SuccessFully\n");
    printf("***********************\n");
    
    fclose(fp);
    exit(0);
  }
  
  else if(op == 'e' || op == 'E')
  {
    printf("***********************\n");
    printf("Exited Without SAVE\n");
    printf("***********************\n");
    exit(0);
    return;
  }
  
}













