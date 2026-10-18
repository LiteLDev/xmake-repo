#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/level/foliage_color_client/GrassPalette.h"
#include "mc/world/level/biome/components/BiomeComponentBase.h"

struct GrassPaletteAttributes : public ::BiomeComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::FoliageColorClient::GrassPalette> mPalette;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GrassPaletteAttributes();
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
    // NOLINTEND
};
#else // @header-generator platform
struct GrassPaletteAttributes {};
#endif // @header-generator platform
