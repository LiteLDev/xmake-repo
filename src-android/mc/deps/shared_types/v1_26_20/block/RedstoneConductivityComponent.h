#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct RedstoneConductivityComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mRedstoneConductor;
    ::ll::TypedStorage<1, 1, bool> mAllowsWireToStepDown;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
