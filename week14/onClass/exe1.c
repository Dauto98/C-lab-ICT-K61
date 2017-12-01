#include<stdio.h>

typedef struct monthData  {
  float rainfall;
  float highTemp;
  float lowTemp;
  float avgTemp;
} monthData;

int main(){
  monthData months[12];
  float  totalRain = 0, highestTemp = 0, lowestTemp = 999999;
  
  printf("Enter data\n");

  for(int i = 0; i < 12; i++){
    printf("Enter rainfall for month %d: ", i+1);
    scanf("%f", &months[i].rainfall);

    totalRain += months[i].rainfall;

    printf("Enter the highest temperature for month %d: ", i+1);
    scanf("%f", &months[i].highTemp);

    while(months[i].highTemp > 50 || months[i].highTemp < -40) {
      printf("The temperature must stay between -40 and 50: ");
      scanf("%f", &months[i].highTemp);
    }

    if(highestTemp < months[i].highTemp) {
      highestTemp = months[i].highTemp;
    }

    printf("Enter the lowest temperature for month %d: ", i+1);
    scanf("%f", &months[i].lowTemp);

    while(months[i].lowTemp > 50 || months[i].lowTemp < -40) {
      printf("The temperature must stay between -40 and 50: ");
      scanf("%f", &months[i].lowTemp);
    }
    
    if(lowestTemp > months[i].lowTemp) {
      lowestTemp = months[i].lowTemp;
    }
    
    printf("Enter the average temperature for month %d: ", i+1);
    scanf("%f", &months[i].avgTemp);

    printf("\n");
  };

  printf("Total rainfall of the year: %.2f\n", totalRain);
  printf("Average rainfall of the year: %.2f\n", totalRain/12);
  printf("Highest temperature: %.2f\n", highestTemp);
  printf("Lowest temperature: %.2f\n", lowestTemp);

  return 0;
}
