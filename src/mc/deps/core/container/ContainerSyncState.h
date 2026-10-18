#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/Core__CloudContainerState.h"
#include "mc/Core__LocalContainerState.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Core {

#if defined(LL_PLAT_A) // @header-generator platform
struct ContainerSyncState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Core::CloudContainerState> cloudState;
    ::ll::TypedStorage<4, 4, ::Core::LocalContainerState> localState;
    // NOLINTEND
};
#else // @header-generator platform
struct ContainerSyncState {};
#endif // @header-generator platform

} // namespace Core
