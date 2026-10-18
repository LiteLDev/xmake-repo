#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class GameTestClearTask;
#if defined(LL_PLAT_A) // @header-generator platform
namespace gametest { class BaseGameTestBatchRunner; }
namespace gametest { class BaseGameTestInstance; }
namespace gametest { class IGameTestListener; }
namespace gametest { class IGameTestRuleHelper; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace gametest {

class GameTestTicker {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                                              mTickCount;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<GameTestClearTask>>>                 mClearTasks;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<gametest::BaseGameTestInstance>>>    mActiveTests;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<gametest::BaseGameTestBatchRunner>>> mGameTestBatchRunners;
    ::ll::TypedStorage<8, 8, std::unique_ptr<gametest::IGameTestRuleHelper>>                   mGameTestRuleHelper;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnk584414;
    ::ll::UntypedStorage<8, 24> mUnkb5b85a;
    ::ll::UntypedStorage<8, 24> mUnk34e059;
    ::ll::UntypedStorage<8, 24> mUnk1967c1;
    ::ll::UntypedStorage<8, 8>  mUnkc6363b;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    GameTestTicker& operator=(GameTestTicker const&);
    GameTestTicker(GameTestTicker const&);
    GameTestTicker();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit GameTestTicker(std::unique_ptr<gametest::IGameTestRuleHelper>);

    MCNAPI void add(std::shared_ptr<gametest::BaseGameTestInstance>);

    MCNAPI void add(std::unique_ptr<gametest::BaseGameTestBatchRunner>);

    MCNAPI void add(std::unique_ptr<GameTestClearTask>);

    MCNAPI void cleanupGameRules();
#else // @header-generator platform
    MCNAPI void add(::std::unique_ptr<::GameTestClearTask> clearTask);
#endif // @header-generator platform

    MCNAPI void clear();

    MCNAPI void forceStop();

    MCNAPI void tick();

    MCNAPI ~GameTestTicker();
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::unique_ptr<gametest::IGameTestRuleHelper>);
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace gametest
