#include <iostream>
#include <fstream>
#include <chrono>
using namespace std;

#include "linkedbtree.h"

#define TREE_SIZE 100

void createTree(LinkedBTree<int>&);
void display(int&);
void write(int&);

string FILENAME;

int main(){
    LinkedBTree<int> newtree;
    createTree(newtree);

    return 0;
}

void createTree(LinkedBTree<int>& data){    
    srand (time(NULL));
    for(int i = 0; i < TREE_SIZE; i++){
        data.add(rand() % 200 + 1);
    }
}

void display(int& num){
    cout << num << endl;
}

void write(int& num){
    ofstream outfile;
    outfile.open(FILENAME, ofstream::app);

    outfile << num << endl;

    outfile.close();
}
