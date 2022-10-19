#include <iostream>
#define MAX 30


using namespace std;

char pesan[MAX]={'H','A','*','*','*','L','*','O','A','P','*','*','*','A','*','K','A','B','*','A','*','*','*','R'};
char hasil[MAX]{};
int top = -1;
char isi;
void pesan_data();
void push();
int main()
{
    cout << "Pesan = ";
    for(int i=0; i<MAX; i++){
        cout << pesan[i];
    }
    cout << endl;
    cout << "Hasil = " ;
    pesan_data();
    for(int i=0; i<MAX; i++){
        cout << hasil[i];
    }
    return 0;
}

void pesan_data(){
    for(int i=0; i<MAX; i++){
        if(pesan[i] == '*' ){

        }else{
            isi = pesan[i];
            push();
        }
    }
}

void push(){
    top++;
    hasil[top] = isi;
}
