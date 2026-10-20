#include<stdio.h>

int main(){
    int Days,Hours;
    Days=31558150/(60*60*24);
    Hours=31558150%(60*60*24)/(60*60);
    float Minutes=31558150%(60*60*24)%(60*60)/60.0;
    printf("Days: %d, Hours: %d, Minutes: %f", Days, Hours, Minutes);
    return 0;
}