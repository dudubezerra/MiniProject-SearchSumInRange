#ifndef GOOGLE_SEARCH
#define GOOGLE_SEARCH

/*!
   Struct that contains the answer of the search function
*/
struct Result {
    bool found; /*!< Has found the pair. */
    int first; /*!< First element of the pair that corresponds to the requested sum. */
    int second; /*!< Secon element of the pair (see above). */
};


/*!
 *@brief Search pair for a sum function 
 *@param *first Adress of the first element in the range
 *@param *last Adress of memory just past the last element in the range 
 *@param sum Value to be compared with the pair in the range
 *@return A struct with a boolean, the index of the first element of the pair, and the index of the second element.

 */

Result google_search_pair ( int *first, int *last, int sum);







#endif
