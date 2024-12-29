
#include "dmdisablewarnning.h"

DISABLE_ALL_WARNINGS
#include "dmstrtk.hpp"
#include "dmutil.h"
#include "dmlog.hpp"
ENABLE_ALL_WARNINGS

int main( int argc, char* argv[] ) {

    std::vector<int> vecData;
    strtk::parse( "1,2,3,4,5,6,7,8,9", ",", vecData );



    return 0;
}
