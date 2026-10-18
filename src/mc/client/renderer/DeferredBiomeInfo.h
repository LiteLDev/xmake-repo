#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
struct DeferredBiomeInfo {};
#endif // @header-generator platform
