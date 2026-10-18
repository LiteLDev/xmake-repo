#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct Brightness;
struct SubChunkLightIndex;
// clang-format on
#else // @header-generator platform
// auto generated inclusion list
#include "mc/common/Brightness.h"
#include "mc/world/level/chunk/SubChunkLightIndex.h"
#endif // @header-generator platform

struct SubtractiveLightInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 8> mField_c1337107;
#else // @header-generator platform
    union {
        struct {
            ::ll::TypedStorage<4, 4, ::SubChunkLightIndex> mCoordIndex;
            ::ll::TypedStorage<1, 1, ::Brightness>         mOldBrightness;
        };
        ::ll::TypedStorage<8, 8, uint64> mData;
    };
#endif // @header-generator platform
    // NOLINTEND
};
