#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

enum class LocalContainerState : uint {
    Unknown         = 0,
    LocalSynced     = 1,
    LocalOutOfDate  = 2,
    LocalOnly       = 3,
    LocalExempt     = 4,
    LocalOnboarding = 5,
};

}
