#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/components/BiomeComponentBase.h"
#include "mc/world/level/biome/components/vanilla/VanillaBiomeTypes.h"

struct VanillaBiomeTypeAttributes : public ::BiomeComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::VanillaBiomeTypes> mBiomeType;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VanillaBiomeTypeAttributes();
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
#else // @header-generator platform
#endif // @header-generator platform
};
