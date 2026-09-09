#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"
#include "mc/world/level/LevelListener.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Dimension;
class GameTestInstanceLedger;
class Level;
namespace gametest { class BaseGameTestFunction; }
namespace gametest { class BaseGameTestInstance; }
namespace gametest { class GameTestRegistry; }
namespace gametest { class GameTestTicker; }
namespace gametest { class IGameTestHelperProvider; }
namespace gametest { class IGameTestListener; }
namespace gametest { struct TestParameters; }
// clang-format on

class MinecraftGameTest : public ::LevelListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<gametest::GameTestRegistry>>        mRegistry;
    ::ll::TypedStorage<8, 8, std::unique_ptr<gametest::GameTestTicker>>          mTicker;
    ::ll::TypedStorage<8, 8, std::unique_ptr<gametest::IGameTestHelperProvider>> mHelperProvider;
    ::ll::TypedStorage<8, 16, std::shared_ptr<GameTestInstanceLedger>>           mGameTestLedger;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftGameTest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftGameTest();

    virtual void onLevelDestruction(std::string const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MinecraftGameTest(::Level&);

    MCNAPI void clearAllTests(::BlockSource&);

    MCNAPI ::gametest::GameTestRegistry& getRegistry();

    MCNAPI ::gametest::GameTestTicker& getTicker();

    MCNAPI void loadExistingTests(::Level&);

    MCNAPI void registerDefaultGameBatches(::Level&);

    MCNAPI std::string runTest(std::string const&, ::Dimension&, ::gametest::TestParameters const&);

    MCNAPI std::string runTest(
        std::string const&,
        ::Dimension&,
        ::gametest::TestParameters const&,
        std::vector<std::shared_ptr<gametest::IGameTestListener>>
    );

    MCNAPI std::string runTestAt(::BlockSource&, ::BlockPos const&, std::optional<Rotation>);

    MCNAPI std::vector<std::shared_ptr<gametest::BaseGameTestInstance>> const&
           runTests(::Dimension&, ::gametest::TestParameters&&);

    MCNAPI void stopAllTests();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Level&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onLevelDestruction(std::string const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
