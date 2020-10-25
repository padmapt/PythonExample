//
//  main.cpp
//  Pascal Triangle
//
//  Created by Padma Tashi on 26/09/19.
//  Copyright © 2019 Padma Tashi. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> Arr;
    vector<int> v;
    int count=1;
    int A=3;
    for(int i=0;i<A;i++)
    {
//        Arr[i].assign(count,0);
        for(int j=0;j<=count;j++)
        {
            if(j==0 || j==count-1)
                v.push_back(1);
            else
                v.push_back(Arr[i-1][j-1]+Arr[i-1][j]);
        }
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
            
        }
        Arr.push_back(v);
        v.clear();
        count++;
    }
//    for(int i=0;i<A;i++)
//    {
//        for(int j=0;j<Arr[i].size();i++)
//            cout<<Arr[i][j];
//        cout<<endl;
//    }
}
