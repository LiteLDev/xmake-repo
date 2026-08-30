#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/EmptyProgressHandler.h"
#include "mc/client/gui/WorldVerificationResult.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
class PackAccessStrategy;
class TaskGroup;
// clang-format on

class WorldVerificationProgressHandler : public ::EmptyProgressHandler {
public:
    // WorldVerificationProgressHandler inner types define
    using Callback = std::function<void(WorldVerificationResult)>;

    using CreateAccess = std::function<std::unique_ptr<PackAccessStrategy>()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mState;
    ::ll::UntypedStorage<8, 48> mCallback;
    ::ll::UntypedStorage<8, 16> mLevelAccess;
    ::ll::UntypedStorage<8, 48> mCreateLevelAccess;
    ::ll::UntypedStorage<8, 16> mIOTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldVerificationProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldVerificationProgressHandler();

    virtual void onStart(::MinecraftScreenModel&);

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel&) const;

    virtual std::string getTitleText() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldVerificationProgressHandler(
        std::function<std::unique_ptr<PackAccessStrategy>()>,
        std::function<void(WorldVerificationResult)>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
        $ctor(std::function<std::unique_ptr<PackAccessStrategy>()>, std::function<void(WorldVerificationResult)>);
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

    MCNAPI ::LoadingState $getLoadingState(::MinecraftScreenModel&) const;

    MCNAPI std::string $getTitleText() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
