#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/BaseGamePackLoadRequirement.h"
#include "mc/resources/ExperimentLoadRequirement.h"
#include "mc/resources/LegacyCreatorFeaturesLoadRequirement.h"

// auto generated forward declare list
// clang-format off
struct PackLoadInfo;
// clang-format on

class PackLoadRequirement {
public:
    // PackLoadRequirement inner types define
    using PackLoadRequirements =
        std::variant<ExperimentLoadRequirement, LegacyCreatorFeaturesLoadRequirement, BaseGamePackLoadRequirement>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 8, std::variant<ExperimentLoadRequirement, LegacyCreatorFeaturesLoadRequirement, BaseGamePackLoadRequirement>> mRequirement;
    // clang-format on
    // NOLINTEND
};
