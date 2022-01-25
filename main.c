#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int hour = 0, minute = 0, second = 0;
    while(1) {
        system("clear");
        printf("******************************\n");
        printf("\t %d  :  %d  :  %d\n", hour, minute, second);
        printf("******************************\n");
        second++;
        if(second == 60) {
            minute++;
            second = 0;
            if(minute == 60) {
                hour++;
                minute = 0;
            }
        }
        sleep(1);
    }
    return 0;
}