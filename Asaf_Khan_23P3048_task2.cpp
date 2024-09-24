#include<iostream>

using namespace std;
 
int main()
{	char r1,r2,r3,r4,r5,choice;
	
	do{
		
		cout<<"WELCOME TO THE HAUNTED MANSION"<<endl;
		cout<<"If you want to survive,you better answer my riddles correctly or else....."<<endl;
	
	//RIDDLE 1 :	
		cout<<"------------------------------------"<<endl;
		cout<<"Riddle 1 :"<<endl;
		cout<<" I am strong enough to smash ships, but I fear the Sun. What am I?"<<endl;
		cout<<"a.Ice\nb.Rock\nc.Cyclone"<<endl;
		cin>>r1;
		if(r1 == 'a' || r1 == 'A')
		{
			cout<<"Correct Answer!!!!\n\tBut that was a simple one and let's keep going....."<<endl;
		
			//RIDDLE 2 :	
		cout<<"------------------------------------"<<endl;
		cout<<"Riddle 2 :"<<endl;
		cout<<"Choose between these doors which leads to these rooms :"<<endl;
		cout<<"a.Full of Beasts and monsters\nb.Mutant Zombies \nc.A hungery Lion which hasn't eaten for weeks'"<<endl;
		cin>>r2;
			if(r2 == 'c' || r2 == 'C')
		{
			cout<<"Not again!!!!\n\tYou got lucky ,let's keep going....."<<endl;
			//RIDDLE 3 :	
		cout<<"------------------------------------"<<endl;
		cout<<"Riddle 3 :"<<endl;
		cout<<"It runs and runs but can never flee. It is often watched, yet never seen. When long it brings boredom, When short it brings fear. What is it?"<<endl;
		cout<<"a.Shadow\nb.Time\nc.Deep Jungle at night time'"<<endl;
		cin>>r3;
			if(r3 == 'b' || r3 == 'B')
		{
			cout<<"Come onnnnn!!!!\n\tYou are a clever one....."<<endl;
			//RIDDLE 4 :	
		cout<<"------------------------------------"<<endl;
		cout<<"Riddle 3 :"<<endl;
		cout<<"There are ten birds sitting on a fence. You shoot one. How many are left?"<<endl;
		cout<<"a.Ten\nb.Nine\nc.None'"<<endl;
		cin>>r4;
			if(r4 == 'c' || r4 == 'C')
		{
			cout<<"Didn't see that coming, You are getting better'....."<<endl;
			
	//RIDDLE 5 :	
		cout<<"------------------------------------"<<endl;
		cout<<"Riddle 5 :"<<endl;
		cout<<"Final round"<<endl;
		cout<<"What word is a fun word until you add one letter and it becomes a terrible word that no one wants to happen?"<<endl;
		cout<<"a.Laughter\nb.out\nc.had"<<endl;
		cin>>r5;
			if(r5 == 'A' || r5 == 'a')
		{
			cout<<"With a very sad heart I have to say you have cleared all stages \n\tNOW GET OUT OF MY MANSION....."<<endl;
		}
		else
		{
			cout<<"hahahaha!!!!\n\tAt last, now you are about to die..."<<endl;	
			
		}
		}
		else
		{
		cout<<"hahahaha!!!!None are left. All the others are scared away because of the gunshot.\n\tAt last, now you are about to die..."<<endl;		
			
		}
		}
		else
		{
		cout<<"hahahaha!!!!\n\tAt last, now you are about to die..."<<endl;		
		
		}

		}
		else
		{
			cout<<"Sorry kiddooo!!!!\n\tYou better not hide cause I'm coming to get you..."<<endl;	
			
		}
		
		}
		else
		{
			cout<<"Sorry kiddooo!!!!\n\tYou better not hide cause I'm coming to get you..."<<endl;	
			
		}
	

		
	

		
	cout<<"Want to give it another try.....(Y/N)"<<endl;
	cin>>choice;
	
	}while(choice == 'Y'|| choice == 'y');
	
		
		
		 
		
		
		 	
 }