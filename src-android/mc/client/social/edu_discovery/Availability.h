#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EDUDiscovery {

enum class Availability : uchar {
    Invalid        = 0,
    Available      = 1,
    BadCredentials = 2,
    NotAvailable   = 3,
};

}
