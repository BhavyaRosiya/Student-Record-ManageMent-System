#include"student.h"

void modifydata(SLL *ptr)
{
   char op;
   
   printf("=======================================\n");
   printf("| r/R :To Search A Rollno              |\n");
   printf("| n/N :To Search A Name                |\n");
   printf("| p/P :To Search Percentage Based      |\n");
   printf("========================================\n");
   printf("Enter Which Record To Search For Modification = ");
   scanf(" %c",&op);
   
   if(op == 'r' || op == 'R')         //SEARCH BY ROLLNO
   {
      if(ptr == 0)
      {
        printf("***********************\n");
        printf("No Nodes\n");
        printf("***********************\n");
        return;
      }
      
      int num,c,f=0;
      printf("Enter The Num To Search = ");
      scanf("%d",&num);
      
      while(ptr)
      {
        if(num == ptr -> rollno)
        {
           f = 1;
           printf("******Data Found******\n");
           printf("%d %s %f \n", ptr -> rollno , ptr -> name , ptr -> marks );
           printf("***********************\n");
           
           printf("***********************\n");
           printf("1) Modify Name  \n"
                  "2) Modify Marks \n");
           printf("***********************\n");
           printf("Enter The Choice  = ");
           scanf("%d",&c);
           
           switch(c)
           {
              case 1:{
              
                char s[20];
                printf("Enter The New Name = ");
                scanf("%s", s);
                strcpy(ptr -> name , s);
                
                printf("***********************\n");
                printf("Name Modified\n");
                printf("***********************\n");
                
              }break;
              
              case 2: {
                  
                  float f;
                  printf("Enter The New Marks = ");
                  scanf(" %f", &f);
                  
                  ptr -> marks = f;
                  
                printf("***********************\n");
                printf("Marks Modified\n");
                printf("***********************\n");
              }break;
           }
        }
        ptr = ptr -> next;
      }
      if(f == 0)
      {
      printf("***********************\n");
      printf("Roll Not Found\n");
      printf("***********************\n");
      }
   }
   
   else if(op == 'n' || op == 'N')    //SEARCH BY NAME
   {
      if(ptr == 0)
      {
        printf("***********************\n");
        printf("No Nodes\n");
        printf("***********************\n");
        return;
      }
      
      char s[20];
      int c = 0,a;
      printf("Enter The Name To Search = ");
      scanf("%s", s);
      SLL *found  = 0;
      SLL *temp = ptr;
      
      while(ptr)
      {
        if(strcmp(ptr -> name , s) == 0)
        {
          c++;
          found = ptr;
          printf("%d %s %f\n",ptr -> rollno , ptr -> name , ptr -> marks);
        }
        ptr = ptr -> next;
      }
      
      if(c == 0)
      {
        printf("***********************\n");
        printf("Name Not Found\n");
        printf("***********************\n");
        return;
      }
      
      if(c > 1)
      {
         int r;
         printf("Enter The Rollno To Modify = ");
         scanf("%d" , &r);
         
         ptr = temp;
         found = 0;
         
         while(ptr)
         {
           if(ptr -> rollno == r && strcmp(ptr -> name , s) == 0)
           {
             found = ptr;
             break;
           }
           ptr = ptr -> next;
         }
         
         if(found == 0)
        {
            printf("***********************\n");
            printf("Invalid RollNo\n");
            printf("***********************\n");
            return;
        }
      }
      
      
           printf("***********************\n");
           printf("1) Modify Name  \n"
                  "2) Modify Marks \n");
           printf("***********************\n");
           printf("Enter The Choice  = ");
           scanf("%d",&a);
           
           switch(a)
           {
             case 1:{
                char s[20];
                printf("Enter The New Name = ");
                scanf("%s",s);
                
                strcpy(found -> name , s);
                
                printf("***********************\n");
                printf("Name Modified\n");
                printf("***********************\n");
                
             }break;
             
             case  2:{
             
                  float f;
                  printf("Enter The New Marks = ");
                  scanf(" %f", &f);
                  
                  found -> marks = f;
                  
                printf("***********************\n");
                printf("Marks Modified\n");
                printf("***********************\n");
             }break;
          }
      
   }
   
   
   else if(op == 'p' || op == 'P')  //SEARCH BY MARKS
   {
     if(ptr == 0)
      {
        printf("***********************\n");
        printf("No Nodes\n");
        printf("***********************\n");
        return;
      }
      
      float f1;
      int c = 0,a;
      printf("Enter The Marks To Search = ");
      scanf("%f",&f1);
      SLL *found  = 0;
      SLL *temp = ptr;
      
      while(ptr)
      {
        if(ptr -> marks == f1)
        {
          c++;
          found = ptr;
          printf("%d %s %f\n",ptr -> rollno , ptr -> name , ptr -> marks);
        }
        ptr = ptr -> next;
      }
      
      if(c == 0)
      {
        printf("***********************\n");
        printf("Marks Not Found\n");
        printf("***********************\n");
        return;
      }
      
      if(c > 1)
      {
         int r;
         printf("Enter The Rollno To Modify = ");
         scanf("%d" , &r);
         
         ptr = temp;
         found = 0;
         
         while(ptr)
         {
           if(ptr -> rollno == r && ptr -> marks == f1)
           {
             found = ptr;
             break;
           }
           ptr = ptr -> next;
         }
         
         if(found == 0)
        {
            printf("***********************\n");
            printf("Invalid RollNo\n");
            printf("***********************\n");
            return;
        }
      }
      
           printf("***********************\n");
           printf("1) Modify Name  \n"
                  "2) Modify Marks \n");
           printf("***********************\n");
           printf("Enter The Choice  = ");
           scanf("%d",&a);
           
           switch(a)
           {
             case 1:{
                char s[20];
                printf("Enter The New Name = ");
                scanf("%s",s);
                
                strcpy(found -> name , s);
                
                printf("***********************\n");
                printf("Name Modified\n");
                printf("***********************\n");
                
             }break;
             
             case  2:{
             
                  float f;
                  printf("Enter The New Marks = ");
                  scanf(" %f", &f);
                  
                  found -> marks = f;
                  
                printf("***********************\n");
                printf("Marks Modified\n");
                printf("***********************\n");
             }break;
          }
   }
}























