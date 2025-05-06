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
            return;
        }

        Node *previos = START;
        Node *current = START;

        while ((current != NULL) &&(nim >= current->noMhs))
        {
            if (nim == current->noMhs)
            {
                cout << "\nDuplikasi noMhs tidak diijinkan\n";
                return;
            }
            previos = current;
            current = current->next;
        }

        nodeBaru->next = current;
        previos->next = nodeBaru;
        
    }
    bool listEmpaty()
    {
        return (START == NULL);
    }

    bool search(int nim, Node **previos, Node **current)
    {
        *previos = START;
        *current = START;

        while ((*current != NULL) && (nim != (*current)->noMhs))
        {
            *previos = *current;
            *current = (*current)->next;
        }

        return (*current != NULL);
    }

    bool delNode(int nim)
    {
        Node *current, *previos;
        if (!search(nim, &previos, &current))
        {
            cout << "\nNoMhs tidak ditemukan\n";
            return false;

        if (current == START)
            START = START->next;
        else
            previos->next = current->next;

        delete current;
        return true;
        }
    }

    void travers()
    {
        if (listEmpaty())
        {
            cout << "\n list Kosong\n";
        }
        else
        {
            cout << "\nData di dalam list adalah:\n";
            Node *currentNode = START;
            while (currentNode != NULL)
            {
                cout << currentNode->noMhs << endl;
                currentNode = currentNode->next;
            }
            cout << endl;
        }
    }
};