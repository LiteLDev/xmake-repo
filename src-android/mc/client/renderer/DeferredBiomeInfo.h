#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/BiomeInfoParameters.h"
#include "mc/world/level/biome/BiomeIdType.h"

struct DeferredBiomeInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2>                                           mId;
    ::ll::TypedStorage<8, 848, ::mce::framebuilder::BiomeInfoParameters> mParameters;
    // NOLINTEND

public:
    // prevent constructor by default
    DeferredBiomeInfo& operator=(DeferredBiomeInfo const&);
    DeferredBiomeInfo();
};
