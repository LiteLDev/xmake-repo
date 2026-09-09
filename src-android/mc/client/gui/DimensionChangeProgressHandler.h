#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/WorldGenerationProgressHandler.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class DimensionChangeProgressHandler : public ::WorldGenerationProgressHandler {
public:
    // prevent constructor by default
    DimensionChangeProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DimensionChangeProgressHandler();

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel&) const;

    virtual std::string getName() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DimensionChangeProgressHandler(bool, std::function<void()> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool, std::function<void()> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::LoadingState $getLoadingState(::MinecraftScreenModel&) const;

    MCNAPI std::string $getName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
