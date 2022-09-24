#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Write your Student class here
class student{
    private:
    int scores;
    int n;
    void input(){
        cin>>n;
        int e1[n],e2[n],e3[n],e4[n],e5[n];
        for(int i=0;i<n;i++){
            cin>>e1[i]>>e2[i]>>e3[i]>>e4[i]>>e5[i];
        }
    }
    int calculateTotalScore(){
        
        int score[n];
        for(int i=0;i<n;i++){
            score[i]=e1[i]
        }
    }
};

int main() {