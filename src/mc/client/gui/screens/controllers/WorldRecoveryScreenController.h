#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/deps/application/storage_migration/WorldRecovery.h"
#include "mc/deps/application/storage_migration/WorldRecoveryTelemetryEvent.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/pub_sub/DeferredSubscription.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
namespace Bedrock { class WorldRecovery; }
// clang-format on

class WorldRecoveryScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 240, ::TaskGroup> mTaskGroup;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Bedrock::WorldRecovery>> mWorldRecovery;
    ::ll::UntypedStorage<8, 48> mLatestUpdate;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::DeferredSubscription> mUpdateSubscription;
    ::ll::UntypedStorage<8, 128> mTelemetryEvent;
    ::ll::UntypedStorage<8, 48> mSuccessCallback;
    ::ll::UntypedStorage<8, 48> mDoMigrationFn;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mRecoveryStartTime;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastVisualUpdateTime;
    ::ll::TypedStorage<8, 24, std::string> mDefaultDisplayText;
    ::ll::TypedStorage<8, 24, std::string> mCurrentDisplayText;
    ::ll::TypedStorage<1, 1, std::atomic<bool>> mControlsEnabled;
    ::ll::UntypedStorage<1, 15> mRecoveryInProgress;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    WorldRecoveryScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldRecoveryScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void onOpen();

    virtual bool canExit();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldRecoveryScreenController(std::shared_ptr<MainMenuScreenModel>, std::function<void()>);

    MCNAPI void _fireTelemetry();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MainMenuScreenModel>, std::function<void()>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ui::DirtyFlag $tick();

    MCNAPI void $onOpen();

    MCNAPI bool $canExit();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/deps/application/storage_migration/WorldRecovery.h"
#include "mc/deps/application/storage_migration/WorldRecoveryTelemetryEvent.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/pub_sub/DeferredSubscription.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
namespace Bedrock { class WorldRecovery; }
// clang-format on

class WorldRecoveryScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 336, ::TaskGroup>                               mTaskGroup;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Bedrock::WorldRecovery>> mWorldRecovery;
    ::ll::TypedStorage<8, 56, ::Bedrock::WorldRecovery::RecoveryUpdate>   mLatestUpdate;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::DeferredSubscription>    mUpdateSubscription;
    ::ll::TypedStorage<8, 144, ::Bedrock::WorldRecoveryTelemetryEvent>    mTelemetryEvent;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                    mSuccessCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                    mDoMigrationFn;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>     mRecoveryStartTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>     mLastVisualUpdateTime;
    ::ll::TypedStorage<8, 32, ::std::string>                              mDefaultDisplayText;
    ::ll::TypedStorage<8, 32, ::std::string>                              mCurrentDisplayText;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>                         mControlsEnabled;
    ::ll::TypedStorage<1, 1, bool>                                        mRecoveryInProgress;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldRecoveryScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldRecoveryScreenController() /*override*/ = default;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual void onOpen() /*override*/;

    virtual bool canExit() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldRecoveryScreenController(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::std::function<void()>                  successCallback
    );

    MCAPI void _fireTelemetry();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MainMenuScreenModel> model, ::std::function<void()> successCallback);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ui::DirtyFlag $tick();

    MCAPI void $onOpen();

    MCAPI bool $canExit();
    // NOLINTEND
};
#else // @header-generator platform
class WorldRecoveryScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform
