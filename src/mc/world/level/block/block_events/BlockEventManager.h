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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                                            mFinalized;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<BlockEvents::IBlockEventExecutor>>> mEventExecutors;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                                                  mFinalized;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::BlockEvents::IBlockEventExecutor>>> mEventExecutors;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<BlockEvents::IBlockEventExecutor> _createSpecializedExecutor(::BlockEvents::EventType) const;
#else // @header-generator platform
    MCAPI ::BlockEvents::IBlockEventExecutor* _tryGetExecutor(::BlockEvents::EventType type) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockEvents::IBlockEventExecutor* _tryGetExecutor(::BlockEvents::EventType) const;

    MCNAPI void finalize();

    MCNAPI bool hasExecutor(::BlockEvents::EventType) const;
#else // @header-generator platform
    MCAPI bool hasExecutor(::BlockEvents::EventType type) const;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace BlockEvents
