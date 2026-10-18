#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Block;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
#else // @header-generator platform
#endif // @header-generator platform
class Player;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockBreakingEventListener {
public:
    // ScriptBlockBreakingEventListener inner types declare
    // clang-format off
    struct PlayerBreakingBlockInfo;
    // clang-format on

    // ScriptBlockBreakingEventListener inner types define
    struct PlayerBreakingBlockInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::BlockPos> mBlockPos;
        ::ll::TypedStorage<1, 1, uchar>       mFace;
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using SendStartBreakingFunction = std::function<void(Player&, const BlockPos&, const Block&, uchar)>;
#else // @header-generator platform
    using SendCancelBreakingFunction = ::std::function<void(::Player&, ::BlockPos const&, ::Block const&, uchar, int)>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using SendCancelBreakingFunction = std::function<void(Player&, const BlockPos&, const Block&, uchar, int)>;
#else // @header-generator platform
    using SendStartBreakingFunction = ::std::function<void(::Player&, ::BlockPos const&, ::Block const&, uchar)>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::UntypedStorage<8, 48> mPlayerBreakingBlock;
    ::ll::TypedStorage<8, 48, std::function<void (Player&, const BlockPos&, const Block&, uchar)>> mSendStartBreakingFunction;
    ::ll::TypedStorage<8, 48, std::function<void (Player&, const BlockPos&, const Block&, uchar, int)>> mSendCancelBreakingFunction;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::ActorUniqueID,
            ::ScriptModuleMinecraft::ScriptBlockBreakingEventListener::PlayerBreakingBlockInfo>>
        mPlayerBreakingBlock;
    ::ll::TypedStorage<8, 64, ::std::function<void(::Player&, ::BlockPos const&, ::Block const&, uchar)>>
        mSendStartBreakingFunction;
    ::ll::TypedStorage<8, 64, ::std::function<void(::Player&, ::BlockPos const&, ::Block const&, uchar, int)>>
        mSendCancelBreakingFunction;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockBreakingEventListener();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptBlockBreakingEventListener(
        std::function<void(Player&, const BlockPos&, const Block&, uchar)>,
        std::function<void(Player&, const BlockPos&, const Block&, uchar, int)>
#else // @header-generator platform
    MCAPI ScriptBlockBreakingEventListener(
        ::std::function<void(::Player&, ::BlockPos const&, ::Block const&, uchar)>      sendStartBreakingFunction,
        ::std::function<void(::Player&, ::BlockPos const&, ::Block const&, uchar, int)> sendCancelBreakingFunction
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _flushPlayerBreaking(::Player&, int const);
#else // @header-generator platform
    MCAPI void _flushPlayerBreaking(::Player& player, int previousProgress);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _startBreakingBlock(::Player&, ::BlockPos const&, ::Block const&, uchar const, int const);
#else // @header-generator platform
    MCAPI void _startBreakingBlock(
        ::Player&         player,
        ::BlockPos const& blockPos,
        ::Block const&    hitBlock,
        uchar             face,
        int               previousProgress
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void onBlockBreakingContinued(::Player&, ::BlockPos const&, ::Block const&, uchar const, int const);
#else // @header-generator platform
    MCAPI void onBreakBlock(::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void onBlockBreakingStarted(::Player&, ::BlockPos const&, ::Block const&, uchar const, int const);

    MCNAPI void onBlockBreakingStopped(::Player&, int const);

    MCNAPI void onBreakBlock(::Player&);

    MCNAPI ~ScriptBlockBreakingEventListener();
#else // @header-generator platform
    MCAPI ~ScriptBlockBreakingEventListener();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        std::function<void(Player&, const BlockPos&, const Block&, uchar)>,
        std::function<void(Player&, const BlockPos&, const Block&, uchar, int)>
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::function<void(::Player&, ::BlockPos const&, ::Block const&, uchar)>      sendStartBreakingFunction,
        ::std::function<void(::Player&, ::BlockPos const&, ::Block const&, uchar, int)> sendCancelBreakingFunction
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
