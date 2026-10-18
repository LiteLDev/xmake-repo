#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/components/BiomeComponentBase.h"
#include "mc/world/level/biome/components/SurfaceBuilderData.h"

struct TerrainBuilderComponent : public ::BiomeComponentBase {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, ::SurfaceBuilderData>              mSurfaceBuilderData;
    ::ll::TypedStorage<8, 40, std::optional<SurfaceBuilderData>> mSubsurfaceBuilderData;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TerrainBuilderComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::SurfaceBuilderData>                  mSurfaceBuilderData;
    ::ll::TypedStorage<8, 40, ::std::optional<::SurfaceBuilderData>> mSubsurfaceBuilderData;
#endif // @header-generator platform
    // NOLINTEND
};
