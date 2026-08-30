#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct DoubleSaplingArchetype {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mSingleSaplingTree;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mSingleSaplingTreeWithBeehive;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mQuadrupleSaplingTree;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
