#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace FeatureHelper {

enum class PlaceFeatureResult : int {
    Success                 = 0,
    Failure_InvalidPosition = 1,
    Failure_ChunkNotLoaded  = 2,
};

}
