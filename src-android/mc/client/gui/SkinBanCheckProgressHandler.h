#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ProgressHandler.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class SkinBanCheckProgressHandler : public ::ProgressHandler {
public:
    // SkinBanCheckProgressHandler inner types define
    enum class State : int {
        Pending        = 0,
        LoadingPersona = 1,
        InPopup        = 2,
        Done           = 3,
        Cancelling     = 4,
        Cancelled      = 5,
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, ::SkinBanCheckProgressHandler::State> mState;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mInitTime;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SkinBanCheckProgressHandler();

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
    MCNAPI SkinBanCheckProgressHandler();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::chrono::duration<long long, std::ratio<1, 1>> const& PERSONA_TIMEOUT_SECONDS();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
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
};
