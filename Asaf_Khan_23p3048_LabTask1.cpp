#include<iostream>
#include<string>

using namespace std;

struct ProductData
{
    string Name;
    float price;
    int quantity;

    ProductData CreateProductData(ProductData product)
    {
         cout<<"Enter Product name :";
         cin.ignore();
    getline(cin,product.Name);
    cout<<endl;
 
    cout<<"Enter Product price :";
    cin>>product.price;
    cout<<endl;
 
    cout<<"Enter Product's quantity :";
    cin>>product.quantity;
    cout<<endl;
    
        return product;    
    }
    void display(ProductData pro1,ProductData pro2){
        cout<<"Recipte :"<<"\n"
            <<"----------"<<"\n"
            <<"Product :"<<pro1.Name<<"\n"
            <<"Price :"<<pro1.price<<"\n"
            <<"Quantity :"<<pro1.quantity<<endl;
            cout<<"----------"<<"\n";
            cout<<"Product :"<<pro2.Name<<"\n"
            <<"Price :"<<pro2.price<<"\n"
            <<"Quantity :"<<pro2.quantity<<endl;
    }
    
};

int main()
{
    ProductData Product;

    Product = Product.CreateProductData(Product);
    
    
    ProductData Product2;

    Product2 = Product2.CreateProductData(Product2);
    Product2.display(Product,Product2);
 
    return 0;
}
