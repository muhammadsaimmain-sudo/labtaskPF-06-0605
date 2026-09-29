#include <stdio.h>

int main() {
    // Initialized to 2 so the loop condition passes on the first run
    int age = 2; 
    
    int rprice = 500;
    int td = 800;
    int prem = 1200;
    int finalprice;
    
    while (age != 0) {
        printf("Enter your age (or 0 to exit):\n");
        scanf("%d", &age);
        
        // FIX: Exit the loop immediately if the user inputs 0
        if (age == 0) {
            break;
        }
        
        int day;
        printf("Enter the day of the month (1-31):\n");
        scanf("%d", &day);
        
        printf("Enter the type of movie you want to watch:\n");
        printf("1: a Regular movie\n");
        printf("2: a 3D movie\n");
        printf("3: a Premiere (first-day) show.\n");
        
        int movie;
        scanf("%d", &movie);
        
        switch (movie) {
            case 1:
                if (day % 5 == 0) {
                    printf("Hurry! bonus day\n");
                    if (age < 13) {
                        finalprice = (rprice * 0.70) - 50;
                        printf("%d your final price\n", finalprice);
                    } else if (age >= 60) {
                        finalprice = (rprice * 0.50) - 50;
                        printf("%d your final price\n", finalprice);
                    } else {
                        finalprice = rprice - 50;
                        printf("%d your final price\n", finalprice);
                    }
                } else {
                    if (age < 13) {
                        finalprice = (rprice * 0.70);
                        printf("%d your final price\n", finalprice);
                    } else if (age >= 60) {
                        finalprice = (rprice * 0.50);
                        printf("%d your final price\n", finalprice);
                    } else {
                        finalprice = rprice;
                        printf("%d your final price\n", finalprice);
                    }
                }
                break;

            case 2:
                if (day % 5 == 0) {
                    printf("Hurry! bonus day\n");
                    if (age < 13) {
                        finalprice = (td * 0.70) - 50;
                        printf("%d your final price\n", finalprice);
                    } else if (age >= 60) {
                        finalprice = (td * 0.50) - 50;
                        printf("%d your final price\n", finalprice);
                    } else {
                        finalprice = td - 50;
                        printf("%d your final price\n", finalprice);
                    }
                } else {
                    if (age < 13) {
                        finalprice = (td * 0.70);
                        printf("%d your final price\n", finalprice);
                    } else if (age >= 60) {
                        finalprice = (td * 0.50);
                        printf("%d your final price\n", finalprice);
                    } else {
                        finalprice = td;
                        printf("%d your final price\n", finalprice);
                    }
                }
                break;

            case 3:
                if (day % 5 == 0) {
                    printf("Hurry! bonus day\n");
                    if (age < 13) {
                        finalprice = (prem * 0.70) - 50;
                        printf("%d your final price\n", finalprice);
                    } else if (age >= 60) {
                        finalprice = (prem * 0.50) - 50;
                        printf("%d your final price\n", finalprice);
                    } else {
                        finalprice = prem - 50;
                        printf("%d your final price\n", finalprice);
                    }
                } else {
                    if (age < 13) {
                        finalprice = (prem * 0.70);
                        printf("%d your final price\n", finalprice);
                    } else if (age >= 60) {
                        finalprice = (prem * 0.50);
                        printf("%d your final price\n", finalprice);
                    } else {
                        finalprice = prem;
                        printf("%d your final price\n", finalprice);
                    }
                }
                break; // FIX: Successfully moved outside the closing 'else' brace

            default:
                printf("Invalid movie selection.\n");
                break;
        }
        
        printf("\n-----------------------------\n");
    }

    printf("Exiting program. Goodbye!\n");
    return 0;
}

