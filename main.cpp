#include <iostream>
#include <string>
#include <bits/stdc++.h>
#define MAX 100

using namespace std;

void push(char);
int top = -1;
bool isFull();
bool isEmpty();
char stackk[100];
char pop();
string proses_pesan(string);

int main()
{
    string pesan;
    cout << "pesan fulan = ";
    cin >> pesan;
    cout << endl;
    proses_pesan(pesan);

    return 0;
}

bool isFull(){
    if(top==MAX-1){
        return true;
    }
    else{
        return false;
    }
}

bool isEmpty(){
    if(top==-1){
        return true;
    }
    else{
        return false;
    }
}

void push(char x){
    if(isFull()){
        cout << "Stack penuh" << endl;
    }
    else{
        top++;
        stackk[top]=x;
    }
}

char pop(){
    char ch;
    if(isEmpty()){
        cout << "Stack kosong" << endl;
    }
    else{
        ch=stackk[top];
        stackk[top--];
        return ch;
}
}

string proses_pesan(string psn){
    int i = 0;
    string pst="";

    while(psn[i]!='\0'){
        if(psn[i]>='a' && psn[i]<='z' || psn[i]>='A' && psn[i]<='Z'){
            push(psn[i]);
            i++;
        }
        else if (psn[i]=='*'){
            i++;
        }

    }

    for (int i = 0; i <= top; i++){
            cout << stackk[i];
        }

}
