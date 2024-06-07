#include<iostream>


using namespace std;
void rules();
void play();
int main()
{
    cout<<"Welcome to the KBC(kaun banega crorepati)"<<endl;
    cout<<"before starting the game the rules of the game are as follows : "<<endl;
    cout<<"1. there will be asked 7 questions on any topic or subject";
    cout<<"2. at every right answer you will get money and the every right answer the price value are like : "<<endl;
    cout<<"\tQ1. 1,00,000"<<endl;
    cout<<"\tQ2. 10,00,000"<<endl;
    cout<<"\tQ3. 40,00,000"<<endl;
    cout<<"\tQ4. 80,00,000"<<endl;
    cout<<"\tQ5. 1,60,00,000"<<endl;
    cout<<"\tQ6. 3,20,00,000"<<endl;
    cout<<"\tQ6. 7,00,00,000"<<endl;
    cout<<"NOTE : the last Question will be the jackpot question"<<endl;
    cout<<"3. when the wrong answer is given you will get out of this game and all the prize will be lost, so you must have to give all the right answers for winning the jackpot of RS. 7 crore."<<endl;
    
    cout<<"Let's begin the quiz.";
int choice;
    int flag = 1;
    while (flag)
    {
        
        cout<<"-*-*MENU*-*-"<<endl;
        cout<<"1. Rules"<<endl;
        cout<<"2. Quiz"<<endl;
        cout<<"3. Exit"<<endl;

        cout<<"Enter a number : ";
        cin>>choice;

    switch (choice)
    {
    case 1:
        rules();
        break;
    case 2:
        play();
        break;
    case 3:
        flag = 0;
        break;
    default:
        cout<<"Invalid choice !!!"<<endl;
        break;
    }

    }
    
    return 0;
}
    void rules()
    {
 cout<<"RULES : "<<endl;
    cout<<"1. there will be asked 7 questions on any topic or subject";
    cout<<"2. at every right answer you will get money and the every right answer the price value are like : "<<endl;
    cout<<"\tQ1. 1,00,000"<<endl;
    cout<<"\tQ2. 10,00,000"<<endl;
    cout<<"\tQ3. 40,00,000"<<endl;
    cout<<"\tQ4. 80,00,000"<<endl;
    cout<<"\tQ5. 1,60,00,000"<<endl;
    cout<<"\tQ6. 3,20,00,000"<<endl;
    cout<<"\tQ7. 7,00,00,000"<<endl;
    cout<<"NOTE : the last Question will be the jackpot question"<<endl;
    cout<<"3. when the wrong answer is given you will get out of this game and all the prize will be lost, so you must have to give all the right answers for winning the jackpot of RS. 7 crore."<<endl;
        }


void play()
{
    char ch;
    cout<<"Here is the first Question : "<<endl<<endl;
    cout<<"who is the current present president of the America(2024)"<<endl;
    cout<<"A) Donald Trump"<<endl;
    cout<<"B) Rishi Sunak"<<endl;
    cout<<"C) Joe Biden"<<endl;
    cout<<"D) Vladimir Putin"<<endl;

cout<<"enter your answer option number : "<<endl;
    cin>>ch;

    if(ch == 'C' || ch == 'c')
    {
        cout<<"congratulations.., you have given the right answer.\nYou have won Rs.1,00,000."<<endl;
        cout<<"next question : \n"<<endl;
        cout<<"who among the following wins continously Three(3) times for the elections of Prime-Minister of India"<<endl;
        cout<<"A) Rahul Gandhi"<<endl;
        cout<<"B) Manmohan Singh"<<endl;
        cout<<"C) Arvind Kejriwal"<<endl;
        cout<<"D) Narendra Modi"<<endl;

        cout<<"enter your answer option number : "<<endl;
        cin>>ch;
    
         if(ch == 'D' || ch == 'd')
         {
            cout<<"congratulations.., you have given the right answer.\nYou have won Rs.10,00,000."<<endl;
            cout<<"next question : \n"<<endl;

                 cout<<"Who among wrote Vande Matram ?"<<endl;
                cout<<"A) Sarat chandra chattopadhyay"<<endl;
                cout<<"B) Rabindranath Tagore"<<endl;
                cout<<"C) Bankim Chandra Chatterjee"<<endl;
                cout<<"D) Ishwar Chandra Vidhyasagar"<<endl;
            cout<<"enter your answer option : "<<endl;
            cin>>ch;

             if(ch == 'C' || ch == 'c')
             {
            cout<<"congratulations.., you have given the right answer.\nYou have won Rs.40,00,000."<<endl;
            cout<<"next question : \n"<<endl;

                cout<<"who wrote the first ever Ramayana ?"<<endl;
                cout<<"A) God Hanuman"<<endl;
                cout<<"B) Ved Vyas"<<endl;
                cout<<"C) God Ganesha"<<endl;
                cout<<"D) Goddess Sraswati"<<endl;
            cout<<"enter your answer:"<<endl;
            cin>>ch;

                if(ch=='A' || ch=='a')
                {
                     cout<<"congratulations.., you have given the right answer.\nYou have won Rs.80,00,000."<<endl;
                    cout<<"next question : \n"<<endl;

                        cout<<"which Indian monument was originally built as a victory tower to commemorate the defeat of the Khan of Khambhat"<<endl;
                        cout<<"A) Qutub Minar"<<endl;
                        cout<<"B) India Gate"<<endl;
                        cout<<"C) Charminar"<<endl;
                        cout<<"D) Vijaya Sthambha"<<endl;
                    cout<<"enter your answer:"<<endl;
                    cin>>ch;

                        if(ch=='d' || ch=='D')
                        {
                            cout<<"congratulations.., you have given the right answer.\nYou have won Rs.1,60,00,000."<<endl;
                            cout<<"next question : \n"<<endl;

                                cout<<"According to the Indian Mythology who rules the \"kali yug\""<<endl;

                                    cout<<"A) Klaki (lord Vishnu)"<<endl;
                                    cout<<"B) Kali (asur)"<<endl;
                                    cout<<"C) Lord Brahma"<<endl;
                                    cout<<"D) Lord Shiva"<<endl;
                            
                               cout<<"enter your answer:"<<endl;
                                cin>>ch;

                                if (ch=='B' || ch=='b')
                                {
                                     cout<<"congratulations.., you have given the right answer.\nYou have won Rs.3,20,00,000."<<endl;
                                     cout<<"last ,JACKPOT question for 7 crore is : \n"<<endl;

                                     cout<<"According to Hindu mythology who witnessed the Ramayana 11(Eleven) times and Mahabharat 16(sixteen) times ?"<<endl;
                                    cout<<"A) God Hanuman"<<endl;
                                    cout<<"B) Jambvan"<<endl;
                                    cout<<"C) Shri Kaagbhushandi"<<endl;
                                    cout<<"D) Sage Garuda(mount of lord Vishnu)"<<endl;

                                    cout<<"enter your answer:"<<endl;
                                     cin>>ch;

                                     if(ch=='C' || ch=='c')
                                     {
                                        cout<<"congratulations... you have given the right answer and won the game!!\nYou have won Rs.7 crore..."<<endl;
                                        cout<<"Well played"<<endl;
                                        return;
                                     }
                                     else
                                     {
                                        cout<<"opps!!, wrong answer. Please try again."<<endl;
                                        return;
                                     }
                                     
                                }
                                else
                                {
                                     cout<<"opps!!, wrong answer. Please try again."<<endl;
                                    return;
                                }
                                
                                
                        }
                        else
                        {
                            cout<<"opps!!, wrong answer. Please try again."<<endl;
                            return;
                        }
                       
                }
                else
                {
                    cout<<"opps!!, wrong answer. Please try again."<<endl;
                    return;
                }
             }
             else
             {
            cout<<"opps!!, wrong answer. Please try again."<<endl;
            return;
             }
         
         }
    else
        {
            cout<<"opps!!, wrong answer. Please try again."<<endl;
            return;
        }
    }
    else
    {
        cout<<"opps!!, wrong answer. Please try again."<<endl;
        return;
    }
    
}
    