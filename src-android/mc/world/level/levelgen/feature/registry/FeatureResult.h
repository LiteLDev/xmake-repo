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
    ::ll::TypedStorage<8, 24, std::string> mFeatureName;
    ::ll::TypedStorage<8, 8, ::IFeature*>  mFeature;
    // NOLINTEND

public:
    // prevent constructor by default
    FeatureResult();
};
