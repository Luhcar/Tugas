#include <iostream>
#define MAX 10
using namespace std;

struct queue {
    int head;
    int tail;
    string data[MAX];
}Antre;

void init(){
    Antre.head = Antre.tail = 0;
}

bool isFull(){
    return Antre.tail == MAX;
}

bool isEmpty (){
    return Antre.tail == 0;
}

void printQueue (){
    if(isEmpty()) {
        cout << "Antrian kosong" <<endl;
    }else{
        cout << "Antrian : "<<endl;
        for (int i = Antre.head; i < Antre.tail; i++){

        //menambahkan koma jika data tidak terdapat di antrian pertama
            cout << Antre.data[i];
            cout << endl;
        }
    }
}


void enqueue () {
    if(isEmpty()){
        init();
    }

    if (isFull()){
        cout << "Antrian penuh !" <<endl;
    }
    else{
        string data;
        cout << "Masukkan data : ";
        cin >> data;
        Antre.data[Antre.tail]= data;
        Antre.tail++;
        cout << "Nama masuk ke antrian " <<endl;
        printQueue();
    }
}

void dequeue() {
    if (isEmpty()){
        cout << "Antrian kosong" <<endl;
    }else{
        cout << "Mengeluarkan antrian \n" << Antre.data[Antre.head] <<endl;

        for (int i = Antre.head; i < Antre.tail; i++){
            Antre.data[i] = Antre.data [i + 1];
        }
        Antre.tail--;
        printQueue();
    }
}

void clear () {
    Antre.head = Antre.tail = 0;
    cout<<"Antrian sudah kosong"<<endl;

}

int main(){
    int pilihan;
    do
    {
        cout<<"    Menu Pilihan\n"
            <<"1. Masukkan Antrian \n"
            <<"2. Hapus Antrian \n"
            <<"3. Bersihkan Antrian \n"
            <<"4. Keluar \n"
            <<"Masukkan Pilihan (1-4) : "; cin >> pilihan;
        switch (pilihan)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                clear();
                break;
            case 4:
                cout<<"Exit program";
                break;
            default:
                cout <<"Pilihan tidak tersedia";
                break;
        }
    }while(pilihan != 4);
return 0;
}
