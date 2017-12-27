//
//  main.cpp
//  writingFunction
//
//  Created by Xiaohong Chen on 12/25/17.
//  Copyright © 2017 Xiaohong Chen. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
using namespace  std;
// Compute an approximation of
// the square root of x
/*
double square_root(double x) {
    double diff;
    // Compute a provisional square root
    double root = 1.0;
    do { // Loop until the provisional root
        // is close enough to the actual root
        root = (root + x/root) / 2.0;
        //std::cout << "root is " << root << '\n';
        // How bad is the approximation?
        diff = root * root - x;
    } while (diff > 0.0001 || diff < -0.0001);
    return root;
}
int main() {
    // Compare the two ways of computing the square root
    for (double d = 1.0; d <= 10.0; d += 0.5)
        std::cout << std::setw(7) << square_root(d) << " : " << sqrt(d) << '\n';
 
 
 */

//simplefunction.cpp
/*
//void prompt
void prompt(){
    cout << "plase enter two interger: " << endl;
    
}
//int main function
int main(){
    cout << "Add two integers together" << endl;
    int a, b;
    prompt();
    cin >> a >> b;
    cout << "The sum of two integers are: " << a+b << endl;
}
*/

/*
//countto10func.cpp
//void count_to_10 function
void count_to_10(){
    for(int i = 1; i <= 10; i++ ){
        cout << i << endl;
    }
}

//int main function
int main(){
    cout << "Please count to 10: " << endl;
    count_to_10();
    cout << "Please count to 10 again: " << endl;
    count_to_10();
    
}
*/

/*
//countton.cpp
//void count_to_n function
void count_to_n(int n){
    for (int i = 1; i <= n; i++){
        cout << i << endl;
        
    }
}

//int main function
int main(){
    cout << "Please count to 10: " << endl;
    count_to_n(10);
    cout << "Please count to 15: " << endl;
    count_to_n(15);
}
*/

/*
//betterprompt
//int prompt function
int prompt(int n){
    int result;
    cout << "Please enter integer " << n << ":" << endl;
    cin >> result;
    return result;
}

//int main function
int main(){
    cout << "Add togeter two integers" << endl;
    int a, b;
    a = prompt(1);
    b = prompt(2);
    cout << "The sum is: " << a+b << endl;
}
*/


/*
//gcdprog.cpp
//int main function
int main(){
    int num1, num2;
    cout << "Please enter two integers: " << endl;
    cin >> num1 >> num2;
    
    int min = (num1 < num2) ? num1 : num2;
    
    int largestfactor = 1;
    for (int i = 2; i <= min; i++){
        if (num1 % i == 0 && num2 % i == 0){
            largestfactor = i;
            cout << largestfactor << endl;
            
            
        }
        
    }
}

*/

/*

//greatest common factor function
int gcd(int num1, int num2){
    int min = (num1 < num2) ? num1 : num2;
    int largestfactor = 1;
    for (int i = 2; i <= min; i++)
        if (num1 % i == 0; num2 % i == 0)
            largestfactor = i;
    return largestfactor;
    
    
}

//int main function
int main(){
    cout << "Find greast common gactor form two integers" << endl;
    int largestfactor = gcd(6,8);
    cout << largestfactor;
}
*/


//A prime number is a positive integer that has exactly two positive integer factors, 1 and itself.
/*
 *  is_prime(n)
 *     Determines the primality of a given value
 *     n an integer to test for primality
 *     Returns true if n is prime; otherwise, returns false
 */


/*
bool is_prime(int n) {
    bool result = true;  // Provisionally, n is prime
    double r = n, root = sqrt(r);
    // Try all possible factors from 2 to the square
    // root of n
    for (int trial_factor = 2;
         result && trial_factor <= root; trial_factor++)
        result = (n % trial_factor != 0);
    return result;
}

 * main
 *     Tests for primality each integer from 2
 *     up to a value provided by the user.
 *     If an integer is prime, it prints it;
 *     otherwise, the number is not printed.
 
int main() {
    int max_value;
    std::cout << "Display primes up to what value? ";
    std::cin >> max_value;
    for (int value = 2; value <= max_value; value++)
        if (is_prime(value)) // See if value is prime
            std::cout << value <<  " "; // Display the prime number
    std::cout << '\n';  // Move cursor down to next line
}

*/


/*
*
*  help_screen
*     Displays information about how the program works
*     Accepts no parameters
*     Returns nothing
*/

/*
//void help_screen function
void help_screen(){
    std::cout << "Add:  Adds two numbers\n";
    std::cout << "      Example: a 2.5 8.0\n";
    std::cout << "Subtract:  Subtracts two numbers\n";
    std::cout << "      Example: s 10.5 8.0\n";
    std::cout << "Print:  Displays the result of the latest operation\n";
    std::cout << "      Example: p\n";
    std::cout << "Help:  Displays this help screen\n";
    std::cout << "      Example: h\n";
    std::cout << "Quit:  Exits the program\n";
    std::cout << "      Example: q\n";

}
//char menu function
char menu(){
    cout <<"=== A)dd S)ubtract P)rint H)elp Q)uit ===\n";
    char ch;
    cin >> ch;
    return ch;
}


//int main function
int main(){
    double result = 0.0, arg1, arg2;
    bool done = false;
    do {
        switch (menu()) {
            case 'A':
            case 'a':
                cin >> arg1 >> arg2;
                result = arg1 + arg2;
                cout << result << endl;
                break;
            case 'S':
            case 's':
                cin >> arg1 >> arg2;
                result = arg1 - arg2;
                cout << result << endl;
                break;
            case 'P':
            case 'p':
                cout << result << endl;
                break;
            case 'H':
            case 'h':
                help_screen();
                break;
            case 'Q':
            case 'q':
                done = true;
                cout << "Process ends" << endl;
                break;
        }
        
    }while(!done);
}

*/


/*
 *  get_int_range(first, last)
 *     Forces the user to enter an integer within a
 *     specified range
 *     first is either a minimum or maximum acceptable value
 *     last is the corresponding other end of the range,
 *     either a maximum or minimum *     value
 *     Returns an acceptable value from the user
 */
/*
int get_int_range(int first, int last){
    if (first > last){
        int temp = first;
        first = last;
        last = temp;
        
    }
    
    int in_value;
    cout << "Please enter a value between " << first << " and " << last << endl;
    
    bool bad_entry;
    
    do {
        cin >> in_value;
        bad_entry = (in_value < first || in_value > last);
        if (bad_entry){
            cout << "The input value is not inside the correct range." << endl;
            cout << "Please enter again a value between " << first << " and " << last << endl;
        }
        
    }
    while (bad_entry);
    return in_value;
}

//int main function
int main(){
    cout << get_int_range(10, 20) << endl;
    cout << get_int_range(30, 20) << endl;
    cout << "process ends" << endl;
}


*/


