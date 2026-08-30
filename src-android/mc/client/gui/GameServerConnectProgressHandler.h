#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/GameConnectionType.h"
#include "mc/client/gui/ProgressHandler.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class GameServerConnectProgressHandler : public ::ProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, bool> mConnected;
    ::ll::TypedStorage<1, 1, bool> mHandoverProgress;
    ::ll::TypedStorage<1, 1, bool> mInitialized;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mInitTime;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>>> mTimeoutTime;
    ::ll::TypedStorage<4, 4, ::GameConnectionType> mConnectionType;
    ::ll::UntypedStorage<8, 48> mOnStart;
    ::ll::UntypedStorage<8, 48> mAbortCallback;
    ::ll::UntypedStorage<8, 48> mEventCallback;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    GameServerConnectProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GameServerConnectProgressHandler();

    virtual void onStart(::MinecraftScreenModel&);

    virtual void tick(::MinecraftScreenModel&);

    virtual void onCancel(::MinecraftScreenModel&);

    virtual void onExit(::MinecraftScreenModel&);

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel&) const;

    virtual std::string getProgressMessage(::MinecraftScreenModel&) const;

    virtual void addEventProperties(std::unordered_map<std::string, std::string>&) const;

    virtual std::string getName() const;

    virtual std::string getTitleText() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GameServerConnectProgressHandler(
        ::GameConnectionType,
        std::function<void()>,
        bool,
        std::function<void(std::unordered_map<std::string, std::string>&)>,
        std::function<void()>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::GameConnectionType,
        std::function<void()>,
        bool,
        std::function<void(std::unordered_map<std::string, std::string>&)>,
        std::function<void()>
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

    MCNAPI void $addEventProperties(std::unordered_map<std::string, std::string>&) const;

    MCNAPI std::string $getName() const;

    MCNAPI std::string $getTitleText() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
