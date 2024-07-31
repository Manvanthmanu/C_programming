#include <stdio.h>

typedef struct d{
    int dd;
    int mm;
    int yyyy;
}date;

int isLeapYear(int yyyy){
    if((yyyy%4==0 && yyyy%100!=0) || (yyyy%400==0)){
        return 1;
    }else{
        return 0;
    }
}

int isdaysinmonth( int mm , int yyyy){
    switch (mm)
    {
    case 1:return 31;
    case 2:return isLeapYear(yyyy) ?29 : 28;
    case 3:return 31;
    case 4:return 30;
    case 5:return 31;
    case 6:return 30;
    case 7:return 31;
    case 8:return 31;
    case 9:return 30;
    case 10:return 31;
    case 11:return 30;
    case 12:return 31;
    
    default:
        break;
    }
}

date comparision(date d1,date d2){
    date diff;

    int daycount1 = d1.mm; 
    int daycount2 = d2.mm;

    for(int i = 1;i<d1.mm ; i++){
        daycount1+=isdaysinmonth(i,d1.yyyy);
        daycount2 += isdaysinmonth(i,d1.yyyy);
    }

      // Compare years
    if (d1.yyyy < d2.yyyy) {
        printf("Person 1 is younger.\n");
    } else if (d1.yyyy > d2.yyyy) {
        printf("Person 2 is younger.\n");
    } else {
        // If the years are the same, compare the days
        if (daycount1 < daycount2) {
            printf("Person 1 is younger.\n");
        } else if (daycount1 > daycount2) {
            printf("Person 2 is younger.\n");
        } else {
            printf("Both are of the same age.\n");
        }
    }


    // Calculate the difference in years, months, and days
    diff.yyyy = abs(d1.yyyy - d2.yyyy);
    if (daycount1 < daycount2) {
        // Borrow days from previous year if necessary
        daycount1 += isLeapYear(d1.yyyy) ? 366 : 365;
        diff.yyyy--;
    }
    int daydiff = abs(daycount1 - daycount2);

    // Convert day difference into months and days
    diff.mm = daydiff / 30; // This is an approximation
    diff.dd = daydiff % 30;
    
    return diff;
}

int main(){


    // comparision(d1,d2);
    date d1, d2;
    printf("Enter the date in this format dd mm yyyy of person 1: ");
    scanf("%d %d %d", &d1.dd, &d1.mm, &d1.yyyy);
    printf("Enter the date in this format dd mm yyyy of person 2: ");
    scanf("%d %d %d", &d2.dd, &d2.mm, &d2.yyyy);

    date diff = comparision(d1, d2);
    printf("The difference is %d years, %d months, and %d days.\n", diff.yyyy, diff.mm, diff.dd);

    return 0;
}