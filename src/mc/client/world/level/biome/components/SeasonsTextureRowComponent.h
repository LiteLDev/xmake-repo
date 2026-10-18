#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/biome/components/BiomeComponentBase.h"

struct SeasonsTextureRowComponent : public ::BiomeComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> mTextureRow;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SeasonsTextureRowComponent();
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
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/biome/components/BiomeComponentBase.h"

struct SeasonsTextureRowComponent : public ::BiomeComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> mTextureRow;
    // NOLINTEND
};
#else // @header-generator platform
struct SeasonsTextureRowComponent {};
#endif // @header-generator platform
#endif // @header-generator platform
