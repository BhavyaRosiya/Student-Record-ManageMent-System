#include"student.h"

SLL *hptr = 0;

int main()
{
  char op;
    
  while(1)
  {  
    printf("\033[31m");
    printf("|============================================================================|\n");
    printf("|        **************** STUDENT RECORD MENU ****************               |\n");
    printf("| ========================================================================== |\n");
    printf("|                                                                            |\n");
    printf("|  a/A  :Add New Record                                                      |\n");
    printf("|  d/D  :Delete A Record                                                     |\n");
    printf("|  s/S  :Show The List                                                       |\n");
    printf("|  m/M  :Modify A Record                                                     |\n");
    printf("|  v/V  :Save                                                                |\n");
    printf("|  e/E  :Exit                                                                |\n");
    printf("|  t/T  :Sort The List                                                       |\n");
    printf("|  l/L  :Delete All The Records                                              |\n");
    printf("|  r/R  :Reverse The List                                                    |\n");
    printf("|                                                                            |\n");
    printf("|============================================================================|\n");
    printf("\033[0m");
    printf("Enter Your Choice = ");
    scanf(" %c",&op);
    
    switch(op)
    {
        case 'a':case 'A' :student_add(&hptr); break;
        case 's':case 'S' :show_list(hptr); break;
        case 'd':case 'D' :student_del(&hptr); break;
        case 't':case 'T' :sortnode(hptr); break;
        case 'l':case 'L' :delete_all_node(&hptr); break;
        case 'r':case 'R' :reverselinks(&hptr); break;
        case 'v':case 'V' :savedata(hptr); break;
        case 'm':case 'M' :modifydata(hptr); break;
        case 'e':case 'E' :exit(0);      
    }
  }
  
}


