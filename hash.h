//
//  hash.h
//  LAB 9
//
//  Created by jana hegazy on 12/05/2023.
//

#ifndef hash_h
#define hash_h
#include <list>
using namespace std;

class hashTable
{
private:
    int size;
    list <int> *myList;
    
public:
    hashTable()
    {
        size=10;
        myList = new list <int> [size];
    }
    hashTable(int x)
    {
        size=x;
        myList = new list <int> [size];
    }
    int hash (int x)
    {
        return x % size;
    }
    void insertVal(int x)
    {
        int index = hash(x);
        myList[index].push_front(x);
    }
    void fillEmpty()
    {
        for(int i = 0; i<size; i++)
        {
            if(myList[i].empty())
                myList[i].push_front(-1);
        }
    }
    void printHash()
    {
        fillEmpty();
        for(int i = 0; i<size; i ++)
        {
            cout<< "Index "<<i<<": ";
            for(list<int>::iterator it = myList[i].begin(); it != myList[i].end(); it++)
            {
                if(it == myList[i].begin())
                    cout<<*it;
                else
                cout<<" to "<<*it;
            }
            cout<<endl;
        }
    }
};

#endif /* hash_h */
