#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
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

    using SendStartBreakingFunction = std::function<void(Player&, const BlockPos&, const Block&, uchar)>;

    using SendCancelBreakingFunction = std::function<void(Player&, const BlockPos&, const Block&, uchar, int)>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 48> mPlayerBreakingBlock;
    ::ll::TypedStorage<8, 48, std::function<void (Player&, const BlockPos&, const Block&, uchar)>> mSendStartBreakingFunction;
    ::ll::TypedStorage<8, 48, std::function<void (Player&, const BlockPos&, const Block&, uchar, int)>> mSendCancelBreakingFunction;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockBreakingEventListener();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptBlockBreakingEventListener(
        std::function<void(Player&, const BlockPos&, const Block&, uchar)>,
        std::function<void(Player&, const BlockPos&, const Block&, uchar, int)>
    );

    MCNAPI void _flushPlayerBreaking(::Player&, int const);

    MCNAPI void _startBreakingBlock(::Player&, ::BlockPos const&, ::Block const&, uchar const, int const);

    MCNAPI void onBlockBreakingContinued(::Player&, ::BlockPos const&, ::Block const&, uchar const, int const);

    MCNAPI void onBlockBreakingStarted(::Player&, ::BlockPos const&, ::Block const&, uchar const, int const);

    MCNAPI void onBlockBreakingStopped(::Player&, int const);

    MCNAPI void onBreakBlock(::Player&);

    MCNAPI ~ScriptBlockBreakingEventListener();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::function<void(Player&, const BlockPos&, const Block&, uchar)>,
        std::function<void(Player&, const BlockPos&, const Block&, uchar, int)>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
