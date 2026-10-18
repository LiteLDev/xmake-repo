#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
    using Callback = ::std::function<void(::WorldVerificationResult)>;

    using CreateAccess = ::std::function<::std::unique_ptr<::PackAccessStrategy>()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::LoadingState>                                              mState;
    ::ll::TypedStorage<8, 64, ::std::function<void(::WorldVerificationResult)>>           mCallback;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PackAccessStrategy>>                     mLevelAccess;
    ::ll::TypedStorage<8, 64, ::std::function<::std::unique_ptr<::PackAccessStrategy>()>> mCreateLevelAccess;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                              mIOTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldVerificationProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldVerificationProgressHandler() /*override*/ = default;

    virtual void onStart(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual ::std::string getTitleText() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldVerificationProgressHandler(
        ::std::function<::std::unique_ptr<::PackAccessStrategy>()> createAccess,
        ::std::function<void(::WorldVerificationResult)>           callback
    );

    MCAPI WorldVerificationProgressHandler(
        ::std::function<::std::unique_ptr<::PackAccessStrategy>()> createAccess,
        ::std::unique_ptr<::PackAccessStrategy>                    levelAccess,
        ::std::function<void(::WorldVerificationResult)>           callback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::function<::std::unique_ptr<::PackAccessStrategy>()> createAccess,
        ::std::function<void(::WorldVerificationResult)>           callback
    );

    MCAPI void* $ctor(
        ::std::function<::std::unique_ptr<::PackAccessStrategy>()> createAccess,
        ::std::unique_ptr<::PackAccessStrategy>                    levelAccess,
        ::std::function<void(::WorldVerificationResult)>           callback
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onStart(::MinecraftScreenModel& minecraftScreenModel);

    MCFOLD ::LoadingState $getLoadingState(::MinecraftScreenModel& minecraftScreenModel) const;

    MCFOLD ::std::string $getTitleText() const;
    // NOLINTEND
};
#else // @header-generator platform
class WorldVerificationProgressHandler {};
#endif // @header-generator platform
#endif // @header-generator platform
