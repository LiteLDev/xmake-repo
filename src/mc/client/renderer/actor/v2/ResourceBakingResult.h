#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/actor/v2/BakedResourceExtendedOffsets.h"
#include "mc/client/renderer/actor/v2/BakedResourceOffsets.h"
#include "mc/client/renderer/actor/v2/TextureResourceSpan.h"

struct ResourceBakingResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<uint>>             mFoundGeometries;
    ::ll::TypedStorage<4, 16, ::BakedResourceOffsets>        mResources;
    ::ll::TypedStorage<4, 8, ::BakedResourceExtendedOffsets> mExtendedResources;
    ::ll::TypedStorage<4, 8, ::TextureResourceSpan>          mTextureResources;
    ::ll::TypedStorage<4, 4, uint>                           mExpressionCount;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/actor/v2/BakedResourceExtendedOffsets.h"
#include "mc/client/renderer/actor/v2/BakedResourceOffsets.h"
#include "mc/client/renderer/actor/v2/TextureResourceSpan.h"

struct ResourceBakingResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<uint>>           mFoundGeometries;
    ::ll::TypedStorage<4, 16, ::BakedResourceOffsets>        mResources;
    ::ll::TypedStorage<4, 8, ::BakedResourceExtendedOffsets> mExtendedResources;
    ::ll::TypedStorage<4, 8, ::TextureResourceSpan>          mTextureResources;
    ::ll::TypedStorage<4, 4, uint>                           mExpressionCount;
    // NOLINTEND
};
#else // @header-generator platform
struct ResourceBakingResult {};
#endif // @header-generator platform
#endif // @header-generator platform
