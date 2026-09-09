#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/VersionRange.h"
#include "mc/world/level/levelgen/feature/feature_loading/FeatureVersion.h"

namespace FeatureLoading {

struct VersionInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56>                                mVersionRange;
    ::ll::TypedStorage<4, 4, ::FeatureLoading::FeatureVersion> mFeatureVersion;
    // NOLINTEND
};

} // namespace FeatureLoading
