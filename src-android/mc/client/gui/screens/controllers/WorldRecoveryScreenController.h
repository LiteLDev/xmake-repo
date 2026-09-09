#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
