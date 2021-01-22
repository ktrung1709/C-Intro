#include <stdio.h>
typedef struct wt{
    int totalRain;
    int highTemp;
    int lowTemp;
    int averageTemp;
}weather;

int main(){
    weather wt[12];
    int i;
    int total_rain = 0;
    int max_temp = 0;
    int min_temp = 100;
    char month [12][10] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    for (i=0;i<12;i++){
        printf("Enter weather data for %s \n", month[i]);
        printf("Total Rainfall (mm): ");
        scanf("%d", &wt[i].totalRain);
        printf("High Temperature (between -40 and 50) (C): ");
        scanf("%d", &wt[i].highTemp);
        printf("Low Temperature (between -40 and 50) (C): ");
        scanf("%d", &wt[i].lowTemp);
        printf("Average Temperature (between -40 and 50) (C): \n");
        scanf("%d", &wt[i].averageTemp);
    }
    for (i=0;i<12;i++){
        total_rain += wt[i].totalRain;
        if (wt[i].highTemp > max_temp)
            max_temp = wt[i].highTemp;
        if (wt[i].lowTemp < min_temp)
            min_temp = wt[i].lowTemp;
    }
    printf("The average rain fall of the year is %d mm\n", total_rain/12);
    printf("The total rain fall of the year is %d mm\n", total_rain);
    printf("The highest temperature of the year is %d C\n", max_temp);
    printf("The lowest temperature of the year is %d C\n", min_temp);
    return 0;
}


