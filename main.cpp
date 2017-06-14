

#include <iostream>

#include "node_modules/cpp_common/src/strtools.hpp"
#include "node_modules/ddcppuserlib/src/dummy.hpp"

using namespace std;

int main(int argc, char *argv[]) {
    cout << dd::i_will_break_you("foo", 1, 2) << endl;
    dummy_lib_func();
    return 0;
}
