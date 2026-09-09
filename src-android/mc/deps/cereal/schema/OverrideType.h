#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

enum class OverrideType : int {
    deprecated = 0,
    overridden = 1,
};

}
