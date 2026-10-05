#include<stdio.h>

int isLeapYear(int);

int daysInMonth(int, int);

int isValidDate(int, int, int);

int dayOfYear(int, int, int);

int main(){
  int day, month, year;
  printf("Entrada:\n");
  scanf("%d %d %d", &day, &month, &year);
  if(isValidDate(day, month, year) == 1){
    printf("Salida:\n");
    printf("Dia %d del año\n", dayOfYear(day, month, year));
  }else{
    printf("Fecha invalida\n");
  }
}

int isLeapYear(int year){
  return year % 400 == 0 || (year % 4 == 0 && (year % 100 != 0));
}

int daysInMonth(int month, int year){
  if(month == 2){
    if(isLeapYear(year) == 1){
      return 29;
    }
    return 28;
  }
  else if(month == 1 || month == 3 || month == 5 || month == 7
  || month == 8 || month == 10 || month == 12){
    return 31;
    }
  else if(month == 2 || month == 4 || month == 6 || month == 9 || month == 11){
    return 30;
  }
  return 0;
}

int isValidDate(int day, int month, int year){
  if(daysInMonth(month, year) >= day && day >= 0){
    return 1;
  }
  return 0;
}

int dayOfYear(int day, int month, int year){
  int days = 0;
  for(int i = 1;i < month;i++){
    days += daysInMonth(i, year);
  }
  days += day;
  return days;
}
