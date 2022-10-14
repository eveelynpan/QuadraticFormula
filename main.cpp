/* Author: Evelyn Pan
 * Assignment Title:  Quadratic Formula
 * Assignment Description: This program inputs 'a, b, c'
 * values of quadratic formula from the user and uses
 * them to calculate the formula's roots.
 * Due Date: 2/4/22
 * Date Created: 2/3/22
 * Date Last Modified: 2/4/22
*/

/* Data Abstraction:
 * Output file stream is opened.
 * 3 vars: a, b, c, are initialized & used with their
 * counterparts in the formula.
 * Input:
 * This program reads input in the format of 'A, B, C'
 * from the user and assigns the integers to their
 * respective variables.
 // Process:
 * The discriminant is calculated, to check if roots will be real.
 * If the discriminant is neg, "NO REAL ROOTS" is printed to screen.
 * The roots are calculated, if they exist.
 // Output:
 * The roots are printed both to screen.
 * If the roots are identical, only one is printed.
 // Assumptions:
 * It is assumed that:
 * the user only wants to solve one formula at a time
 * the user only wants real solutions to the formula
 * having been prompted to do so, the user will correctly input data.
*/


#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
using namespace std;

int main(int argc, char **argv) {

    //Data Abstraction
    double a, b, c;
    double root1, root2, vertex1, vertex2;
    double disc;

    //Input
    cin >> a >> b >> c;

    //Process
    disc = ((b * b) - (4 * a * c));
    root1 = ((-1) * b - sqrt(disc)) / (2 * a);
    root2 = ((-1) * b + sqrt(disc)) / (2 * a);
    vertex1 = (-b) / (2 * a);
    vertex2 = a * vertex1 * vertex1 + b * vertex1 + c;
    
    

    //Output
    if (root1 == -0) {
        root1 = 0;
    }
    
    if (root2 == -0) {
        root2 = 0;
    }
    
    if (disc == -0) {
        disc = 0;
     }
    
    if (vertex1 == -0) {
        vertex1 = 0;
    }
    
    if (vertex2 == -0) {
        vertex2 = 0;
    }
    
    if (disc < 0) {
        cout << "NO REAL ROOTS" << " " << "(" << setprecision(2)
        << fixed << vertex1 << ", " << vertex2 << ")" << endl;
     }
    
    else if (root1 == root2) {
        cout << setprecision(2) << fixed << root2 << " " << "("
        << vertex1 << ", " << vertex2  << ")" << endl;
     }
    
    else {
        cout << setprecision(2) << fixed << root1 << " " << root2
        << " " << "(" << vertex1 << ", " << vertex2 << ")" << endl;
    }
    
    return 0;
 }
