#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/BiomeBlendingSample.h"
#include "mc/deps/minecraft_renderer/framebuilder/BiomeInfoParameters.h"

namespace mce::framebuilder {

struct BiomeBlendingParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<mce::framebuilder::BiomeInfoParameters>> mBiomeInfo;
    ::ll::TypedStorage<4, 44, std::optional<BiomeBlendingSample>>                  mPlayerSampledBiomeBlend;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeBlendingParameters& operator=(BiomeBlendingParameters const&);
    BiomeBlendingParameters(BiomeBlendingParameters const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BiomeBlendingParameters();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce::framebuilder
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
