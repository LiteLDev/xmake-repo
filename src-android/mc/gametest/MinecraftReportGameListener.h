#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/IGameTestListener.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockSource;
class MinecraftGameTestInstance;
class Vec3;
namespace gametest { class BaseGameTestInstance; }
namespace gametest { class GameTestTicker; }
namespace gametest { struct GameTestError; }
// clang-format on

class MinecraftReportGameListener : public ::gametest::IGameTestListener,
                                    public ::std::enable_shared_from_this<MinecraftReportGameListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::MinecraftGameTestInstance&> mOriginalTestInstance;
    ::ll::TypedStorage<8, 8, ::gametest::GameTestTicker&>  mTestTicker;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftReportGameListener& operator=(MinecraftReportGameListener const&);
    MinecraftReportGameListener(MinecraftReportGameListener const&);
    MinecraftReportGameListener();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftReportGameListener();

    virtual void onTestStructureLoaded(::gametest::BaseGameTestInstance&);

    virtual void onTestPassed(::gametest::BaseGameTestInstance&);

    virtual void onTestFailed(::gametest::BaseGameTestInstance&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _reportFailure(::gametest::GameTestError const&, ::BlockSource&);

    MCNAPI void _say(std::string const&, std::string const&);

    MCNAPI void _spawnBeacon(::Block const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onTestStructureLoaded(::gametest::BaseGameTestInstance&);

    MCNAPI void $onTestPassed(::gametest::BaseGameTestInstance&);

    MCNAPI void $onTestFailed(::gametest::BaseGameTestInstance&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
