#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/Core__CloudContainerState.h"
#include "mc/Core__LocalContainerState.h"

namespace Core {

struct ContainerSyncState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Core::CloudContainerState> cloudState;
    ::ll::TypedStorage<4, 4, ::Core::LocalContainerState> localState;
    // NOLINTEND
};

} // namespace Core
