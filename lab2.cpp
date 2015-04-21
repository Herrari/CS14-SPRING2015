#include "lab2.h"
#include <forward_list>
using namespace std;

bool isPrime(int input) // Function to determine if a Number is Prime.
    { if(input == 1) return false;
    for (int i = 2; i < input; i++) 
        {int remainder_of_dividing_by_i;
        remainder_of_dividing_by_i = (input % i);
        
        if (remainder_of_dividing_by_i == 0) return false;
                
        }
    return true;
    }   
    
int primeCount( forward_list<int> lst ){
    
    static int counter = 0;
    if( lst.empty() ) { return 0; }// If lst is empty, then counter = 0.
    else
    {
        if ( isPrime( lst.front() ) ){ ++counter;}
}
    
    lst.pop_front();
    primeCount(lst); 
    
    return counter;
} // Function that returns number of Primes in a forward_list

int main(){
    

forward_list<int> List1;

List1.assign( {1,2,3,4,5,6,7,8,9,10,11,12} );

cout << primeCount(List1) << endl;


} // A main that tests the function primeCount.