#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/registry/FeatureRegistry.h"

struct FeatureRegistryPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mFeaturesData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~FeatureRegistryPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::FeatureRegistry::FeatureBinaryJsonFormat>> mFeaturesData;
#endif // @header-generator platform
    // NOLINTEND
};
