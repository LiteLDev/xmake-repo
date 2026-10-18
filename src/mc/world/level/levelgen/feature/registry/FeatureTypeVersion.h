#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/world/level/levelgen/feature/feature_loading/FeatureVersion.h"

class FeatureTypeVersion {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>    mFormatVersion;
    ::ll::TypedStorage<1, 1, bool> mIsInternal;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::SemVersion> mFormatVersion;
    ::ll::TypedStorage<1, 1, bool>          mIsInternal;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    FeatureTypeVersion(FeatureTypeVersion const&);
#else // @header-generator platform
    FeatureTypeVersion();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI FeatureTypeVersion(::FeatureLoading::FeatureVersion, bool);
#else // @header-generator platform
    MCAPI FeatureTypeVersion(::FeatureLoading::FeatureVersion version, bool isInternal);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::FeatureLoading::FeatureVersion, bool);
#else // @header-generator platform
    MCAPI void* $ctor(::FeatureLoading::FeatureVersion version, bool isInternal);
#endif // @header-generator platform
    // NOLINTEND
};
