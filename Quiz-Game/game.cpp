#include<iostream>
using namespace std;

int playQuiz(){
    cout<<"--------------Welcome to Quiz Game--------------"<<endl;
    cout<<"--------Please follow the instructions--------"<<endl;
    cout<<"Step 1 : Quiz contains total 10 questions"<<endl;
    cout<<"Step 2 : You will be given 1 marks for each right answer"<<endl;
    cout<<"Step 3 : There will be no negative marking"<<endl;
    cout<<"Step 4 : Please press 's' to start"<<endl;
    cout<<"Step 5 : Please select option a,b,c,d"<<endl;
    char c,option; cin>>c;
    int score=0;
    if(c=='s'||c=='S'){
        cout<< "Q1. When was Google founded?"<<endl;
        cout<<"a) 1995 b) 1997 c) 1998 d) 2000"<<endl;
        cin>>option;
        if (option=='c' || option=='C' )
        {
            score+=1;
        }
        cout<< "Q2. What were the original names of Google's co-founders, Larry Page and Sergey Brin's, search engine project before it was named Google?"<<endl;
        cout<<"a) WebCrawler b) BackRub c) InfoSeek d) Yahoo!"<<endl;
        cin>>option;
        if (option=='b' || option=='B' )
        {
            score+=1;
        }

        cout<< "Q3. Which animal was used as the code name for the Android 6.0 operating system released by Google?"<<endl;
        cout<<"a) Lollipop b) Marshmallow c) KitKat d) Oreo"<<endl;
        cin>>option;
        if (option=='b' || option=='B' )
        {
            score+=1;
        }
        cout<< "Q4. What is the name of Google's cloud-based productivity suite that includes applications like Docs, Sheets, and Slides?"<<endl;
        cout<<"a) Google Workspace b) Google Office c) Google Cloud Suite d) Google Productivity"<<endl;
        cin>>option;
        if (option=='a' || option=='A' )
        {
            score+=1;
        }
        cout<< "Q5. What was Google's initial product that launched in 1998, starting as a research project at Stanford University?"<<endl;
        cout<<"a) Gmail b) Google Maps c) Google Search d) Google Earth"<<endl;
        cin>>option;
        if (option=='c' || option=='C' )
        {
            score+=1;
        }
        cout<< "Q6. Which company did Google acquire in 2006, making it one of its largest acquisitions and expanding into video sharing?"<<endl;
        cout<<"a) YouTube b) Vimeo c) Dailymotion d) Metacafe"<<endl;
        cin>>option;
        if (option=='a' || option=='A' )
        {
            score+=1;
        }
        cout<< "Q7. In which city is Google's headquarters, famously known as the Googleplex, located?"<<endl;
        cout<<"a) San Francisco b) Mountain View c) Palo Alto d) Sunnyvale"<<endl;
        cin>>option;
        if (option=='b' || option=='B' )
        {
            score+=1;
        }
        cout<< "Q8. What is the name of the annual developer conference hosted by Google, where major announcements about Google products and services are made?"<<endl;
        cout<<"a) Google I/O b) Google DevCon c) Google Summit d) Google Connect"<<endl;
        cin>>option;
        if (option=='a' || option=='A' )
        {
            score+=1;
        }
        cout<< "Q9. Who is the current CEO of Alphabet Inc., Google's parent company?"<<endl;
        cout<<"a) Larry Page b) Sundar Pichai c) Sergey Brin d) Eric Schmidt"<<endl;
        cin>>option;
        if (option=='b' || option=='B' )
        {
            score+=1;
        }
        cout<< "Q10. Which popular web browser developed by Google is based on the Chromium project and is known for its speed and simplicity?"<<endl;
        cout<<"a) Safari b) Firefox c) Edge d) Google Chrome"<<endl;
        cin>>option;
        if (option=='d' || option=='D' )
        {
            score+=1;
        }
    }
    else
    {
        cout<<"You have entered wrong value, please enter s"<<endl;
        playQuiz();
    }
     return score;
}

    int main(){
    char playAgain = 'Y'; 
    while (playAgain == 'Y' || playAgain == 'y') {
        int finalResult = playQuiz();
        cout << "You got " << finalResult << "/10" << endl;

        if (finalResult >= 6) {
            cout << "You have passed the test" << endl;
        } else {
            cout << "You have failed" << endl;
        }

        cout << "Do you want to play Quiz again? [Y/N]" << endl;
        cin >> playAgain;

        if (!(playAgain == 'Y' || playAgain == 'y')) {
            cout << "Thank you for playing the Quiz" << endl;
        }
    }

    return 0;
    }
