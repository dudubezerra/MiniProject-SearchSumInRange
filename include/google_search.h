#ifndef GOOGLE_SEARCH
#define GOOGLE_SEARCH

// Contém a resposta da função de busca pelo par que corresponde a soma.
struct Result {
    bool found; //!< Has found the pair.
    int first; //!< First element of the pair that corresponds to the requested sum.
    int second; //!< Secon element of the pair (see above).
};

Result google_search_pair ( int *first, int *last, int sum);







#endif
