#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IDType.h"
#include "mc/util/TagRegistry.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
struct BiomeTagIDType;
struct BiomeTagSetIDType;
// clang-format on

#endif // @header-generator platform
class WellKnownTagID {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 16> mTagID;
    ::ll::UntypedStorage<8, 8>  mTagRegistry;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::IDType<::BiomeTagIDType>>                                               mTagID;
    ::ll::TypedStorage<8, 8, ::TagRegistry<::IDType<::BiomeTagIDType>, ::IDType<::BiomeTagSetIDType>>*> mTagRegistry;
#endif // @header-generator platform
    // NOLINTEND
};
