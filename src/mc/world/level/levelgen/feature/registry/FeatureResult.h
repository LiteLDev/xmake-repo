#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IFeature;
// clang-format on

struct FeatureResult {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mFeatureName;
    ::ll::TypedStorage<8, 8, ::IFeature*>  mFeature;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mFeatureName;
    ::ll::TypedStorage<8, 8, ::IFeature*>    mFeature;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    FeatureResult();
#else // @header-generator platform
#endif // @header-generator platform
};
