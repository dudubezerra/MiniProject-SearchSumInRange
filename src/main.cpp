/*!
 * \file main.cpp
 * \authors José Eduardo Bezerra and Selan Rodrigues
 * \date February, 28th
 */

#include <iostream> 
#include <iterator> 

#include "../include/google_search.h"





int main(void)
{
    int A[]{ 1, 2, 3, 5, 7, 9, 12, 12, 18, 27, 31 };
    int sum;
   
    std::cout << "Please, enter the sum you want to found: ";
    std::cin >> sum;
    std::cout << std::endl;

    // Print out the array content.
    std::cout << "[ ";
    for( const auto& e : A )
        std::cout << e << " ";
    std::cout << "]\n";

    // Do the searching here.
    auto res = google_search_pair( std::begin(A), std::end(A), sum );

    // Check the result.
    if ( res.found == false )
    {
        std::cout << ">>> There is no pair in the array with sum = " << sum << std::endl;
    }
    else
    {
        std::cout << ">>> Found pair at indexes (" << res.first << ", " << res.second << ")\n";
        std::cout << "    Their values are, respectively, " << A[res.first] << ", " << A[res.second] << std::endl;
    }
 
    return 0;
}
