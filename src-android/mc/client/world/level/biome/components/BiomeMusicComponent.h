#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/components/BiomeComponentBase.h"

struct BiomeMusicComponent : public ::BiomeComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, std::optional<float>>        mVolumeMultiplier;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mMusicDefinition;
    ::ll::TypedStorage<1, 1, bool>                        mUnderwaterMusic;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BiomeMusicComponent();
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
