#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void banner ()
{
    printf("--------------------------\n");
    printf("------ Calendar APP ------");
    printf("\n--------------------------\n");
}

void clear()
{
    system("clear");
}

void c_panel()
{
    printf("[1] View Calendar\n");
    printf("[2] Add Event\n");
    printf("[3] View Event\n");
    printf("[4] Exit\n");
}

bool isLeapYear(int year)
{
    return (year % 4 == 0) ? true : false;
}

int getDaysInMonth(int month, int year) {
    switch (month) {
        case 1:  return 31;
        case 2:  return isLeapYear(year) ? 29 : 28;
        case 3:  return 31; 
        case 4:  return 30;
        case 5:  return 31; 
        case 6:  return 30; 
        case 7:  return 31; 
        case 8:  return 31; 
        case 9:  return 30;
        case 10: return 31;
        case 11: return 30;
        case 12: return 31;
        default: return -1;
    }
}

void print_calendar(int year, int month)
{
    struct tm t = {0};
    t.tm_year = year - 1900;
    t.tm_mon = month - 1; 
    t.tm_mday = 1;
    mktime(&t); 
    int start_day = t.tm_wday;
    int total_days = getDaysInMonth(month, year) != -1 ? getDaysInMonth(month, year) : 0 ;

    printf("\nCalendar for %d-%02d\n\n", year, month);
    printf("Su Mo Tu We Th Fr Sa\n");
    printf("--------------------\n");

    // Strtct
    for(int i = 0 ; i<start_day ; i++)
    {
        printf("   ");
    }

    for(int j = start_day + 1 ; j <= total_days + start_day ; j++ )
    {   
        if(j - start_day > 9)
        {
            printf("%d " , j - start_day);
        }
        else
        {
            printf("%d  " , j - start_day);
        }
        if(j % 7 == 0)
        {
            printf("\n");
        }
    }

    printf("\n\n");
}


int main()
{
    bool looper = true;
    while (looper)
    {
        banner ();
        c_panel();
        int f_inp;
        printf("Choose an option [1-4] : ");
        scanf("%d" , &f_inp);
        switch (f_inp)
        {
            case 1:
                clear();
                char s_inp[20];
                printf("Enter month and year (format : 9-2025)->(september-2025) : ");
                scanf("%19s" , s_inp);
                char *token = strtok(s_inp, "-");
                int month = atoi(token);
                token = strtok(NULL, "-");
                int year = atoi(token);
                print_calendar(year , month);
                break;
            case 2:
                printf("\nUnder Development\n");
                break;
            case 3:
                printf("\nUnder Development\n");
                break;
            case 4:
                clear();
                looper = false;
                break;
            default :
                clear();
                printf("[-] Please enter a valid option \n");
        }
    }

    return 0;
}
