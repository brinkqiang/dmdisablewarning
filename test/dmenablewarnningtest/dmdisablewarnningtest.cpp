
#include "dmdisablewarnning.h"

#include "dmstrtk.hpp"
#include "dmlog.hpp"

int main( int argc, char* argv[] ) {

    std::vector<int> vecData;
    strtk::parse( "1,2,3,4,5,6,7,8,9", ",", vecData );



    return 0;
}
