#include <iostream>
#include <iterator>

#include "../include/google_search.h"


Result google_search_pair ( int *first, int *last, int sum){

  
 int *left = first;
 int *right = last-1;
 int index1;
 int index2; 

 while ( left < right ){
   if ( ((*left) + (*right)) == sum ){
      index1 = std::distance (first, left);
      index2 = std::distance (first, right);
      return Result { true , index1 , index2 };   
   }
   else if ( ((*left) + (*right)) < sum ){
      left++;
   }
   else if ( ((*left) + (*right)) > sum ){
      right--;
   }
 }   
  
   return Result{ false , -1, -1};

}
