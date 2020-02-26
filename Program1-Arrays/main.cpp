//
//  main.cpp
//  Program1-Arrays
//
//  Created by Tavien Floyd on 2/10/20.
//  Copyright © 2020 Tavien Floyd. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <array>
using namespace std;
int num;
int size;
int arrayList[90]; 


int  IntializeArray(int arrayList[], int size)
{
    for(int i =0; i < size; i++)
    {
        cout<<"Enter value for array";
        cin>> arrayList[i];
        cout<< arrayList[i]<<endl;
    }
    return 0;
}
int FindLargest(int arrayList[], int size )
{
    int *max;
    max = max_element(arrayList, arrayList+ size);
    cout<< "\nMax: "<<*max;
    return 0;
}
int FindSmallest(int arrayList[],int size)
{
   int *min;
    min = min_element(arrayList, arrayList + size);
    cout<<"\nMin: "<<*min;
    return 0;
}
int PrintList(int arrayList[], int size)
{
    cout<<"Printing list: "<<endl;
    for (int i =0;i < size; i++)
    {
        cout<<"Element "<<i<<": "<<arrayList[i]<<endl;
    }
    return 0;
}

int main(int argc, const char * argv[]) {
    cout<<"How many integers do you want in the array \n";
    cin>>size;
    arrayList[size];
    IntializeArray(arrayList, size);
    PrintList(arrayList, size);
    FindLargest(arrayList, size);
    FindSmallest(arrayList, size);
    
    return 0;
}
