#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer::modules {

struct TemperatureGrading {
public:
    // TemperatureGrading inner types define
    enum Type : uchar {
        WhiteBalance     = 0,
        ColorTemperature = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                       mEnable;
    ::ll::TypedStorage<4, 4, float>                                                      mTemperature;
    ::ll::TypedStorage<1, 1, ::dragon::framerenderer::modules::TemperatureGrading::Type> mType;
    // NOLINTEND
};

} // namespace dragon::framerenderer::modules
