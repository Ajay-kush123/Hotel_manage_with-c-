#include<bits/stdc++.h>
using namespace std;
int main(){
	char inp,y,n,Y,N;
	string name,getkey;
	int age;
	cout<<"\t\t WELCIME TO CHATBOX \n\n";
	cout<<"To continue the Program type 'Y' and to End type 'N' \n ";
	cout<<"-->";
	cin>>inp;
	//condition weather its y or n.
	if (inp =='y' ||inp=='Y'){
		cout<<"Welcome ......"<<endl; //do this
		
	}
	else {
		cout<<"Thanks for coming"; // do this
	}
	system ("cls"); //clean out the terminal
	if (getkey!="Bye"){
		cout<<"\t HEllo USER \n";
		cin>>getkey;
		cout<<"What is your name ? \n";
		cin>>name;
		cout<<name<<" What is your age ? \n";
		cin>>age; 
		switch(age){
			case 18 :
				cout<<"You are young\n";
				break;
			case 30:
				cout<<"You are a man\n";
				break;
			default :
				cout<<"Nothing say about your age\n";
				break;
					
		}
		cout<<" Bye Bye "<<name<<endl;
		cout<<"-->";
		cin>>getkey;
	}
	system("cls");
	cout<<"\t\tPROGRAM END HERE\n"<<endl;
	return 0;
}
