#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/gametest/framework/GameTestError.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/BlockPos.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class AABB;
class BoundingBox;
class Vec3;
struct DimensionType;
namespace gametest { class BaseGameTestFunction; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace gametest { class BaseGameTestHelper; }
#else // @header-generator platform
#endif // @header-generator platform
namespace gametest { class GameTestSequence; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace gametest { class IGameTestFunctionContext; }
namespace gametest { class IGameTestFunctionRunResult; }
#else // @header-generator platform
#endif // @header-generator platform
namespace gametest { class IGameTestHelperProvider; }
namespace gametest { class IGameTestListener; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace gametest { struct GameTestError; }
#endif // @header-generator platform
// clang-format on

namespace gametest {

class BaseGameTestInstance {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<4, 12>  mUnk350d5f;
    ::ll::UntypedStorage<1, 1>   mUnkf470ba;
    ::ll::UntypedStorage<8, 8>   mUnk64e3e4;
    ::ll::UntypedStorage<8, 8>   mUnke0721c;
    ::ll::UntypedStorage<8, 8>   mUnk2c3b38;
    ::ll::UntypedStorage<8, 24>  mUnk26b223;
    ::ll::UntypedStorage<8, 24>  mUnk14f77f;
    ::ll::UntypedStorage<8, 64>  mUnke88ce8;
    ::ll::UntypedStorage<8, 24>  mUnk5e0720;
    ::ll::UntypedStorage<8, 24>  mUnk6d9112;
    ::ll::UntypedStorage<8, 8>   mUnkf2a8a9;
    ::ll::UntypedStorage<8, 288> mUnkfdc9e5;
    ::ll::UntypedStorage<4, 4>   mUnk7a1201;
    ::ll::UntypedStorage<4, 4>   mUnk7f9ce6;
    ::ll::UntypedStorage<4, 4>   mUnkc50f09;
    ::ll::UntypedStorage<4, 4>   mUnk21460e;
    ::ll::UntypedStorage<4, 4>   mUnkd39f83;
    ::ll::UntypedStorage<4, 4>   mUnkc056c2;
    ::ll::UntypedStorage<4, 4>   mUnkcde0ac;
    ::ll::UntypedStorage<1, 1>   mUnkfe8a57;
    ::ll::UntypedStorage<1, 1>   mUnk5cc272;
    ::ll::UntypedStorage<8, 8>   mUnkb0ad63;
    ::ll::UntypedStorage<4, 4>   mUnk4faa9d;
    ::ll::UntypedStorage<4, 4>   mUnkc02b5e;
    ::ll::UntypedStorage<4, 4>   mUnkc036b5;
    ::ll::UntypedStorage<4, 4>   mUnk89f975;
    ::ll::UntypedStorage<1, 1>   mUnkc98fbc;
    ::ll::UntypedStorage<1, 1>   mUnkcfef79;
    ::ll::UntypedStorage<1, 1>   mUnk673bc3;
    ::ll::UntypedStorage<1, 1>   mUnk9b8cd1;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    BaseGameTestInstance& operator=(BaseGameTestInstance const&);
    BaseGameTestInstance(BaseGameTestInstance const&);
    BaseGameTestInstance();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BaseGameTestInstance();
#else // @header-generator platform
    virtual ~BaseGameTestInstance() = default;
#endif // @header-generator platform

    virtual void initialize();

    virtual bool hasStructureBlock() const = 0;

    virtual void clearStructure() = 0;

    virtual void spawnStructure();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<AABB> getStructureBounds() const = 0;
#else // @header-generator platform
    virtual ::std::optional<::AABB> getStructureBounds() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Vec3> getStructureBlockPivot() const = 0;
#else // @header-generator platform
    virtual ::std::optional<::Vec3> getStructureBlockPivot() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Vec3> getStructureBlockPosPivot() const = 0;
#else // @header-generator platform
    virtual ::std::optional<::Vec3> getStructureBlockPosPivot() const = 0;
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addListener(std::shared_ptr<gametest::IGameTestListener>);
#else // @header-generator platform
    MCNAPI BaseGameTestInstance(
        ::gametest::BaseGameTestFunction const&                testFunction,
        ::std::unique_ptr<::gametest::IGameTestHelperProvider> helper
    );
#endif // @header-generator platform

    MCNAPI ::gametest::GameTestSequence& createSequence();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void fail(::gametest::GameTestError, bool);
#else // @header-generator platform
    MCNAPI void fail(::gametest::GameTestError error, bool canRetry);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void finish(bool);

    MCNAPI void forceStop();

    MCNAPI std::optional<gametest::GameTestError> const& getError() const;

    MCNAPI bool getStopOtherTestsOnFailure() const;

    MCNAPI std::string const& getTestName() const;

    MCNAPI bool hasFailed() const;

    MCNAPI bool isDone() const;

    MCNAPI bool isRequired() const;

    MCNAPI void removeListener(std::shared_ptr<gametest::IGameTestListener>);
#else // @header-generator platform
    MCNAPI void removeListener(::std::shared_ptr<::gametest::IGameTestListener> listener);
#endif // @header-generator platform

    MCNAPI void runCallbacksOnFinish();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void startExecution();
#else // @header-generator platform
    MCNAPI void setRunAtTickTime(int tickTime, ::std::function<::std::optional<::gametest::GameTestError>()> fn);

    MCNAPI void setRunOnFinish(::std::function<::std::optional<::gametest::GameTestError>()> fn);
#endif // @header-generator platform

    MCNAPI void succeed();
#if defined(LL_PLAT_A) // @header-generator platform

    MCNAPI void tick();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(
        ::gametest::BaseGameTestFunction const&                testFunction,
        ::std::unique_ptr<::gametest::IGameTestHelperProvider> helper
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initialize();

    MCNAPI void $spawnStructure();

    MCNAPI void $_rerun();

    MCNAPI void $_removeSimulatedPlayers();
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform
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

} // namespace gametest
