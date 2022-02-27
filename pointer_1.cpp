#include <iostream>

using namespace std;

int main (){
    int a = 0, b = 0, c = 0;
    int *p1 = 0, *p2 = 0, *p3 = 0;

    a = 10;
    cout << "Untuk baris ke-1"<<endl;
    cout << "Kolom a: "<< a << endl;
    cout << "Kolom b: "<< b << endl;
    cout << "Kolom c: "<< c << endl;
    cout << "Kolom p1: "<< p1 << endl;
    cout << "Kolom p2: "<< p2 << endl;
    cout << "Kolom p3: "<< p3 << endl;

    b = 15;
    cout << "\nUntuk baris ke-2"<<endl;
    cout << "Kolom a: "<< a << endl;
    cout << "Kolom b: "<< b << endl;
    cout << "Kolom c: "<< c << endl;
    cout << "Kolom p1: "<< p1 << endl;
    cout << "Kolom p2: "<< p2 << endl;
    cout << "Kolom p3: "<< p3 << endl;

    p1 = &b;
    cout << "\nUntuk baris ke-3"<<endl;
    cout << "Kolom a: "<< a << endl;
    cout << "Kolom b: "<< b << endl;
    cout << "Kolom c: "<< c << endl;
    cout << "Kolom p1: "<< p1 << endl;
    cout << "Kolom p2: "<< p2 << endl;
    cout << "Kolom p3: "<< p3 << endl;

    p2 = p1;
    cout << "\nUntuk baris ke-4"<<endl;
    cout << "Kolom a: "<< a << endl;
    cout << "Kolom b: "<< b << endl;
    cout << "Kolom c: "<< c << endl;
    cout << "Kolom p1: "<< p1 << endl;
    cout << "Kolom p2: "<< p2 << endl;
    cout << "Kolom p3: "<< p3 << endl;

    c = 27;
    cout << "\nUntuk baris ke-5"<<endl;
    cout << "Kolom a: "<< a << endl;
    cout << "Kolom b: "<< b << endl;
    cout << "Kolom c: "<< c << endl;
    cout << "Kolom p1: "<< p1 << endl;
    cout << "Kolom p2: "<< p2 << endl;
    cout << "Kolom p3: "<< p3 << endl;

    p1 = &c;
    cout << "\nUntuk baris ke-6"<<endl;
    cout << "Kolom a: "<< a << endl;
    cout << "Kolom b: "<< b << endl;
    cout << "Kolom c: "<< c << endl;
    cout << "Kolom p1: "<< p1 << endl;
    cout << "Kolom p2: "<< p2 << endl;
    cout << "Kolom p3: "<< p3 << endl;

    a = *p1;
    cout << "\nUntuk baris ke-7"<<endl;
    cout << "Kolom a: "<< a << endl;
    cout << "Kolom b: "<< b << endl;
    cout << "Kolom c: "<< c << endl;
    cout << "Kolom p1: "<< p1 << endl;
    cout << "Kolom p2: "<< p2 << endl;
    cout << "Kolom p3: "<< p3 << endl;

    p3 = &b;
    cout << "\nUntuk baris ke-8"<<endl;
    cout << "Kolom a: "<< a << endl;
    cout << "Kolom b: "<< b << endl;
    cout << "Kolom c: "<< c << endl;
    cout << "Kolom p1: "<< p1 << endl;
    cout << "Kolom p2: "<< p2 << endl;
    cout << "Kolom p3: "<< p3 << endl;

    *p2 = 8;
    cout << "\nUntuk baris ke-9"<<endl;
    cout << "Kolom a: "<< a << endl;
    cout << "Kolom b: "<< b << endl;
    cout << "Kolom c: "<< c << endl;
    cout << "Kolom p1: "<< p1 << endl;
    cout << "Kolom p2: "<< p2 << endl;
    cout << "Kolom p3: "<< p3 << endl;
   
   


}

