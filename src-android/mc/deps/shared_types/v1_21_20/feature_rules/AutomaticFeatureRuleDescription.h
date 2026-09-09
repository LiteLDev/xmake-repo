#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_20 {

struct AutomaticFeatureRuleDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mIdentifier;
    ::ll::TypedStorage<8, 24, std::string> mPlacesFeature;
    // NOLINTEND

public:
    // prevent constructor by default
    AutomaticFeatureRuleDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~AutomaticFeatureRuleDescription();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20
