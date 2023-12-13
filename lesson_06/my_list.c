#include <stdlib.h>
#include <stdio.h>
#include "my_list.h"

#define INPUT_LINE "__________\b\b\b\b\b\b\b\b\b\b"

static void GetMemToLine(struct MyTable *table) {
  if (0 == table->counter) {
    table->p_stud_list = calloc(1, sizeof(struct StudentInfo));
  } else {
    table->p_stud_list =
      realloc(table->p_stud_list,
	      ++table->counter * sizeof(struct StudentInfo));
  }
}

void InputToTable(struct MyTable *table) { //TODO закончить запись
  GetMemToLine(table);
 
  char buffer[sizeof(table->p_stud_list->surename)];
  ull tmp;
  printf("Начало заполнения информации о студенте\n");

  printf("Введите фамилию : " INPUT_LINE);
  scanf("%s", &buffer);

  printf("Введите номер зачетки (число) : " INPUT_LINE);
  scanf("%ull", &tmp);

  printf("Введите название факультета : " INPUT_LINE);
  scanf("%s", &buffer);

  printf("Введите номер группы (число) : " INPUT_LINE);
  scanf("%ull", &tmp);
  
}

void FromFileToTable(struct MyTable *table) {
  
}

void FromTableToFile(char file_name[]) {
  
}

void PrintTableTable(struct MyTable *table) {

}

void SortByColumn(struct MyTable *table, unsigned colum_number) {

}

void FindByValue(struct MyTable *table,
		 unsigned colum_number,
		 char value[]) {
  
}

void DeleteLine(struct MyTable *table, unsigned line_number) {
  
}

void ChangeLine(struct MyTable *table, unsigned line_number) {
  
}

void Prepare(struct MyTable *table) {
  table->p_stud_list = 0;
  table->counter = 0;
}


void MyTableDestructor(struct MyTable *table) {
  free(table->p_stud_list);
}