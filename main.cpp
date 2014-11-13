#include <iostream>

#include "hdfs/DFSClient.h"

using namespace std;
using namespace libhadoop;

namespace hadoop {
    int loglevel = TRACE;
}

int loglevel = TRACE;

int main() {
    Configuration config;
    DFSClient *client = new DFSClient(config);

    return 0;
}