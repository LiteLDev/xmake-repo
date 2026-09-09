#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class GameTestClearTask;
namespace gametest { class BaseGameTestBatchRunner; }
namespace gametest { class BaseGameTestInstance; }
namespace gametest { class IGameTestListener; }
namespace gametest { class IGameTestRuleHelper; }
// clang-format on

namespace gametest {

class GameTestTicker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                              mTickCount;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<GameTestClearTask>>>                 mClearTasks;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<gametest::BaseGameTestInstance>>>    mActiveTests;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<gametest::BaseGameTestBatchRunner>>> mGameTestBatchRunners;
    ::ll::TypedStorage<8, 8, std::unique_ptr<gametest::IGameTestRuleHelper>>                   mGameTestRuleHelper;
    // NOLINTEND

public:
    // prevent constructor by default
    GameTestTicker& operator=(GameTestTicker const&);
    GameTestTicker(GameTestTicker const&);
    GameTestTicker();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit GameTestTicker(std::unique_ptr<gametest::IGameTestRuleHelper>);

    MCNAPI void add(std::shared_ptr<gametest::BaseGameTestInstance>);

    MCNAPI void add(std::unique_ptr<gametest::BaseGameTestBatchRunner>);

    MCNAPI void add(std::unique_ptr<GameTestClearTask>);

    MCNAPI void cleanupGameRules();

    MCNAPI void clear();

    MCNAPI void forceStop();

    MCNAPI void tick();

    MCNAPI ~GameTestTicker();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::unique_ptr<gametest::IGameTestRuleHelper>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace gametest
