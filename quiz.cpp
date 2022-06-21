#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<windows.h>
using namespace std;

struct student{

	char nam[20],rollno[20];
	int marks,random;

};

student st;

void greeting(){
	
	cout<<"\n\n\t Select the correct translation for given words.."<<endl;

	int i=0,arr[15];

	st.marks=0;

	char choice;

	while(i<15){

	back:	

	st.random=rand()%16;

	for(int j=0;j<15;j++){

		if(st.random==arr[j]){

			goto back;

		}

	}

	arr[i]=st.random;

	switch(st.random)

    {

    case 0:

	cout<<i+1<<")  Hello"<<endl<<endl;

	cout<<"A. Arrivederci"<<endl;
	cout<<"B. Ciao"<<endl;
    cout<<"C. Buongiorno"<<endl;
    cout<<"D. Bene"<<endl;

	choice=getch();

	if(choice=='B'||choice=='b'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is 'b'"<<endl<<endl;

	}

	break;

	case 1:

	cout<<i+1<<") Good morning"<<endl<<endl;

	cout<<"A) Buon notte"<<endl;
    cout<<"B) Buon sera"<<endl;
    cout<<"C) Buon giorno"<<endl;
    cout<<"D) Buon pomeriggio"<<endl;

	choice=getch();

	if(choice=='C'||choice=='c'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is 'c'''"<<endl<<endl;

	}

	break;

	case 2:

	cout<<i+1<<") Come sta?"<<endl<<endl;

	cout<<"A) What about you?"<<endl;
    cout<<"B) I'm fine'"<<endl;
    cout<<"C) How are you?"<<endl;
    cout<<"D) Come here"<<endl;

	choice=getch();

	if(choice=='c'||choice=='C'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is 'c'''"<<endl<<endl;

	}

	break;

	case 3:

	cout<<i+1<<") My name is.."<<endl<<endl;

	cout<<"a) Mi chiamo.."<<endl;
    cout<<"b) Ci vediamo dopo"<<endl;
    cout<<"c) Stammi bene"<<endl;
	cout<<"d) Vengo da"<<endl;

	choice=getch();

	if(choice=='A'||choice=='a'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is 'a'''"<<endl<<endl;

	}

	break;

	case 4:

	cout<<i+1<<")  Buono fortuna"<<endl<<endl;

	cout<<"a) Good luck"<<endl;
    cout<<"b) See you later"<<endl;
    cout<<"c) I am fine"<<endl;
    cout<<"d) Take care"<<endl;

	choice=getch();

	if(choice=='A'||choice=='a'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is 'a'"<<endl<<endl;

	}

	break;

	case 5:

	cout<<i+1<<") Piacere di conoscerti"<<endl<<endl;

	cout<<"a) I'm from'"<<endl;
    cout<<"b) How old are you"<<endl;
    cout<<"c) Thank me later"<<endl;
    cout<<"d) Nice to meet you"<<endl;

	choice=getch();

	if(choice=='d'||choice=='D'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl<<endl;

		cout<<"The corrent answer is 'd'"<<endl;

	}

	break;

	case 6:

	cout<<i+1<<") Sono di"<<endl<<endl;

	cout<<"a) Since when.."<<endl;
    cout<<"b) I'm from'"<<endl;
    cout<<"c) Take care"<<endl;
    cout<<"d) Bye"<<endl;

	choice=getch();

	if(choice=='b'||choice=='B')
	  {
        cout<<choice<<" is correct Answer"<<endl<<endl;
        st.marks++;
      }

	else
	  {
        cout<<choice<<" is incorrect Answer"<<endl;
     	cout<<"The corrent answer is 'b'"<<endl<<endl;
      }

	break;
	
	case 7:

	cout<<i+1<<") E tu?"<<endl<<endl;

	cout<<"a) How are you?"<<endl;
    cout<<"b) Are you okay?"<<endl;
    cout<<"c) What about you?"<<endl;
    cout<<"d) Where are you"<<endl;

	choice=getch();

	if(choice=='c'||choice=='C')
	  {
        cout<<choice<<" is correct Answer"<<endl<<endl;
        st.marks++;
      }

	else
	  {
        cout<<choice<<" is incorrect Answer"<<endl;
     	cout<<"The corrent answer is 'c'"<<endl<<endl;
      }

	break;
	
	case 8:

    cout<<i+1<<") Quanti anni hai?"<<endl<<endl;

	cout<<"a) How are you?"<<endl;
    cout<<"b) How old are you?"<<endl;
    cout<<"c) Where are you from?"<<endl;
    cout<<"d) Where are you"<<endl;

	choice=getch();

	if(choice=='c'||choice=='C')
	  {
        cout<<choice<<" is correct Answer"<<endl<<endl;
        st.marks++;
      }

	else
	  {
        cout<<choice<<" is incorrect Answer"<<endl;
     	cout<<"The corrent answer is 'c'"<<endl<<endl;
      }

	break;
	
	case 9:

	cout<<i+1<<") Bye"<<endl<<endl;

	cout<<"a) Buon"<<endl;
    cout<<"b) Arrivederci"<<endl;
    cout<<"c) Prego"<<endl;
    cout<<"d) Ciao"<<endl;

	choice=getch();

	if(choice=='d'||choice=='D')
	  {
        cout<<choice<<" is correct Answer"<<endl<<endl;
        st.marks++;
      }

	else
	  {
        cout<<choice<<" is incorrect Answer"<<endl;
     	cout<<"The corrent answer is 'd'"<<endl<<endl;
      }

	break;
	
	case 10:

	cout<<i+1<<") Per favore"<<endl<<endl;

	cout<<"a) Thank you"<<endl;
    cout<<"b) Okay"<<endl;
    cout<<"c) Please"<<endl;
    cout<<"d) You're welcome"<<endl;

	choice=getch();

	if(choice=='c'||choice=='C')
	  {
        cout<<choice<<" is correct Answer"<<endl<<endl;
        st.marks++;
      }

	else
	  {
        cout<<choice<<" is incorrect Answer"<<endl;
     	cout<<"The corrent answer is 'c'"<<endl<<endl;
      }

	break;
	
	case 11:

	cout<<i+1<<") You're welcome"<<endl<<endl;

	cout<<"a) Grazzie"<<endl;
    cout<<"b) Prego"<<endl;
    cout<<"c) Come"<<endl;
    cout<<"d) Tazza"<<endl;

	choice=getch();

	if(choice=='b'||choice=='B')
	  {
        cout<<choice<<" is correct Answer"<<endl<<endl;
        st.marks++;
      }

	else
	  {
        cout<<choice<<" is incorrect Answer"<<endl;
     	cout<<"The corrent answer is 'b'"<<endl<<endl;
      }

	break;
	
	case 12:

	cout<<i+1<<") Come va?"<<endl<<endl;

	cout<<"a) How are you?"<<endl;
    cout<<"b) How are you doing?"<<endl;
    cout<<"c) What about you?"<<endl;
    cout<<"d) Where are you from?"<<endl;

	choice=getch();

	if(choice=='b'||choice=='B')
	  {
        cout<<choice<<" is correct Answer"<<endl<<endl;
        st.marks++;
      }

	else
	  {
        cout<<choice<<" is incorrect Answer"<<endl;
     	cout<<"The corrent answer is 'b'"<<endl<<endl;
      }

	break;
	
	case 13:

	cout<<i+1<<") I'm fine"<<endl<<endl;

	cout<<"a) Sto bene"<<endl;
    cout<<"b) Mille grazzie"<<endl;
    cout<<"c) Stammi bene"<<endl;
    cout<<"d) Vengo da"<<endl;

	choice=getch();

	if(choice=='a'||choice=='A')
	  {
        cout<<choice<<" is correct Answer"<<endl<<endl;
        st.marks++;
      }

	else
	  {
        cout<<choice<<" is incorrect Answer"<<endl;
     	cout<<"The corrent answer is 'a'"<<endl<<endl;
      }

	break;
	
	case 14:

	cout<<i+1<<") Thank you so much"<<endl<<endl;

	cout<<"a) Mi dispiace"<<endl;
    cout<<"b) Capisco"<<endl;
    cout<<"c) Grazzie mille"<<endl;
    cout<<"d) Mi piace"<<endl;

	choice=getch();

	if(choice=='c'||choice=='C')
	  {
        cout<<choice<<" is correct Answer"<<endl<<endl;
        st.marks++;
      }

	else
	  {
        cout<<choice<<" is incorrect Answer"<<endl;
     	cout<<"The corrent answer is 'c'"<<endl<<endl;
      }

	break;
     }
	  i++;

}

	

}

void conversation(){

	//just copy cppp function code, paste here

	//repace cpp questions to java questions 

}

void eating(){

	//just copy cppp function code, paste here

	//repace cpp questions to html questions 

}

void result(){

	

	float percentage=0;

	cout<<"Marks: "<<st.marks<<" out of 15"<<endl;

	percentage=100*st.marks/15;

	cout<<"Percentage: "<<percentage<<"%"<<endl;

	if(percentage>=50){

		cout<<"Status: Pass"<<endl;

	}

	else {

	cout<<"Status: Fail"<<endl;

    }

}


main(){

	char press,select,key;

	do

	{

	cout<<"\n\n\t\t____________________________________________"<<endl;
    cout<<"\t\t|                                           |";
	cout<<"\n\t\t|  WANNA TEST YOUR ITALIAN LANGUAGE SKILLS  |"<<endl;
    cout<<"\t\t|                                           |"<<endl;
    
	cout<<"\t\t_____________________________________________"<<endl;

    cout<<"\n\n\t\tLet's  try  by  giving  a  quiz"<<endl;
    
    cout<<"\n\nPress any key to continue";
    key=getch();
    

	system("CLS");

	cout<<"\n\n\t\tBEST     OF    LUCK"<<endl;

	cout<<"\n\nSelect field in which you want to give the quiz"<<endl;

	cout<<"1) Greetings"<<endl;

	cout<<"2) Conversation"<<endl;

	cout<<"3) Eating Out"<<endl;

	select=getch();

	system("CLS");

	switch(select){

		case '1':

			cout<<"\t\tGreetings Quiz"<<endl;

			greeting();

			system("CLS");

			cout<<"\t\tGreeting Quiz Result"<<endl;

			result();

			break;

		case '2':

			cout<<"\t\tConversation Quiz"<<endl;

		    conversation();

		    system("CLS");

		    cout<<"\t\tConversation Quiz Result"<<endl;

		    result();

		    break;

		case '3':

			cout<<"\t\tEating Out Quiz"<<endl;

			eating();

			system("CLS");

			cout<<"\t\tEating Out Quiz Result"<<endl;

			result();

			break;

		default:

			cout<<"Invalid input"<<endl;

			break;

	}

	cout<<"Press y if you want to continue or any key to terminate"<<endl;

	press=getch();

	system("CLS");

   }while(press=='y'||press=='Y');

}
