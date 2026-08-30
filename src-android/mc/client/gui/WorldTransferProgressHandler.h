#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/EmptyProgressHandler.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class WorldTransferProgressHandler : public ::EmptyProgressHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldTransferProgressHandler();

    virtual void onComplete(::MinecraftScreenModel&);

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel&) const;

    virtual std::string getName() const;

    virtual std::string getTitleText() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onComplete(::MinecraftScreenModel&);

    MCNAPI ::LoadingState $getLoadingState(::MinecraftScreenModel&) const;

    MCNAPI std::string $getName() const;

    MCNAPI std::string $getTitleText() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
