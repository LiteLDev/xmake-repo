#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/BaseGameTestBatchRunner.h"

// auto generated forward declare list
// clang-format off
class Dimension;
namespace gametest { class BaseGameTestFunction; }
namespace gametest { class BaseGameTestInstance; }
namespace gametest { class GameTestBatch; }
namespace gametest { class GameTestTicker; }
namespace gametest { class IGameTestHelperProvider; }
namespace gametest { struct TestParameters; }
// clang-format on

class MinecraftGameTestBatchRunner : public ::gametest::BaseGameTestBatchRunner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Dimension&>                                       mDimension;
    ::ll::TypedStorage<8, 8, std::unique_ptr<gametest::IGameTestHelperProvider>> mGameTestHelperProvider;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftGameTestBatchRunner& operator=(MinecraftGameTestBatchRunner const&);
    MinecraftGameTestBatchRunner(MinecraftGameTestBatchRunner const&);
    MinecraftGameTestBatchRunner();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~MinecraftGameTestBatchRunner();

    virtual std::shared_ptr<gametest::BaseGameTestInstance> _createGameTestInstance(::gametest::BaseGameTestFunction&);

    virtual void _runTest(std::shared_ptr<gametest::BaseGameTestInstance>, ::gametest::GameTestTicker&);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::shared_ptr<gametest::BaseGameTestInstance> $_createGameTestInstance(::gametest::BaseGameTestFunction&);

    MCNAPI void $_runTest(std::shared_ptr<gametest::BaseGameTestInstance>, ::gametest::GameTestTicker&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
