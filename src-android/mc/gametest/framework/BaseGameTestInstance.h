#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/gametest/framework/GameTestError.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class AABB;
class BoundingBox;
class Vec3;
struct DimensionType;
namespace gametest { class BaseGameTestFunction; }
namespace gametest { class BaseGameTestHelper; }
namespace gametest { class GameTestSequence; }
namespace gametest { class IGameTestFunctionContext; }
namespace gametest { class IGameTestFunctionRunResult; }
namespace gametest { class IGameTestHelperProvider; }
namespace gametest { class IGameTestListener; }
// clang-format on

namespace gametest {

class BaseGameTestInstance {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 12, ::BlockPos> mStructureBlockPos;
    ::ll::TypedStorage<1, 1, ::Rotation> mRotation;
    ::ll::TypedStorage<8, 8, std::unique_ptr<gametest::BaseGameTestHelper>> mTestHelper;
    ::ll::TypedStorage<8, 8, std::unique_ptr<gametest::IGameTestFunctionContext>> mTestFunctionContext;
    ::ll::TypedStorage<8, 8, std::unique_ptr<gametest::IGameTestHelperProvider>> mHelperFactory;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<gametest::IGameTestListener>>> mListeners;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<gametest::GameTestSequence>>> mSequences;
    ::ll::TypedStorage<8, 40, std::unordered_map<int, std::vector<std::function<std::optional<gametest::GameTestError> ()>>>> mRunAtTickTimeMap;
    ::ll::TypedStorage<8, 24, std::vector<std::function<std::optional<gametest::GameTestError> ()>>> mRunOnFinishList;
    ::ll::TypedStorage<8, 24, std::vector<WeakEntityRef>> mSimulatedPlayers;
    ::ll::TypedStorage<8, 8, std::unique_ptr<gametest::IGameTestFunctionRunResult>> mRunResultFuture;
    ::ll::TypedStorage<8, 240, std::optional<gametest::GameTestError>> mError;
    ::ll::TypedStorage<4, 4, int> mRetriesStarted;
    ::ll::TypedStorage<4, 4, int> mRetriesFinished;
    ::ll::TypedStorage<4, 4, int> mAttempts;
    ::ll::TypedStorage<4, 4, int> mRunCount;
    ::ll::TypedStorage<4, 4, int> mSuccesses;
    ::ll::TypedStorage<4, 4, int> mFailures;
    ::ll::TypedStorage<4, 4, int> mMaxRunCount;
    ::ll::TypedStorage<1, 1, bool> mStopOnFailure;
    ::ll::TypedStorage<1, 1, bool> mStopOtherTestsOnFailure;
    ::ll::TypedStorage<8, 8, ::gametest::BaseGameTestFunction const&> mTestFunction;
    ::ll::TypedStorage<4, 4, int> mTickCount;
    ::ll::TypedStorage<4, 4, int> mStartTick;
    ::ll::TypedStorage<4, 4, int const> mTimeoutTicks;
    ::ll::TypedStorage<4, 4, int const> mSetupTicks;
    ::ll::TypedStorage<1, 1, bool> mIsDone;
    ::ll::TypedStorage<1, 1, bool> mIsStarted;
    ::ll::TypedStorage<1, 1, bool> mIsCleaningUp;
    ::ll::TypedStorage<1, 1, bool> mClearedStructure;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    BaseGameTestInstance& operator=(BaseGameTestInstance const&);
    BaseGameTestInstance(BaseGameTestInstance const&);
    BaseGameTestInstance();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BaseGameTestInstance();

    virtual void initialize();

    virtual bool hasStructureBlock() const = 0;

    virtual void clearStructure() = 0;

    virtual void spawnStructure();

    virtual std::optional<AABB> getStructureBounds() const = 0;

    virtual std::optional<Vec3> getStructureBlockPivot() const = 0;

    virtual std::optional<Vec3> getStructureBlockPosPivot() const = 0;

    virtual ::BoundingBox getStructureBoundingBox() const = 0;

    virtual ::DimensionType getStructureDimension() const = 0;

    virtual int _getLevelTick() const = 0;

    virtual bool _isTestReady() = 0;

    virtual void _rerun();

    virtual void _removeSimulatedPlayers();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addListener(std::shared_ptr<gametest::IGameTestListener>);

    MCNAPI ::gametest::GameTestSequence& createSequence();

    MCNAPI void fail(::gametest::GameTestError, bool);

    MCNAPI void finish(bool);

    MCNAPI void forceStop();

    MCNAPI std::optional<gametest::GameTestError> const& getError() const;

    MCNAPI bool getStopOtherTestsOnFailure() const;

    MCNAPI std::string const& getTestName() const;

    MCNAPI bool hasFailed() const;

    MCNAPI bool isDone() const;

    MCNAPI bool isRequired() const;

    MCNAPI void removeListener(std::shared_ptr<gametest::IGameTestListener>);

    MCNAPI void runCallbacksOnFinish();

    MCNAPI void startExecution();

    MCNAPI void succeed();

    MCNAPI void tick();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initialize();

    MCNAPI void $spawnStructure();

    MCNAPI void $_rerun();

    MCNAPI void $_removeSimulatedPlayers();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace gametest
