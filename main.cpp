#include "BST.h"
#include "RBTree.h"
#include "SplayTree.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <chrono>

using namespace std;


int main() {
    BST bst1;
    BST bst2;
    BST bst3;
    RBTree rbt1;
    RBTree rbt2;
    RBTree rbt3;
    SplayTree spt1;
    SplayTree spt2;
    SplayTree spt3;

    int count = 0;
    int x;
    ifstream inFile;

    int bstHeight1;
    int bstHeight2;
    int bstHeight3;
    int rbtHeight1;
    int rbtHeight2;
    int rbtHeight3;
    int sptHeight1;
    int sptHeight2;
    int sptHeight3;


    cout << "Insert Operations " << endl;
    cout << "----------------------------------" << endl;
    //data_1 for bst

    inFile.open("/home/akhitha/Advanced_Algo/Assignment1/code/data/data_1.txt");
    //time_t start1, end1;

    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    auto start = std::chrono::high_resolution_clock::now();
    while (inFile >> x) {
        count ++;
        bst1.put(x, count);
    }
    inFile.close();
    bstHeight1 = bst1.height();
    auto elapsed = std::chrono::high_resolution_clock::now() - start;

    long long time_taken = std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();
    //double time_taken = double(end1 - start1);
    cout << "BST Height for data_1 = " << bstHeight1 << endl;
    cout << "Time taken to insert data_1 to BST =" << time_taken << " microseconds" <<endl;
//    << time_taken << setprecision(5);
//    cout << " sec " << endl;

    //data_2 for bst
    count = 0;
    inFile.open("/home/akhitha/Advanced_Algo/Assignment1/code/data/data_2.txt");
    //time_t start2, end2;
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    //0time(&start2);
    auto start2 = std::chrono::high_resolution_clock::now();
    while (inFile >> x) {
        count ++;
        bst2.put(x, count);
    }
    inFile.close();
    bstHeight2 = bst2.height();

    auto elapsed2 = std::chrono::high_resolution_clock::now() - start2;

    long long time_taken2 = std::chrono::duration_cast<std::chrono::microseconds>(elapsed2).count();
    cout << "BST Height for data_2 = " << bstHeight2 << endl;
    cout << "Time taken to insert data_2 to BST =" << time_taken2 << " microseconds" << endl;

    //data_3 for BST
    count = 0;
    inFile.open("/home/akhitha/Advanced_Algo/Assignment1/code/data/data_3.txt");
    //time_t start3, end3;
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    //time(&start3);
    auto start3 = std::chrono::high_resolution_clock::now();
    while (inFile >> x) {
        count ++;
        bst3.put(x, count);
    }
    inFile.close();
    bstHeight3 = bst3.height();
    auto elapsed3 = std::chrono::high_resolution_clock::now() - start3;

    long long time_taken3 = std::chrono::duration_cast<std::chrono::microseconds>(elapsed3).count();
    cout << "BST Height for data_3 = " << bstHeight3 << endl;
    cout << "Time taken to insert data_3 to BST =" << time_taken3 << " microseconds" << endl;

    //data_1 to RBTree
    count = 0;
    inFile.open("/home/akhitha/Advanced_Algo/Assignment1/code/data/data_1.txt");
    //time_t start4, end4;
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    //time(&start4);
    auto start4 = std::chrono::high_resolution_clock::now();
    while (inFile >> x) {
        count ++;
        rbt1.put(x, count);
    }
    inFile.close();
    rbtHeight1 = rbt1.height();
    auto elapsed4 = std::chrono::high_resolution_clock::now() - start4;

    long long time_taken4 = std::chrono::duration_cast<std::chrono::microseconds>(elapsed4).count();
    cout << "RBT Height for data_1 = " << rbtHeight1 << endl;
    cout << "Time taken to insert data_1 to RBT =" << time_taken4 <<" microseconds" << endl;

    //data_2 to RBTree
    count = 0;
    inFile.open("/home/akhitha/Advanced_Algo/Assignment1/code/data/data_2.txt");
    //time_t start5, end5;
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    //time(&start5);
    auto start5 = std::chrono::high_resolution_clock::now();
    while (inFile >> x) {
        count ++;
        rbt2.put(x, count);
    }
    inFile.close();
    rbtHeight2 = rbt2.height();
    auto elapsed5 = std::chrono::high_resolution_clock::now() - start5;

    long long time_taken5 = std::chrono::duration_cast<std::chrono::microseconds>(elapsed5).count();
    cout << "RBT Height for data_2 = " << rbtHeight2 << endl;
    cout << "Time taken to insert data_2 to RBT =" << time_taken5 << " microseconds" <<endl;

    //data_3 to RBTree
    count = 0;
    inFile.open("/home/akhitha/Advanced_Algo/Assignment1/code/data/data_3.txt");
    //time_t start6, end6;
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    //time(&start6);
    auto start6 = std::chrono::high_resolution_clock::now();
    while (inFile >> x) {
        count ++;
        rbt3.put(x, count);
    }
    inFile.close();
    rbtHeight3 = rbt3.height();
    auto elapsed6 = std::chrono::high_resolution_clock::now() - start6;

    long long time_taken6 = std::chrono::duration_cast<std::chrono::microseconds>(elapsed6).count();
    cout << "RBT Height for data_3 = " << rbtHeight3 << endl;
    cout << "Time taken to insert data_3 to RBT =" << time_taken6 <<" microseconds" <<endl;


    //data_1 for SPT
    count = 0;
    inFile.open("/home/akhitha/Advanced_Algo/Assignment1/code/data/data_1.txt");
    //time_t start7, end7;
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    //time(&start7);
    auto start7 = std::chrono::high_resolution_clock::now();
    while (inFile >> x) {
        count ++;
        spt1.put(x, count);
    }
    inFile.close();
    sptHeight1 = spt1.height();
    auto elapsed7 = std::chrono::high_resolution_clock::now() - start7;

    long long time_taken7 = std::chrono::duration_cast<std::chrono::microseconds>(elapsed7).count();
    cout << "SPT Height for data_1 = " << sptHeight1 << endl;
    cout << "Time taken to insert data_1 to SPT =" << time_taken7 <<" microseconds" <<endl;

    //data_2 for SPT
    count = 0;
    inFile.open("/home/akhitha/Advanced_Algo/Assignment1/code/data/data_2.txt");
    //time_t start8, end8;
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    //time(&start8);
    auto start8 = std::chrono::high_resolution_clock::now();
    while (inFile >> x) {
        count ++;
        spt2.put(x, count);
    }
    inFile.close();
    sptHeight2 = spt2.height();
    auto elapsed8 = std::chrono::high_resolution_clock::now() - start8;

    long long time_taken8 = std::chrono::duration_cast<std::chrono::microseconds>(elapsed8).count();
    cout << "SPT Height for data_2 = " << sptHeight2 << endl;
    cout << "Time taken to insert data_2 to SPT =" << time_taken8 <<" microseconds" <<endl;

    //data_3 for SPT
    count = 0;
    inFile.open("/home/akhitha/Advanced_Algo/Assignment1/code/data/data_3.txt");
    //time_t start9, end9;
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    //time(&start9);
    auto start9 = std::chrono::high_resolution_clock::now();
    while (inFile >> x) {
        count ++;
        spt3.put(x, count);
    }
    inFile.close();
    sptHeight3 = spt3.height();
    auto elapsed9 = std::chrono::high_resolution_clock::now() - start9;

    long long time_taken9 = std::chrono::duration_cast<std::chrono::microseconds>(elapsed9).count();
    cout << "SPT Height for data_3 = " << sptHeight3 << endl;
    cout << "Time taken to insert data_3 to SPT =" << time_taken9 <<" microseconds \n" <<endl;

    cout << "Search Operations " << endl;
    cout << "---------------------------------------" <<endl;


    //Search for BST1

    inFile.open("/home/akhitha/Advanced_Algo/Assignment1/code/data/search_data.txt");
    //time_t start10, end10;
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    //time(&start10);
    auto start10 = std::chrono::high_resolution_clock::now();
    while (inFile >> x) {
//        count ++;
        bst1.contains(x);
    }
    inFile.close();
    bstHeight1 = bst1.height();
    auto elapsed10 = std::chrono::high_resolution_clock::now() - start10;

    long long time_taken10 = std::chrono::duration_cast<std::chrono::microseconds>(elapsed10).count();
    cout << "BST Height for data_1 after search = " << bstHeight1 << endl;
    cout << "Time taken to search in BST data_1 =" << time_taken10 <<" microseconds" << endl;

    //Search for BST2

    inFile.open("/home/akhitha/Advanced_Algo/Assignment1/code/data/search_data.txt");
    //time_t start11, end11;
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    //time(&start11);
    auto start11 = std::chrono::high_resolution_clock::now();
    while (inFile >> x) {
        bst2.contains(x);
    }
    inFile.close();
    bstHeight2 = bst2.height();
    auto elapsed11 = std::chrono::high_resolution_clock::now() - start11;

    long long time_taken11 = std::chrono::duration_cast<std::chrono::microseconds>(elapsed11).count();
    cout << "BST Height for data_2 after search = " << bstHeight2 << endl;
    cout << "Time taken to search in BST data_2 =" << time_taken11 <<" microseconds" << endl;

    //Search for BST3

    inFile.open("/home/akhitha/Advanced_Algo/Assignment1/code/data/search_data.txt");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    auto start12 = std::chrono::high_resolution_clock::now();
    while (inFile >> x) {
        bst3.contains(x);
    }
    inFile.close();
    bstHeight3 = bst3.height();
    auto elapsed12 = std::chrono::high_resolution_clock::now() - start12;

    long long time_taken12 = std::chrono::duration_cast<std::chrono::microseconds>(elapsed12).count();
    cout << "BST Height for data_3 after search = " << bstHeight3 << endl;
    cout << "Time taken to search in BST data_3 =" << time_taken12 <<" microseconds" << endl;

    //Search for RBT1
    inFile.open("/home/akhitha/Advanced_Algo/Assignment1/code/data/search_data.txt");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    auto start13 = std::chrono::high_resolution_clock::now();
    while (inFile >> x) {
        rbt1.contains(x);
    }
    inFile.close();
    rbtHeight1 = rbt1.height();
    auto elapsed13 = std::chrono::high_resolution_clock::now() - start13;

    long long time_taken13 = std::chrono::duration_cast<std::chrono::microseconds>(elapsed13).count();
    cout << "RBT Height for data_1 after search = " << rbtHeight1 << endl;
    cout << "Time taken to search in RBT data_1 =" << time_taken13 <<" microseconds" << endl;

    //Search for RBT2
    inFile.open("/home/akhitha/Advanced_Algo/Assignment1/code/data/search_data.txt");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    auto start14 = std::chrono::high_resolution_clock::now();
    while (inFile >> x) {
        rbt2.contains(x);
    }
    inFile.close();
    rbtHeight2 = rbt2.height();
    auto elapsed14 = std::chrono::high_resolution_clock::now() - start14;

    long long time_taken14 = std::chrono::duration_cast<std::chrono::microseconds>(elapsed14).count();
    cout << "RBT Height for data_2 after search = " << rbtHeight2 << endl;
    cout << "Time taken to search in RBT data_2 =" << time_taken14 <<" microseconds" << endl;

    //Search for RBT3
    inFile.open("/home/akhitha/Advanced_Algo/Assignment1/code/data/search_data.txt");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    auto start15 = std::chrono::high_resolution_clock::now();
    while (inFile >> x) {
        rbt3.contains(x);
    }
    inFile.close();
    rbtHeight3 = rbt3.height();
    auto elapsed15 = std::chrono::high_resolution_clock::now() - start15;

    long long time_taken15 = std::chrono::duration_cast<std::chrono::microseconds>(elapsed15).count();
    cout << "RBT Height for data_3 after search = " << rbtHeight3 << endl;
    cout << "Time taken to search in RBT data_3 =" << time_taken15 <<" microseconds" << endl;

    //Search for SPT1
    inFile.open("/home/akhitha/Advanced_Algo/Assignment1/code/data/search_data.txt");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    auto start16 = std::chrono::high_resolution_clock::now();
    while (inFile >> x) {
        spt1.contains(x);
    }
    inFile.close();
    sptHeight1 = spt1.height();
    auto elapsed16 = std::chrono::high_resolution_clock::now() - start16;

    long long time_taken16 = std::chrono::duration_cast<std::chrono::microseconds>(elapsed16).count();
    cout << "SPT Height for data_1 after search = " << sptHeight1 << endl;
    cout << "Time taken to search in SPT data_1 =" << time_taken16 <<" microseconds" << endl;

    //Search for SPT2
    inFile.open("/home/akhitha/Advanced_Algo/Assignment1/code/data/search_data.txt");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    auto start17 = std::chrono::high_resolution_clock::now();
    while (inFile >> x) {
        spt2.contains(x);
    }
    inFile.close();
    sptHeight2 = spt2.height();
    auto elapsed17 = std::chrono::high_resolution_clock::now() - start17;

    long long time_taken17 = std::chrono::duration_cast<std::chrono::microseconds>(elapsed17).count();
    cout << "SPT Height for data_2 after search = " << sptHeight2 << endl;
    cout << "Time taken to search in SPT data_2 =" << time_taken17 <<" microseconds" << endl;


    //Search for SPT3
    inFile.open("/home/akhitha/Advanced_Algo/Assignment1/code/data/search_data.txt");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    auto start18 = std::chrono::high_resolution_clock::now();
    while (inFile >> x) {
        spt3.contains(x);
    }
    inFile.close();
    sptHeight3 = spt3.height();
    auto elapsed18 = std::chrono::high_resolution_clock::now() - start18;

    long long time_taken18 = std::chrono::duration_cast<std::chrono::microseconds>(elapsed18).count();
    cout << "SPT Height for data_3 after search = " << sptHeight3 << endl;
    cout << "Time taken to search in SPT data_3 =" << time_taken18 <<" microseconds" << endl;
    return 0;
}