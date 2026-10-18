#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct UIItemRenderInfo {
public:
    // UIItemRenderInfo inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum Flags : uchar {
        // bitfield representation
        Default          = 0,
        NeedsDepth       = 1 << 0,
        DoubleSidedAlpha = 1 << 1,
        SingleSidedAlpha = 1 << 2,
        Blend            = 1 << 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar> info;
    // NOLINTEND

public:
    // prevent constructor by default
    UIItemRenderInfo();
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class Flags : uchar {
        // bitfield representation
        Default          = 0,
        NeedsDepth       = 1 << 0,
        DoubleSidedAlpha = 1 << 1,
        SingleSidedAlpha = 1 << 2,
        Blend            = 1 << 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar> info;
    // NOLINTEND
#else // @header-generator platform
    enum class Flags : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform
};
