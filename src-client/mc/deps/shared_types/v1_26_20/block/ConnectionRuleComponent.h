#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
#include "mc/deps/shared_types/v1_26_20/block/ConnectionID.h"
#include "mc/deps/shared_types/v1_26_20/block/ConnectionType.h"
#include "mc/deps/shared_types/v1_26_20/block/Direction.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct ConnectionRuleComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_20::ConnectionType>        mConnectionsFrom;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_26_20::Direction>> mEnabledDirections;
    ::ll::UntypedStorage<1, 1>                                               mConnectionsFromMask;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
