#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/tutorial/PlayerEventGameTip.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class Player;
struct PlayerNotificationEvent;
// clang-format on

class SneakGameTip : public ::PlayerEventGameTip {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>  mPlayerSneakDurationTicks;
    ::ll::TypedStorage<1, 1, bool> mDelayedActivation;
    ::ll::TypedStorage<4, 4, int>  mDelayActivationTicks;
    // NOLINTEND

public:
    // prevent constructor by default
    SneakGameTip();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SneakGameTip();

    virtual std::string getAnimationPrefix() const;

    virtual std::string getLocalizationPrefix() const;

    virtual std::array<int, 2> getAnimationSizeDesktop() const;

    virtual std::array<int, 2> getAnimationSizeTouch() const;

    virtual ::EventResult onPlayerTick(::Player&);

    virtual ::EventResult onEvent(::PlayerNotificationEvent const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SneakGameTip(std::shared_ptr<ClientInstanceScreenModel> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<ClientInstanceScreenModel> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::string $getAnimationPrefix() const;

    MCNAPI std::string $getLocalizationPrefix() const;

    MCNAPI std::array<int, 2> $getAnimationSizeDesktop() const;

    MCNAPI std::array<int, 2> $getAnimationSizeTouch() const;

    MCNAPI ::EventResult $onPlayerTick(::Player&);

    MCNAPI ::EventResult $onEvent(::PlayerNotificationEvent const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class SneakGameTip {};
#endif // @header-generator platform
