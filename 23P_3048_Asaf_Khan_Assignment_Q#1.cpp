#include<iostream>
#include<string>

using namespace std;

class Book {
	private :

		string Title,Author,Genre;
		bool Availabity_status;

	public :
		static int bookcount;

		Book() {
			++bookcount;
		}

		void setTitle(string title) {
			Title = title;
		}
		void setAuthor(string author) {
			Author = author;
		}
		void setGenre(string genre) {
			Genre = genre;
		}
		void setStatus(bool status) {
			Availabity_status = status;
		}

		string getTitle() {
			return Title;
		}
		string getAuthor() {
			return Author;
		}
		string getGenre() {
			return Genre;
		}
		bool getStatus() {
			return Availabity_status;
		}

		void display() {
			cout<<"Title        : "<<Title<<"\n"
			    <<"Author       : "<<Author<<"\n"
			    <<"Genre        : "<<Genre<<"\n"
			    <<"Availability : "<<Availabity_status<<endl;
		}

};

class Library {
	public :

		Book *book;
		int size;

		Library() {}
		Library(int initialSize) {
			size = initialSize;
			book = new Book[initialSize];

		}

		~Library() {
			delete[] book;
		}
		void addBook(int index, string title, string author, string genre, bool status) {
			book[index].setTitle(title);
			book[index].setAuthor(author);
			book[index].setGenre(genre);
			book[index].setStatus(status);
		}
		Book* AddBook(string title,string author,string genre,bool status) {
			Book *object = new Book; // corrected
			object->setTitle(title);
			object->setAuthor(author);
			object->setGenre(genre);
			object->setStatus(status);

			return object;
		}
};
int Book::bookcount = 0;

int main() {
	int size = 1;
	int size2 = size;
	Library books(size);

	string t,a,g;
	bool status;

	cout<<"Book Title  : ";
	getline(cin,t);
	cout<<"Book Author : ";
	getline(cin,a);
	cout<<"Book Genre  : ";
	getline(cin,g);
	cout<<"Is it available\n"
	    <<"1->yes\n"
	    <<"0->no"<<endl;
	cin>>status;
	books.addBook(size-1,t,a,g,status);

	cout<<"Book added successfully!!"<<endl;
	bool choice;
	do {
		cout<<"Do you want to add another book\n"
		    <<"1->yes\n"
		    <<"0->no"<<endl;
		cin>>choice;
		if(choice == 0) {
			break;
		}
		++size2;
		Library newbooks(size2);
		for (int i = 0; i < size2-1; i++) {
			newbooks.book[i] = books.book[i];
		}
		string t,a,g;
		bool status;
		cin.ignore();
		cout<<"Book Title  : ";
		getline(cin,t);
		cout<<"Book Author : ";
		getline(cin,a);
		cout<<"Book Genre  : ";
		getline(cin,g);
		cout<<"Is it available\n"
		    <<"1->yes\n"
		    <<"0->no"<<endl;
		cin>>status;

		newbooks.book[size2-1] = *newbooks.AddBook(t,a,g,status);
		cout<<"Book added successfully!!"<<endl;

		books.book = new Book[size2];
		for (int i = 0; i < size2; i++) {
			books.book[i] = newbooks.book[i];
		}


	} while (1);

	string GENRE;
	cout<<endl;
	cin.ignore();
	cout<<"Enter the genre to display the books : ";
	getline(cin,GENRE);
	cout<<"Available Books in "<<GENRE<<" : \n";
	for (int i = 0; i < size2; i++) {
		if(GENRE == books.book[i].getGenre()) {
			books.book[i].display();
		}
		if(i == size2-1){
			if(GENRE == books.book[i].getGenre()) {
			books.book[i].display();
		}else{
			cout<<"\nSorry not found !!!\n";
		}
		}
	}


	return 0;

}