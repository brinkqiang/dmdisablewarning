
#include "dmdisablewarnning_module.h"

int main( int argc, char* argv[] ) {

    Idmdisablewarnning* module = dmdisablewarnningGetModule();
    if (module)
    {
        module->Test();
        module->Release();
    }
    return 0;
}
