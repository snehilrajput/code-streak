#include<iostream>
#include<string>
using namespace std;

class LibraryMember
{
private:
int id;
string name;
int *book_id_arr;
int nob;

public:
LibraryMember(int id , string name,int nob){ //constructor 
    this->id = id;
    this->name = name;
    this->nob = nob;

    this->book_id_arr = new int[nob]; //deep copy 

    for(int i = 0 ;i < nob; i++){
        this->book_id_arr[i] = 0;

    }
}
void display(){
cout<<"\n id = "<<id <<endl;
cout<<"\n name =" <<name <<endl;
for(int i = 0; i < nob; i++)
{
    cout<<"\nbook id\n"<< book_id_arr[i];
}
}
void acceptbookdetail()
{
    for(int i = 0 ; i <nob ;i++){
        cout<<"\nenter book id "<<endl;
        cin>> book_id_arr[i];
    }

}
~LibraryMember() {// destructor 
 if(book_id_arr != nullptr) 
{
    delete[] book_id_arr;
    book_id_arr= nullptr;
}
}
LibraryMember(LibraryMember& copyobj)
{
this->id = copyobj.id;
this->name = copyobj.name;
this->nob = copyobj.nob;
}

};



int main(){
    LibraryMember m1 (1, "snehil", 3);

    m1.acceptbookdetail();

    m1.display();
    
    LibraryMember m2 = m1;
    cout<<"\n--------the m2 is-----";
    m2.display();
    

   return 0 ;   
}

