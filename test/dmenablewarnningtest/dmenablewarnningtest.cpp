
#include "dmdisablewarnning.h"

#include "dmstrtk.hpp"
#include "dmlog.hpp"

int main( int argc, char* argv[] ) {

    DMLOG_INIT();
    std::vector<int> vecData;
    strtk::parse( "1,2,3,4,5,6,7,8,9", ",", vecData );

    LOG_WARN("{}", strtk::join(",", vecData));

    return 0;
}
