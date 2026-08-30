#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/SimpleResourceTracker.h"
#include "mc/external/render_dragon/resources/ResolvedImageResource.h"

namespace dragon {

class ImageResourceTracker : public ::mce::SimpleResourceTracker<dragon::ResolvedImageResource> {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void resetValidityChecks();
    // NOLINTEND
};

} // namespace dragon
