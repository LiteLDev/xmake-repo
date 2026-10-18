#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/gametest/framework/GameTestBatch.h"
#include "mc/gametest/framework/TestParameters.h"
#include "mc/util/Rotation.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class TestSummaryDisplayer;
namespace gametest { class BaseGameTestFunction; }
namespace gametest { class BaseGameTestInstance; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace gametest { class GameTestBatchRunnerGameTestListener; }
#else // @header-generator platform
namespace gametest { class GameTestBatch; }
#endif // @header-generator platform
namespace gametest { class GameTestTicker; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace gametest { class IGameTestListener; }
#else // @header-generator platform
#endif // @header-generator platform
namespace gametest { class MultipleTestTracker; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace gametest { struct TestParameters; }
#endif // @header-generator platform
// clang-format on

namespace gametest {

class BaseGameTestBatchRunner {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk21b924;
    ::ll::UntypedStorage<8, 64> mUnk1b7674;
    ::ll::UntypedStorage<8, 24> mUnkf9be2e;
    ::ll::UntypedStorage<8, 24> mUnk8d0a12;
    ::ll::UntypedStorage<8, 8>  mUnk62d7f4;
    ::ll::UntypedStorage<4, 4>  mUnke52d45;
    ::ll::UntypedStorage<8, 8>  mUnkd25d6d;
    ::ll::UntypedStorage<1, 1>  mUnk763143;
    ::ll::UntypedStorage<8, 16> mUnkfa4478;
    ::ll::UntypedStorage<8, 16> mUnk26cd31;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    BaseGameTestBatchRunner& operator=(BaseGameTestBatchRunner const&);
    BaseGameTestBatchRunner(BaseGameTestBatchRunner const&);
    BaseGameTestBatchRunner();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~BaseGameTestBatchRunner();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<gametest::BaseGameTestInstance> _createGameTestInstance(::gametest::BaseGameTestFunction&) = 0;
#else // @header-generator platform
    virtual ::std::shared_ptr<::gametest::BaseGameTestInstance>
    _createGameTestInstance(::gametest::BaseGameTestFunction& function) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _runTest(std::shared_ptr<gametest::BaseGameTestInstance>, ::gametest::GameTestTicker&) = 0;
    // clang-format on
#else // @header-generator platform
    virtual void
    _runTest(::std::shared_ptr<::gametest::BaseGameTestInstance> test, ::gametest::GameTestTicker& ticker) = 0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MCNAPI BaseGameTestBatchRunner(
        ::std::vector<::gametest::GameTestBatch>&& batches,
        ::gametest::GameTestTicker&                testTicker,
        ::gametest::TestParameters&&               params
    );

#endif // @header-generator platform
    MCNAPI void _resetBatchTracker();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _runBatch(int);
#else // @header-generator platform
    MCNAPI void _runBatch(int batchIndex);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void forceStop();
#else // @header-generator platform
    MCNAPI void setBatchTestTracker(
        ::std::unique_ptr<::gametest::MultipleTestTracker> batchTestTracker,
        ::std::weak_ptr<::TestSummaryDisplayer>            testDisplayer
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isDone() const;
#else // @header-generator platform
    MCNAPI void start();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::vector<::gametest::GameTestBatch>&& batches,
        ::gametest::GameTestTicker&                testTicker,
        ::gametest::TestParameters&&               params
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace gametest
