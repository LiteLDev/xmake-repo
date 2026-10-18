#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/ProgressHandler.h"
#include "mc/client/services/download/IContentAcquisition.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class DlcId;
class MinecraftScreenModel;
// clang-format on

class ResourcePackProgressHandler : public ::ProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, bool> mDone;
    ::ll::TypedStorage<8, 24, std::string> mPackProgress;
    ::ll::TypedStorage<4, 4, float> mProgress;
    ::ll::TypedStorage<8, 24, std::string> mProgressMessage;
    ::ll::TypedStorage<4, 4, ::LoadingState> mLoadingState;
    ::ll::TypedStorage<1, 1, bool> mDisconnected;
    ::ll::TypedStorage<8, 16, std::optional<std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>>> mStartTimestamp;
    ::ll::TypedStorage<1, 1, bool> mLocalServer;
    ::ll::TypedStorage<8, 16, std::shared_ptr<bool>> mPackImportExistenceTracker;
    ::ll::UntypedStorage<8, 8> mImportCallbackId;
    ::ll::TypedStorage<8, 16, std::shared_ptr<std::vector<DlcId>>> mFailedPackImports;
    ::ll::TypedStorage<1, 1, bool> mAttemptedServerFallback;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePackProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ResourcePackProgressHandler();

    virtual void onStart(::MinecraftScreenModel&);

    virtual void onGameEventNotification(::MinecraftScreenModel&, ::ui::GameEventNotification const&);

    virtual void tick(::MinecraftScreenModel&);

    virtual void onCancel(::MinecraftScreenModel&);

    virtual void onExit(::MinecraftScreenModel&);

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel&) const;

    virtual float getLoadingProgress(::MinecraftScreenModel&) const;

    virtual std::string getProgressMessage(::MinecraftScreenModel&) const;

    virtual std::string getName() const;

    virtual std::string getTitleText() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ResourcePackProgressHandler(bool);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::chrono::duration<long long, std::ratio<1, 1>> const& SECONDS_BEFORE_QUITTING();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onStart(::MinecraftScreenModel&);

    MCNAPI void $onGameEventNotification(::MinecraftScreenModel&, ::ui::GameEventNotification const&);

    MCNAPI void $tick(::MinecraftScreenModel&);

    MCNAPI void $onCancel(::MinecraftScreenModel&);

    MCNAPI void $onExit(::MinecraftScreenModel&);

    MCNAPI ::LoadingState $getLoadingState(::MinecraftScreenModel&) const;

    MCNAPI float $getLoadingProgress(::MinecraftScreenModel&) const;

    MCNAPI std::string $getProgressMessage(::MinecraftScreenModel&) const;

    MCNAPI std::string $getName() const;

    MCNAPI std::string $getTitleText() const;
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
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/ProgressHandler.h"
#include "mc/client/services/download/IContentAcquisition.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class DlcId;
class MinecraftScreenModel;
// clang-format on

class ResourcePackProgressHandler : public ::ProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                      mDone;
    ::ll::TypedStorage<8, 32, ::std::string>                                            mPackProgress;
    ::ll::TypedStorage<4, 4, float>                                                     mProgress;
    ::ll::TypedStorage<8, 32, ::std::string>                                            mProgressMessage;
    ::ll::TypedStorage<4, 4, ::LoadingState>                                            mLoadingState;
    ::ll::TypedStorage<1, 1, bool>                                                      mDisconnected;
    ::ll::TypedStorage<8, 16, ::std::optional<::std::chrono::steady_clock::time_point>> mStartTimestamp;
    ::ll::TypedStorage<1, 1, bool>                                                      mLocalServer;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>>                                  mPackImportExistenceTracker;
    ::ll::TypedStorage<8, 8, ::IContentAcquisition::ImportCallbackId>                   mImportCallbackId;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::std::vector<::DlcId>>>                mFailedPackImports;
    ::ll::TypedStorage<1, 1, bool>                                                      mAttemptedServerFallback;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePackProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ResourcePackProgressHandler() /*override*/ = default;

    virtual void onStart(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onGameEventNotification(
        ::MinecraftScreenModel&            minecraftScreenModel,
        ::ui::GameEventNotification const& notification
    ) /*override*/;

    virtual void tick(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onCancel(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onExit(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual ::std::string getProgressMessage(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual float getLoadingProgress(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual ::std::string getTitleText() const /*override*/;

    virtual ::std::string getName() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ResourcePackProgressHandler(bool localServer);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(bool localServer);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onStart(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI void $onGameEventNotification(
        ::MinecraftScreenModel&            minecraftScreenModel,
        ::ui::GameEventNotification const& notification
    );

    MCAPI void $tick(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI void $onCancel(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI void $onExit(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI ::LoadingState $getLoadingState(::MinecraftScreenModel& minecraftScreenModel) const;

    MCAPI ::std::string $getProgressMessage(::MinecraftScreenModel& minecraftScreenModel) const;

    MCAPI float $getLoadingProgress(::MinecraftScreenModel& minecraftScreenModel) const;

    MCAPI ::std::string $getTitleText() const;

    MCAPI ::std::string $getName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class ResourcePackProgressHandler {};
#endif // @header-generator platform
#endif // @header-generator platform
