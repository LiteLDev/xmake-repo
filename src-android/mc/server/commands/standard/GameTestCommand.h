#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ServerCommand.h"
#include "mc/util/Rotation.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class MinecraftGameTest;
namespace gametest { class IGameTestHelperProvider; }
namespace gametest { struct TestParameters; }
// clang-format on

class GameTestCommand : public ::ServerCommand {
public:
    // GameTestCommand inner types define
    enum class Mode : int {
        Unknown         = 0,
        ClearAll        = 1,
        Create          = 2,
        Run             = 3,
        RunThis         = 4,
        RunSet          = 5,
        RunSetUntilFail = 6,
        RunNearbyTests  = 7,
        ShowPosition    = 8,
        Stop            = 9,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>            mTestName;
    ::ll::TypedStorage<8, 24, std::string>            mTestTag;
    ::ll::TypedStorage<4, 4, int>                     mTestRotationSteps;
    ::ll::TypedStorage<4, 4, int>                     mRepeatCount;
    ::ll::TypedStorage<1, 1, bool>                    mStopOnFailure;
    ::ll::TypedStorage<4, 4, ::GameTestCommand::Mode> mMode;
    ::ll::TypedStorage<4, 4, int>                     mTestCreationWidth;
    ::ll::TypedStorage<4, 4, int>                     mTestCreationHeight;
    ::ll::TypedStorage<4, 4, int>                     mTestCreationDepth;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GameTestCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void
    _handleRunSet(::MinecraftGameTest&, ::BlockSource&, ::CommandOrigin const&, ::CommandOutput&, bool) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void addGameTestNameEnums(::MinecraftGameTest&, ::CommandRegistry&);

    MCNAPI static void setup(::CommandRegistry&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
