#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/ecs/EntityNetId.h"

class NetworkComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::EntityNetId> mEntityNetId;
    // NOLINTEND
};
#else // @header-generator platform
class NetworkComponent {};
#endif // @header-generator platform
