#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
#include "mc/world/level/block/traits/block_trait/ITrait.h"

namespace BlockTrait {

class Connection : public ::BlockTrait::ITrait {
public:
    // Connection inner types declare
    // clang-format off
    struct EnabledConnectionStatesContainer;
    // clang-format on

    // Connection inner types define
    enum class Type : int {
        Standard = 0,
    };

    enum class EnabledConnectionStates : int {
        Cardinal = 0,
        _Count   = 1,
    };

    struct EnabledConnectionStatesContainer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mStates;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                        mUpdateFlags;
    ::ll::TypedStorage<4, 4, ::BlockTrait::Connection::Type>                             mType;
    ::ll::TypedStorage<1, 1, ::BlockTrait::Connection::EnabledConnectionStatesContainer> mEnabledConnectionStates;
    // NOLINTEND
};

} // namespace BlockTrait
