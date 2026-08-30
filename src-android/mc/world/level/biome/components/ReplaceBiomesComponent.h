#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/BiomeReplacement.h"
#include "mc/world/level/biome/components/BiomeComponentBase.h"

struct ReplaceBiomesComponent : public ::BiomeComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<BiomeReplacement>> mBiomeReplacements;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ReplaceBiomesComponent();
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
