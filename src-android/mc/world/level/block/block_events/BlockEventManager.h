#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/block_events/EventType.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class IBlockEventExecutor; }
// clang-format on

namespace BlockEvents {

class BlockEventManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                            mFinalized;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<BlockEvents::IBlockEventExecutor>>> mEventExecutors;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<BlockEvents::IBlockEventExecutor> _createSpecializedExecutor(::BlockEvents::EventType) const;

    MCNAPI ::BlockEvents::IBlockEventExecutor* _tryGetExecutor(::BlockEvents::EventType) const;

    MCNAPI void finalize();

    MCNAPI bool hasExecutor(::BlockEvents::EventType) const;
    // NOLINTEND
};

} // namespace BlockEvents
