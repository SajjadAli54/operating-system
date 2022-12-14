#include<iostream>
#include <ctime>
#include<cstdlib>
using namespace std;
class item
{
public:
    int data = 0;
    int burst = 0;
    clock_t arrivalTime = 0;

    item(){}

    item(int d, int b){
        data = d;
        burst = b;
        arrivalTime = clock();
    }

    double turn(){
        return 1000000 * ((double)terminate() - arrivalTime)/CLOCKS_PER_SEC;
    }

    int waite(){
        return turn() - burst;
    }

    clock_t terminate(){
        return clock();
    }
    
};

class queue
{
public:
    item q[5][10];
    int row = -1;
    int r = 0;
    int c = 0;

    item data[10];
    int top = -1;
    double wait = 0.0;
    double turn = 0.0;


    void add(int value, int burst){
        if(top < 9){
            item n(value, burst);
            data[++top] = n;
        }    
        else{
            push();
                top = -1;
        }
    }

    void push(){
        if(row == 4)
            return;
        row++;
        for(int i = 0; i< 10;i++)
            q[row][i] = data[i];
        top = 0;
        if(row == 4)
            row = -1;
    }

    int pop(){
        if(row != -1){
            int data =q[r][c].data;
            wait += q[r][c].waite();
            turn += q[r][c].turn();

            r = c == 9 ? r == 4 ? 0 : r + 1 : r;
            c = (c + 1) % 10;             
            return data;
        }
        return -1;
    }

    double avgWaitTime(){
        if( c != 0 || r != 0)
            return wait / (r * 10.0 + c);
        return wait / 50.0;
    }

    double avgTurnTime(){
        if( c != 0 || r != 0)
            return turn / (r * 10.0 + c);
        return turn / 50.0;
    }
};
int main(){
    queue q;
    time(NULL);
    for(int i = 1;i<=53;i++){
        int n = abs(rand() % 10) + 1;
        q.add(i,n);
    }
    
    for(int i = 1;i<=50;i++){
        q.pop();
        //printf("%d : %d\n",i,q.pop());
    }

    cout << q.avgWaitTime() << " micro sec wait time" << endl;
    cout << q.avgTurnTime() << " micro sec Turn time" << endl;
    return 0;

}