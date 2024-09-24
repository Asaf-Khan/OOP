#include<iostream>
#include<string>

using namespace std;

float calculateCalories(float gcarb,float gpro);

class FoodItem {
	private :
		string name;
		float calories;
		float grams_of_fats;
		float grams_of_carbohydrates;
		float grams_of_protien;
		friend float calculateCalories(float gcarb,float gpro);
	public :
		FoodItem() {}

		FoodItem(string Name):name(Name) {}
		FoodItem(string Name,float cal):name(Name),calories(cal) {}

		FoodItem(string Name,float cal,float gfats,float gcarb,float gpro)
			:name(Name),calories(cal),grams_of_fats(gfats),grams_of_carbohydrates(gcarb),
			 grams_of_protien(gpro) {}

		void setname(string name) {
			this->name =name;
		}

		void setgfats(float gfats) {
			while (gfats<0) {
				cout<<"Enter positive values :";
				cin>>gfats;
			}
			grams_of_fats = gfats;
		}
		void setgcarbs(float gcarbs) {
			while (gcarbs<0) {
				cout<<"Enter positive values :";
				cin>>gcarbs;
			}
			grams_of_carbohydrates = gcarbs;
		}
		void setgpro(float gpro) {
			while (gpro<0) {
				cout<<"Enter positive values :";
				cin>>gpro;
			}
			grams_of_protien = gpro;
		}
		void setcal() {
			calories = calculateCalories(grams_of_carbohydrates,grams_of_protien);
		}
		string getname() {
			return name;
		}
		float getfats() {
			return grams_of_fats;
		}
		float getcarbs() {
			return grams_of_carbohydrates;
		}
		float getpro() {
			return grams_of_protien;
		}

		void display() {
			cout<<"Name          : "<<name<<"\n"
			    <<"calories      : "<<calories<<"\n"
			    <<"Fats          : "<<grams_of_fats<<"\n"
			    <<"Carbohydrates : "<<grams_of_carbohydrates<<"\n"
			    <<"Protiens      : "<<grams_of_protien<<endl;
		}

};
float calculateCalories(float gcarb,float gpro) {
	float c = (4*gcarb)+(4*gpro);
	return c;
}
int main() {
	FoodItem item;
	string Name;
	while (1) {
		cout<<"Enter food item name or type exit :";
		cin.ignore();
		getline(cin,Name);
		if(Name == "exit") {
			break;
		}
		item.setname(Name);
		float gfats;
		cout<<"Enter grams of fats :";
		cin>>gfats;
		item.setgfats(gfats);
		float gcarbs;
		cout<<"Enter grams of carbohydrates :";
		cin>>gcarbs;
		item.setgcarbs(gcarbs);
		float gpro;
		cout<<"Enter grams of protien :";
		cin>>gpro;
		item.setgpro(gpro);
		item.setcal();
		item.display();
	}
	return 0;

}