#include <iostream>
#include <string.h>
using namespace std;

class Node
{
public:
    int noMhs;
    Node *next;
};

class linkedlist
{
    Node *START;

public:
    linkedlist()
    {
        START + NULL;
    }

    void addNode()
    {
        int nim;
        cout << "\nMasukkan Nomor Mahasiswa: ";
        cin >> nim;

        Node *nodeBaru = new Node;
        nodeBaru->noMhs = nim;

        if (START == NULL || nim <= START->noMhs)
        {
            if ((START != NULL) && (nim ==START->noMhs))
            {
                cout << "\nDuplikasi nohs tidak diijinkan\n";
                return;
            }
            nodeBaru->next = START;
            START = nodeBaru;
        }
    }
}