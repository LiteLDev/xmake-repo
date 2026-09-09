#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

enum class CloudContainerState : uint {
    Unknown     = 0,
    CloudSynced = 1,
    CloudLocked = 2,
    CloudError  = 3,
};

}
