#include <iostream>
#include <vector>
using namespace std;

vector<int> hailstone (int input) {
    //variables
    int counter = 0;
    std:vector<int> holder(2);
    //algorithm
    if ( 1 != input ) {
        do {
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
    //variables
    int input;
    int input2;
    int comparison;
    std:vector<int> holder(2);
    //io
    cout << "Enter the range you want to search: ";
    cin >> input;
    cin >> input2;
    //algorithm
    while (input < input2){
        input ++;
        holder = hailstone (input);
        if ( holder[0] < comparison ) {
            comparison = holder[0];
        }


    }

    cout<<holder[0]<<endl<<holder[1];
    return 0;

}


