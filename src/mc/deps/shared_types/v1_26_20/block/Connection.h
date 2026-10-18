#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct Connection {
public:
    // Connection inner types define
    enum class EnabledState : uchar {
        CardinalConnections = 0,
#if defined(LL_PLAT_A) // @header-generator platform
        _Count              = 1,
#else // @header-generator platform
        Count               = 1,
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 1> mEnabledStates;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, ::Bedrock::EnumSet<::SharedTypes::v1_26_20::BlockDefinition::Connection::EnabledState, 1>>
        mEnabledStates;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
