#include<iostream>
#include<string>

using namespace std;

class store
{
public:
    string name;
    int ID;
    float price;
    int quantity;
    store()
    {
        ID = 111;
        name = "XXXX";
        price = 1.11;
        quantity = 111;
    }
    store(string naam,int id,float qemat,int qnt)
    {
        name = naam;
        ID = id;
        price = qemat;
        quantity = qnt;
    }
    ~store(){
        cout<<"object destroyed"<<endl;
    }
    void setvalue(float price)
    {
        this->price = price;
    }
    void setQuantity(int quantity){
        this->quantity = quantity;
    }
    void display(int see,store array[])
    {
          cout<<"Product  : "<<array[see].name<<"\n"
            <<"ID       : "<<array[see].ID<<"\n"
            <<"Price    : "<<array[see].price<<"\n"
            <<"Quantity : "<<array[see].quantity<<"\n";

    }
    
};
void display(int qn,store arr[]){
    cout<<"GROCERY STORE :"<<"\n"
        <<"^^^^^^^^^^^^^^^^"<<"\n";
    for (int  i = 0; i < qn; i++)
    {
        cout<<"Product  : "<<arr[i].name<<"\n"
            <<"ID       : "<<arr[i].ID<<"\n"
            <<"Price    : "<<arr[i].price<<"\n"
            <<"Quantity : "<<arr[i].quantity<<"\n";
    }
    
}
void update(int Q,store arr[])
{
    int newID;
    cout<<"Enter the ID of the product :";
    cin>>newID;
     for (int i = 0; i < Q; i++) 
     {
        if (newID == arr[i].ID) 
        {
            float newPrice;
            int newQuantity;
            int choice2;
            cout<<"1.Update price \n2.Update quantity"<<endl;
            cin>>choice2;
            if(choice2 ==1)
            {
                cout<<"Enter new price :";
                cin>>arr[i].price;
                return;
            }
            else if (choice2 == 2)
            {
               cout<<"Enter new price :";
                cin>>arr[i].quantity;
                return ;
            }
            else{}
            
        }
        else
        {
            cout<<"Product not found :"<<endl;
            return ;
        }
        
    }
    
}
    



void search(int see,int Q,store arr[]){
    for (int  i = 0; i < Q; i++)
    {
        if(see == arr[i].ID)
        {
            cout<<"PRODUCT FOUND ^_^"<<endl;
            arr[i].display(i,arr);
            return;
        }        
    }
    cout<<"NOT FOUND :("<<endl;
}

int main()
{
     char stay ;
    do
    {  
    int Q;
    cout<<"Enter the number of products : ";
    cin>>Q;
   
    store array[Q];
    string Name;
    int iD;
    float Price;
    int Quantity;
  
        for (int  i = 0; i < Q; i++)

    {   cout<<"DETAILS OF THE PRODUCT :"<<"\n"
            <<"========================"<<"\n";

        cout<<"Enter the ID for the product :";
        cin>>iD;
        cout<<endl;
        cout<<"Enter the Name of the product :";
        cin.ignore();
        getline(cin,Name);
        cout<<endl;
        cout<<"Enter Price :";
        cin>>Price;
        cout<<endl;
        cout<<"Enter Quantity :";
        cin>>Quantity;
        cout<<endl;
        array[i] =  store(Name, iD,Price,Quantity);
    }
    int choice;
    cout<<"MENU : "<<"\n"
        <<"1.Display"<<"\n"
        <<"2.Update"<<"\n"
        <<"3.Search for ID"<<endl;
    cin>>choice;
    switch (choice)
    {
    case 1:
        display(Q,array);
        break;
    case 2:
        update(Q,array);
        break;
    case 3:
        int see;
        cout<<"Enter ID :";
        cin>>see;
        search(see,Q,array);
        break;
    default:
        cout<<"Invalid choice"<<endl;
        break;
    }
    
    cout<<"Do you want to continue (y/n) :";
    cin>>stay;

    }while (stay != 'N'&& stay != 'n');
    
      
}