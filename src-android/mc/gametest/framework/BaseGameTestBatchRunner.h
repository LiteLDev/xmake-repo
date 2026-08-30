#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/GameTestBatch.h"
#include "mc/gametest/framework/TestParameters.h"
#include "mc/util/Rotation.h"

// auto generated forward declare list
// clang-format off
class TestSummaryDisplayer;
namespace gametest { class BaseGameTestFunction; }
namespace gametest { class BaseGameTestInstance; }
namespace gametest { class GameTestBatchRunnerGameTestListener; }
namespace gametest { class GameTestTicker; }
namespace gametest { class IGameTestListener; }
namespace gametest { class MultipleTestTracker; }
// clang-format on

namespace gametest {

class BaseGameTestBatchRunner {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::gametest::GameTestTicker&> mTestTicker;
    ::ll::TypedStorage<8, 64, ::gametest::TestParameters const> mParams;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<gametest::BaseGameTestInstance>>> mAllTestInstances;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<gametest::GameTestBatch, std::vector<std::shared_ptr<gametest::BaseGameTestInstance>>>>> mBatches;
    ::ll::TypedStorage<8, 8, std::unique_ptr<gametest::MultipleTestTracker>> mCurrentBatchTracker;
    ::ll::TypedStorage<4, 4, int> mCurrentBatchIndex;
    ::ll::TypedStorage<8, 8, std::unique_ptr<gametest::MultipleTestTracker>> mBatchTestTracker;
    ::ll::TypedStorage<1, 1, bool> misDone;
    ::ll::TypedStorage<8, 16, std::shared_ptr<gametest::GameTestBatchRunnerGameTestListener>> mListener;
    ::ll::TypedStorage<8, 16, std::weak_ptr<TestSummaryDisplayer>> mTestDisplayer;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    BaseGameTestBatchRunner& operator=(BaseGameTestBatchRunner const&);
    BaseGameTestBatchRunner(BaseGameTestBatchRunner const&);
    BaseGameTestBatchRunner();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~BaseGameTestBatchRunner();

    virtual std::shared_ptr<gametest::BaseGameTestInstance> _createGameTestInstance(::gametest::BaseGameTestFunction&) = 0;

    virtual void _runTest(std::shared_ptr<gametest::BaseGameTestInstance>, ::gametest::GameTestTicker&) = 0;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _resetBatchTracker();

    MCNAPI void _runBatch(int);

    MCNAPI void forceStop();

    MCNAPI bool isDone() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace gametest
