#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Certificate {

enum class Encoding : int {
    PEM = 0,
    DER = 1,
    PFX = 2,
};

}
