#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer::modules {

enum class ExposureCompensationType : int {
    Constant     = 0,
    DefaultCurve = 1,
    CustomCurve  = 2,
};

}
