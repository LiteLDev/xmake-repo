#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/ProgressAnimation.h"
#include "mc/client/gui/ProgressHandlerType.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class ProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ProgressHandlerType const> mType;
    ::ll::TypedStorage<4, 4, ::ProgressAnimation>         mProgressAnimation;
    // NOLINTEND

public:
    // prevent constructor by default
    ProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ProgressHandler();

    virtual void onStart(::MinecraftScreenModel&) = 0;

    virtual void onGameEventNotification(::MinecraftScreenModel&, ::ui::GameEventNotification const&);

    virtual void tick(::MinecraftScreenModel&) = 0;

    virtual void onComplete(::MinecraftScreenModel&);

    virtual void onCancel(::MinecraftScreenModel&) = 0;

    virtual void onRetry(::MinecraftScreenModel&);

    virtual void onExit(::MinecraftScreenModel&) = 0;

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel&) const = 0;

    virtual float getLoadingProgress(::MinecraftScreenModel&) const;

    virtual std::string getProgressMessage(::MinecraftScreenModel&) const = 0;

    virtual void addEventProperties(std::unordered_map<std::string, std::string>&) const;

    virtual std::string getName() const = 0;

    virtual std::string getTTSProgressMessage() const;

    virtual std::string getTitleText() const;

    virtual ::ProgressAnimation showLoadingBar() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onGameEventNotification(::MinecraftScreenModel&, ::ui::GameEventNotification const&);

    MCNAPI void $onComplete(::MinecraftScreenModel&);

    MCNAPI void $onRetry(::MinecraftScreenModel&);

    MCNAPI float $getLoadingProgress(::MinecraftScreenModel&) const;

    MCNAPI void $addEventProperties(std::unordered_map<std::string, std::string>&) const;

    MCNAPI std::string $getTTSProgressMessage() const;

    MCNAPI ::ProgressAnimation $showLoadingBar() const;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/ProgressAnimation.h"
#include "mc/client/gui/ProgressHandlerType.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class ProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ProgressHandlerType const> mType;
    ::ll::TypedStorage<4, 4, ::ProgressAnimation>         mProgressAnimation;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ProgressHandler() = default;

    virtual void onStart(::MinecraftScreenModel& minecraftScreenModel) = 0;

    virtual void onGameEventNotification(
        ::MinecraftScreenModel&            minecraftScreenModel,
        ::ui::GameEventNotification const& notification
    );

    virtual void tick(::MinecraftScreenModel& minecraftScreenModel) = 0;

    virtual void onComplete(::MinecraftScreenModel& minecraftScreenModel);

    virtual void onCancel(::MinecraftScreenModel& minecraftScreenModel) = 0;

    virtual void onRetry(::MinecraftScreenModel& minecraftScreenModel);

    virtual void onExit(::MinecraftScreenModel& minecraftScreenModel) = 0;

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel& minecraftScreenModel) const = 0;

    virtual float getLoadingProgress(::MinecraftScreenModel& minecraftScreenModel) const;

    virtual ::std::string getProgressMessage(::MinecraftScreenModel& minecraftScreenModel) const = 0;

    virtual void addEventProperties(::std::unordered_map<::std::string, ::std::string>& eventProperties) const;

    virtual ::std::string getName() const = 0;

    virtual ::std::string getTTSProgressMessage() const;

    virtual ::std::string getTitleText() const;

    virtual ::ProgressAnimation showLoadingBar() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $onGameEventNotification(
        ::MinecraftScreenModel&            minecraftScreenModel,
        ::ui::GameEventNotification const& notification
    );

    MCFOLD void $onComplete(::MinecraftScreenModel& minecraftScreenModel);

    MCFOLD void $onRetry(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI float $getLoadingProgress(::MinecraftScreenModel& minecraftScreenModel) const;

    MCFOLD void $addEventProperties(::std::unordered_map<::std::string, ::std::string>& eventProperties) const;

    MCAPI ::std::string $getTTSProgressMessage() const;

    MCFOLD ::ProgressAnimation $showLoadingBar() const;
    // NOLINTEND
};
#else // @header-generator platform
class ProgressHandler {};
#endif // @header-generator platform
#endif // @header-generator platform
