#ifndef STUDENT_H
#define STUDENT_H

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>

typedef struct st
{
  int rollno;
  char name[20];
  float marks;
  struct st *next;
}SLL;

void student_add(SLL **);
int rollno(SLL *);
void show_list(SLL *);
void student_del(SLL **);
void reverselinks(SLL **);
void sortnode(SLL *);
void delete_all_node(SLL **);
int countnode(SLL *);
void savedata(SLL *);
void modifydata(SLL *);

#endif
