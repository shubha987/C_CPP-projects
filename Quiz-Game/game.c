#include <stdio.h>

int playQuiz() {
    printf("--------------Welcome to Quiz Game--------------\n");
    printf("--------Please follow the instructions--------\n");
    printf("Step 1 : Quiz contains total 10 questions\n");
    printf("Step 2 : You will be given 1 marks for each right answer\n");
    printf("Step 3 : There will be no negative marking\n");
    printf("Step 4 : Please press 's' to start\n");
    printf("Step 5 : Please select option a,b,c,d\n");

    char c, option;
    int score = 0;
    scanf(" %c", &c); 
    if (c == 's' || c == 'S') {
        printf("Q1. When was Google founded?\n");
        printf("a) 1995 b) 1997 c) 1998 d) 2000\n");
        scanf(" %c", &option);
        if (option == 'c' || option == 'C') {
            score += 1;
        }
        printf("Q2. What were the original names of Google's co-founders, Larry Page and Sergey Brin's, search engine project before it was named Google?\n");
        printf("a) WebCrawler b) BackRub c) InfoSeek d) Yahoo!\n");
        scanf(" %c", &option);
        if (option=='b' || option=='B' ) {
            score += 1;
        }
        printf("Q3. Which animal was used as the code name for the Android 6.0 operating system released by Google?\n");
        printf("a) Lollipop b) Marshmallow c) KitKat d) Oreo\n");
        scanf(" %c", &option);
        if (option=='b' || option=='B') {
            score += 1;
        }
        printf("Q4. What is the name of Google's cloud-based productivity suite that includes applications like Docs, Sheets, and Slides?\n");
        printf("a) Google Workspace b) Google Office c) Google Cloud Suite d) Google Productivity\n");
        scanf(" %c", &option);
        if (option=='a' || option=='A') {
            score += 1;
        }
        printf("Q5. What was Google's initial product that launched in 1998, starting as a research project at Stanford University?\n");
        printf("a) Gmail b) Google Maps c) Google Search d) Google Earth\n");
        scanf(" %c", &option);
        if (option=='c' || option=='C') {
            score += 1;
        }
        printf("Q6. Which company did Google acquire in 2006, making it one of its largest acquisitions and expanding into video sharing?\n");
        printf("a) YouTube b) Vimeo c) Dailymotion d) Metacafe\n");
        scanf(" %c", &option);
        if (option=='a' || option=='A') {
            score += 1;
        }
        printf("Q7. In which city is Google's headquarters, famously known as the Googleplex, located?\n");
        printf("a) San Francisco b) Mountain View c) Palo Alto d) Sunnyvale\n");
        scanf(" %c", &option);
        if (option=='b' || option=='B') {
            score += 1;
        }
        printf("Q8. What is the name of the annual developer conference hosted by Google, where major announcements about Google products and services are made?\n");
        printf("a) Google I/O b) Google DevCon c) Google Summit d) Google Connect\n");
        scanf(" %c", &option);
        if (option=='a' || option=='A') {
            score += 1;
        }
        printf("Q9. Who is the current CEO of Alphabet Inc., Google's parent company?\n");
        printf("a) Larry Page b) Sundar Pichai c) Sergey Brin d) Eric Schmidt\n");
        scanf(" %c", &option);
        if (option=='b' || option=='B') {
            score += 1;
        }
        printf("Q10. Which popular web browser developed by Google is based on the Chromium project and is known for its speed and simplicity?\n");
        printf("a) Safari b) Firefox c) Edge d) Google Chrome\n");
        scanf(" %c", &option);
        if (option=='d' || option=='D') {
            score += 1;
        }
        
    } else {
        printf("You have entered the wrong value, please enter 's'\n");
        playQuiz();
    }
    return score;
}

int main() {
    char playAgain = 'Y';
    while (playAgain == 'Y' || playAgain == 'y') {
        int finalResult = playQuiz();
        printf("You got %d/10\n", finalResult);

        if (finalResult >= 6) {
            printf("You have passed the test\n");
        } else {
            printf("You have failed\n");
        }

        printf("Do you want to play Quiz again? [Y/N]\n");
        scanf(" %c", &playAgain);

        if (!(playAgain == 'Y' || playAgain == 'y')) {
            printf("Thank you for playing the Quiz\n");
        }
    }

    return 0;
}
