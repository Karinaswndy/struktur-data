
#include <iostream>
#include <conio.h>
using namespace std;

int n;


void tukar(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}


void dMenu(){
system("cls");
cout<<"Aplikasi Sorting Bubble"<<"\n";       
cout<<"1. masukan data"<<"\n";            
cout<<"2. tampilkan data"<<"\n";            
cout<<"3. sorting asc"<<"\n";           
cout<<"4. sorting dsc"<<"\n";            
cout<<"5. Exit"<<"\n";           
cout<<"Masukan angka :";        

}

void mPertama(string pesan, int data[]){
system("cls");
if (pesan == "pertama") {
cout<<""Masukkan jumlah data: ";
cin >> n;
  for (int i = 0; i < n; i++) {
    cout << "Masukkan data ke-" << (i + 1) << ": ";
    cin >> data[i];
      }
  }
getch();
}

void tampildata(int data[]){
  system("cls");
}

void sortingasc(int data[]){
  system("cls");
}

void sortingdsc(int data[]){
  system("cls");
}


int main() {
  int data [100];

  n = 10;
  char pl;
do
{
    dMenu();
    pl=getch();
  switch (pl)
  {
   case '1':
    /* code */
    mPertama("pertama", data);
    break;
   case '2':
    tampildata(data);
    /* code */ 
    break;  
   case '3':
    sortingasc(data);
    /* code */
    break;  
   case '4':
    sortingdsc(data);
    /* code */
    break;  
  case '5':
    /* code */
    break;
  
  default:
    system("cls");
    cout<<"Pilihan Tidak Tersedia";
    getch();
    break;
  }


} while (pl!='5');
  return 0;
}