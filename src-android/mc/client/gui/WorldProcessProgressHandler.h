#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/EmptyProgressHandler.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class WorldProcessProgressHandler : public ::EmptyProgressHandler {
public:
    // WorldProcessProgressHandler inner types define
    enum class Type : int {
        Convert = 0,
        Upload  = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>                                   mOnTick;
    ::ll::UntypedStorage<8, 48>                                   mGetLoadingStateCallback;
    ::ll::TypedStorage<4, 4, float>                               mProgress;
    ::ll::TypedStorage<4, 4, ::WorldProcessProgressHandler::Type> mWorldProcessType;
    ::ll::TypedStorage<1, 1, bool>                                mExitOnComplete;
    ::ll::TypedStorage<1, 1, bool>                                mExitRequested;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldProcessProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldProcessProgressHandler();

    virtual void tick(::MinecraftScreenModel&);

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel&) const;

    virtual float getLoadingProgress(::MinecraftScreenModel&) const;

    virtual std::string getProgressMessage(::MinecraftScreenModel&) const;

    virtual std::string getName() const;

    virtual std::string getTTSProgressMessage() const;

    virtual std::string getTitleText() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldProcessProgressHandler(
        ::WorldProcessProgressHandler::Type,
        std::function<float()>,
        std::function<LoadingState()>,
        bool
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::WorldProcessProgressHandler::Type, std::function<float()>, std::function<LoadingState()>, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(::MinecraftScreenModel&);

    MCNAPI ::LoadingState $getLoadingState(::MinecraftScreenModel&) const;

    MCNAPI float $getLoadingProgress(::MinecraftScreenModel&) const;

    MCNAPI std::string $getProgressMessage(::MinecraftScreenModel&) const;

    MCNAPI std::string $getName() const;

    MCNAPI std::string $getTTSProgressMessage() const;

    MCNAPI std::string $getTitleText() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
