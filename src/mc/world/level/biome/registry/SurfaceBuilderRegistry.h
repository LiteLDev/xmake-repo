#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/SurfaceBuilderType.h"

// auto generated forward declare list
// clang-format off
class ISurfaceBuilder;
// clang-format on

class SurfaceBuilderRegistry {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::map<SurfaceBuilderType, std::unique_ptr<ISurfaceBuilder>>> mSurfaceBuilders;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::map<::SurfaceBuilderType, ::std::unique_ptr<::ISurfaceBuilder>>> mSurfaceBuilders;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void forEachSurfaceBuilder(std::function<bool(ISurfaceBuilder&)>) const;
#else // @header-generator platform
    MCAPI void forEachSurfaceBuilder(::std::function<bool(::ISurfaceBuilder&)> callback) const;
#endif // @header-generator platform
    // NOLINTEND
};
