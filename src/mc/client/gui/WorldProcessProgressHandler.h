#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/EmptyProgressHandler.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class WorldProcessProgressHandler : public ::EmptyProgressHandler {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/EmptyProgressHandler.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class WorldProcessProgressHandler : public ::EmptyProgressHandler {
#else // @header-generator platform
class WorldProcessProgressHandler {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // WorldProcessProgressHandler inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class Type : int {
        Convert = 0,
        Upload  = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<float()>>           mOnTick;
    ::ll::TypedStorage<8, 64, ::std::function<::LoadingState()>>  mGetLoadingStateCallback;
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
    virtual ~WorldProcessProgressHandler() /*override*/ = default;

    virtual void tick(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual float getLoadingProgress(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual ::std::string getProgressMessage(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual ::std::string getTTSProgressMessage() const /*override*/;

    virtual ::std::string getTitleText() const /*override*/;

    virtual ::std::string getName() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldProcessProgressHandler(
        ::WorldProcessProgressHandler::Type worldProcessType,
        ::std::function<float()>            tickCallback,
        ::std::function<::LoadingState()>   getLoadingStateCallback,
        bool                                exitOnComplete
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::WorldProcessProgressHandler::Type worldProcessType,
        ::std::function<float()>            tickCallback,
        ::std::function<::LoadingState()>   getLoadingStateCallback,
        bool                                exitOnComplete
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI ::LoadingState $getLoadingState(::MinecraftScreenModel& minecraftScreenModel) const;

    MCAPI float $getLoadingProgress(::MinecraftScreenModel& minecraftScreenModel) const;

    MCAPI ::std::string $getProgressMessage(::MinecraftScreenModel& minecraftScreenModel) const;

    MCAPI ::std::string $getTTSProgressMessage() const;

    MCAPI ::std::string $getTitleText() const;

    MCAPI ::std::string $getName() const;
    // NOLINTEND
#else // @header-generator platform
    enum class Type : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};
