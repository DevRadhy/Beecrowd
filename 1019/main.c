#include <stdio.h>

int main() {
  int timeInSeconds;

  scanf("%d", &timeInSeconds);

  int hours = timeInSeconds / 3600;
  int minutes = (timeInSeconds - (hours * 3600)) / 60;
  int seconds = (timeInSeconds - (hours * 3600)) - (minutes * 60);

  printf("%d:%d:%d\n", hours, minutes, seconds);

  return 0;
}