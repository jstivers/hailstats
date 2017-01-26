#include <iostream>
#include <vector>
using namespace std;

vector hailstone (int input);

vector hailstone (int input) {
    //variables
    int counter = 0;
    vector<int> holder(2);
    //io
    cin >> input;
    //algorithm
    if ( 1 != input ) {
        do {
            input = input % 2 == 0 ? input / 2 : ( input * 3 ) + 1;
            counter ++;
        }
        while ( input != 1 );
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
    vector<int> holder(2);
    //io
    cout << ( "Enter the range you want to search: " );
    cin >> input;
    cin >> input2;
    //algorithm
    for (
            input < input2 ; input ++ ;
            ) {
        holder = hailstone (input);
        if ( holder < comparison ) {
            comparison = holder[0];
        }
        cout<<holder[0]<<endl<<holder[1];

    }


    return 0;
}


