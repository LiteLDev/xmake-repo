#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/world/level/levelgen/feature/feature_loading/FeatureVersion.h"

class FeatureTypeVersion {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>    mFormatVersion;
    ::ll::TypedStorage<1, 1, bool> mIsInternal;
    // NOLINTEND

public:
    // prevent constructor by default
    FeatureTypeVersion(FeatureTypeVersion const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FeatureTypeVersion(::FeatureLoading::FeatureVersion, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::FeatureLoading::FeatureVersion, bool);
    // NOLINTEND
};
