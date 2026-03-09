#include <stdio.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);

    int work_lenght;
    int short_break;
    int long_break;
    int work_sessions;

    printf("Enter work lenght in minutes:\n");
    scanf("%d", &work_lenght);
    printf("Enter short break in minutes:\n");
    scanf("%d", &short_break);
    printf("Enter long break in minute:\n");
    scanf("%d", &long_break);
    printf("Enter how much you need work sessions:\n");
    scanf("%d", &work_sessions);

    printf("Start timer..");
    printf("1..");
    Sleep(1000);

    printf("2..");
    Sleep(1000);

    printf("3..\n");
    Sleep(1000);

    for (int i=0; i < work_sessions; i++){

        int total_work_lenght = work_lenght * 60;

        printf("\n--- Session %d/%d ---\n", i + 1, work_sessions);

        while(total_work_lenght >= 0) {
            int m = total_work_lenght / 60;
            int s = total_work_lenght % 60;

            printf("\rTime left: %02d:%02d          ", m, s);
            fflush(stdout);

            if (total_work_lenght == 0) break;
            Sleep(1000);
            total_work_lenght--;
        }
        printf("Work session over\n");
        Beep(750,300);
        Sleep(5000);

        int total_short_break = short_break * 60;

        printf("Start short break, You can relax :3.\n");
        while(total_short_break >= 0) {
            int m = total_short_break / 60;
            int s = total_short_break % 60;

            printf("\rTime left: %02d:%02d          ", m, s);
            fflush(stdout);

            if (total_short_break == 0) break;
            Sleep(1000);
            total_short_break--;
        }
        printf("Short break over. Start working!");
        Beep(750, 300);
    }

    return 0;
}
