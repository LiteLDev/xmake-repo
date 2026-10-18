#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/ProgressHandler.h"
#include "mc/platform/ErrorInfo.h"
#include "mc/util/CallbackToken.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class RemoteStorageProviderSyncProgressHandler : public ::ProgressHandler {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/ProgressHandler.h"
#include "mc/platform/ErrorInfo.h"
#include "mc/util/CallbackToken.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class RemoteStorageProviderSyncProgressHandler : public ::ProgressHandler {
#else // @header-generator platform
class RemoteStorageProviderSyncProgressHandler {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // RemoteStorageProviderSyncProgressHandler inner types declare
    // clang-format off
    class SyncState;
    // clang-format on

    // RemoteStorageProviderSyncProgressHandler inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class State : int {
        Idle              = 0,
        WaitingForRequest = 1,
        Error             = 2,
        Complete          = 3,
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class State : int {
        Idle              = 0,
        WaitingForRequest = 1,
        Error             = 2,
        Complete          = 3,
    };
#else // @header-generator platform
    enum class State : int {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    class SyncState : public ::std::enable_shared_from_this<RemoteStorageProviderSyncProgressHandler::SyncState> {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::RemoteStorageProviderSyncProgressHandler::State> mState;
        ::ll::UntypedStorage<8, 72>                                                 mSyncSuccess;
        ::ll::UntypedStorage<8, 48>                                                 mCompletedCallback;
        ::ll::UntypedStorage<1, 16>                                                 mCompletedCallbackCalled;
        // NOLINTEND

    public:
        // prevent constructor by default
        SyncState();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void onCompleted(::nonstd::expected<void, Bedrock::ErrorInfo<std::error_code>>, bool);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, std::shared_ptr<RemoteStorageProviderSyncProgressHandler::SyncState>> mSyncState;
    ::ll::UntypedStorage<8, 48> mActionCallback;
    ::ll::UntypedStorage<8, 48> mOnProgressHandlerCompletion;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mStartTimestamp;
    ::ll::TypedStorage<8, 16, ::CallbackToken> mSyncToken;
    ::ll::TypedStorage<8, 24, std::string> mScreenName;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    RemoteStorageProviderSyncProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RemoteStorageProviderSyncProgressHandler();

    virtual void onStart(::MinecraftScreenModel&);

    virtual void tick(::MinecraftScreenModel&);

    virtual void onCancel(::MinecraftScreenModel&);

    virtual void onExit(::MinecraftScreenModel&);

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel&) const;

    virtual std::string getProgressMessage(::MinecraftScreenModel&) const;

    virtual std::string getName() const;

    virtual std::string getTitleText() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RemoteStorageProviderSyncProgressHandler(
        std::function<CallbackToken(std::function<void(nonstd::expected<void, Bedrock::ErrorInfo<std::error_code>>)>)>,
        std::function<void(nonstd::expected<void, Bedrock::ErrorInfo<std::error_code>>)>,
        std::function<void(nonstd::expected<void, Bedrock::ErrorInfo<std::error_code>>)>,
        std::string const&
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::chrono::duration<long long, std::ratio<1, 1>> const& SECONDS_BEFORE_CANCELLABLE();

    MCNAPI static std::chrono::duration<long long, std::ratio<1, 1>> const& SECONDS_BEFORE_LONG_RUNNING();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::function<CallbackToken(std::function<void(nonstd::expected<void, Bedrock::ErrorInfo<std::error_code>>)>)>,
        std::function<void(nonstd::expected<void, Bedrock::ErrorInfo<std::error_code>>)>,
        std::function<void(nonstd::expected<void, Bedrock::ErrorInfo<std::error_code>>)>,
        std::string const&
    );
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

    MCNAPI void $tick(::MinecraftScreenModel&);

    MCNAPI void $onCancel(::MinecraftScreenModel&);

    MCNAPI void $onExit(::MinecraftScreenModel&);

    MCNAPI ::LoadingState $getLoadingState(::MinecraftScreenModel&) const;

    MCNAPI std::string $getProgressMessage(::MinecraftScreenModel&) const;

    MCNAPI std::string $getName() const;

    MCNAPI std::string $getTitleText() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    class SyncState : public ::std::enable_shared_from_this<::RemoteStorageProviderSyncProgressHandler::SyncState> {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::RemoteStorageProviderSyncProgressHandler::State>                  mState;
        ::ll::TypedStorage<8, 72, ::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>> mSyncSuccess;
        ::ll::TypedStorage<
            8,
            64,
            ::std::function<void(::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>)>>
                                                      mCompletedCallback;
        ::ll::TypedStorage<1, 1, ::std::atomic<bool>> mCompletedCallbackCalled;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void onCompleted(::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>> result, bool canceled);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::RemoteStorageProviderSyncProgressHandler::SyncState>> mSyncState;
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<
            ::CallbackToken(::std::function<void(::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>)>)>>
        mActionCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void(::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>)>>
                                                                      mOnProgressHandlerCompletion;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mStartTimestamp;
    ::ll::TypedStorage<8, 16, ::CallbackToken>                        mSyncToken;
    ::ll::TypedStorage<8, 32, ::std::string>                          mScreenName;
    // NOLINTEND

public:
    // prevent constructor by default
    RemoteStorageProviderSyncProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RemoteStorageProviderSyncProgressHandler() /*override*/ = default;

    virtual void onStart(::MinecraftScreenModel&) /*override*/;

    virtual void tick(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onCancel(::MinecraftScreenModel&) /*override*/;

    virtual void onExit(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel&) const /*override*/;

    virtual ::std::string getProgressMessage(::MinecraftScreenModel&) const /*override*/;

    virtual ::std::string getTitleText() const /*override*/;

    virtual ::std::string getName() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RemoteStorageProviderSyncProgressHandler(
        ::std::function<
            ::CallbackToken(::std::function<void(::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>)>)>
                                                                                                 actionCallback,
        ::std::function<void(::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>)> completedCallback,
        ::std::function<void(::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>)>
                             onProgressHandlerCompletion,
        ::std::string const& screenName
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::function<
            ::CallbackToken(::std::function<void(::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>)>)>
                                                                                                 actionCallback,
        ::std::function<void(::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>)> completedCallback,
        ::std::function<void(::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>)>
                             onProgressHandlerCompletion,
        ::std::string const& screenName
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onStart(::MinecraftScreenModel&);

    MCAPI void $tick(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI void $onCancel(::MinecraftScreenModel&);

    MCAPI void $onExit(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI ::LoadingState $getLoadingState(::MinecraftScreenModel&) const;

    MCAPI ::std::string $getProgressMessage(::MinecraftScreenModel&) const;

    MCAPI ::std::string $getTitleText() const;

    MCAPI ::std::string $getName() const;
    // NOLINTEND
#else // @header-generator platform
    class SyncState {};
#endif // @header-generator platform
#endif // @header-generator platform
};
