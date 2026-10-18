#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ServerCommand.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/util/Rotation.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
#else // @header-generator platform
#endif // @header-generator platform
class BlockSource;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class MinecraftGameTest;
#if defined(LL_PLAT_A) // @header-generator platform
namespace gametest { class IGameTestHelperProvider; }
namespace gametest { struct TestParameters; }
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>            mTestName;
    ::ll::TypedStorage<8, 24, std::string>            mTestTag;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>          mTestName;
    ::ll::TypedStorage<8, 32, ::std::string>          mTestTag;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~GameTestCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
#else // @header-generator platform
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    _handleRunSet(::MinecraftGameTest&, ::BlockSource&, ::CommandOrigin const&, ::CommandOutput&, bool) const;
#else // @header-generator platform
    MCAPI void _handleRunSet(
        ::MinecraftGameTest&   gameTest,
        ::BlockSource&         region,
        ::CommandOrigin const& origin,
        ::CommandOutput&       output,
        bool                   stopOtherTestsOnFailure
    ) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void addGameTestNameEnums(::MinecraftGameTest&, ::CommandRegistry&);
#else // @header-generator platform
    MCAPI static void addGameTestNameEnums(::MinecraftGameTest& gameTest, ::CommandRegistry& commandRegistry);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void setup(::CommandRegistry&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static void setup(::CommandRegistry& registry);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $execute(::CommandOrigin const& origin, ::CommandOutput& output) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
