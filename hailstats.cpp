#include <iostream>
#include <vector>
using namespace std;

vector<int> hailstone (int input) {

    //  variables

    int counter = 0;

    //   in hindsight using vectors was unnecessary but i wanted to learn how to use them

    vector<int> holder(2);

    //  algorithm

    if ( 1 != input ) {
        do {

            //  hailstone algorithm

            input = input % 2 == 0 ? input / 2 : ( input * 3 ) + 1;
            counter ++;
        }
        while ( 1 != input );
    }
    else {
    }
    holder[ 0 ] = { counter };
    holder[ 1 ] = { input };

    return holder;
}

int main () {

    //  variables

    int input;
    int input2;
    int input_for_min;
    int input_for_max;
    int comparison;
    int max_val = 0;
    int min_val = 0;
    std:vector<int> holder(2);

    //  io

    cout << "Enter the range you want to search: ";
    cin >> input;

    // giving each algorithm a separate input value; algorithms change the value as they run

    input_for_min = input;
    input_for_max = input;
    cin >> input2;
    if(input2 < input){
        cout<<("Invalid range");

        return 0;
    }

    //  algorithm

    comparison = 1000;



    while (input_for_min <= input2){

        //  calling function hailstone

        holder = hailstone (input_for_min);

        //  if statement sets final answer to new value if lower length is found

        if ( holder[0] < comparison ) {
            comparison = holder[0];
            min_val = input_for_min;

            //  increment

        }input_for_min++;
    }

    //io

    cout<<("\nMinimum length: ")<<comparison<<("\nAchieved by: ")<<min_val;



    comparison = 0;
    while (input_for_max <= input2){

        //  calling function hailstone

        holder = hailstone (input_for_max);

        // if statement sets final answer to new value if higher length is found

        if ( holder[0] > comparison ) {
            comparison = holder[0];
            max_val = input_for_max;

            //  increment

        }input_for_max++;
    }

    //io

    cout<<("\nMaximum length: ")<<comparison<<("\nAchieved by: ")<<max_val;



    return 0;

}


