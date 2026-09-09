#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

struct DLSSOptions {
public:
    // DLSSOptions inner types define
    enum class Mode : int {
        DLSS     = 0,
        Fallback = 1,
        Off      = 2,
        Count    = 3,
    };

    enum class Scaling : int {
        Performance      = 0,
        Balanced         = 1,
        Quality          = 2,
        UltraPerformance = 3,
        UltraQuality     = 4,
        Off              = 5,
        Count            = 6,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::bgfx::DLSSOptions::Mode>    mMode;
    ::ll::TypedStorage<4, 4, ::bgfx::DLSSOptions::Scaling> mQuality;
    ::ll::TypedStorage<4, 4, float>                        mSharpness;
    ::ll::TypedStorage<4, 4, float>                        mMipmapBias;
    // NOLINTEND
};

} // namespace bgfx
