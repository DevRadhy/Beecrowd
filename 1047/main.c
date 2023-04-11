#include <stdio.h>

int main() {
  int initialHour;
  int finalHour;

  int initialMinute;
  int finalMinute;

  scanf("%d %d %d %d", &initialHour, &initialMinute, &finalHour, &finalMinute);

  int initialTimeInMinutes = (initialHour * 60) + initialMinute;
  int finalTimeInMinutes = (finalHour * 60) + finalMinute;

  int timeInMinutes = finalTimeInMinutes - initialTimeInMinutes;

  if(timeInMinutes <= 0)
    timeInMinutes += 1440;

  int hours = timeInMinutes / 60;
  int seconds = timeInMinutes - (hours * 60);


  printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hours, seconds);

  return 0;
}