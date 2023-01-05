#ifndef CSLL_H_INCLUDED
#define CSLL_H_INCLUDED
#include <iostream>
#define info(P) (P)->info
#define next(P) (P)->next
#define first(P) ((P).first)
#define nil NULL

using namespace std;

typedef struct lagu infotype;
typedef struct element *adr;

struct lagu {
    string artis;
    string judul;
    string genre;
    int playtime;
};

struct element {
    infotype info;
    adr next;
};

struct listLagu {
    adr first;
};

void createList_1301200475(listLagu &R);
void createElement_1301200475(infotype laguBaru, adr &p);
void insertFirst_1301200475(listLagu &R, adr p);
void deleteLast_1301200475(listLagu &R, adr &p);
void showSemuaLagu_1301200475(listLagu R);


#endif // CSLL_H_INCLUDED
