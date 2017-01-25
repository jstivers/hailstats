#include <iostream>

using namespace std;

array hailstone (int input);

array hailstone (int input) {
    //variables
    int counter = 0;
    int foobar [2];
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
    foobar[ 0 ] = { counter };
    foobar[ 1 ] = { input };

    return foobar;
}

int main () {
    //variables
    int input;
    int input2;
    array holder[2];
    int comparison;
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
            comparison = holder;
        }

    }


    return 0;
}


