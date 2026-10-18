#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/tutorial/PlayerEventGameTip.h"
#include "mc/client/tutorial/game_tip_constants/Interruption.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/utility/BasicTimer.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class EntityContext;
class Player;
// clang-format on

class FlyUpGameTip : public ::PlayerEventGameTip {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                  mLastEffectiveTimeStored;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>>>    mFlyUpDisplaySeconds;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000>>> mLastEffectiveTime;
    ::ll::TypedStorage<4, 12, ::Vec3>                                               mStartFlyingPos;
    ::ll::UntypedStorage<8, 64>                                                     mClickTimer;
    // NOLINTEND

public:
    // prevent constructor by default
    FlyUpGameTip();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FlyUpGameTip();

    virtual bool isAvailableForGameType(::GameType) const;

    virtual bool canIgnoreInterruption(::GameTipConstants::Interruption);

    virtual std::string getAnimationPrefix() const;

    virtual std::string getLocalizationPrefix() const;

    virtual std::array<int, 2> getAnimationSizeDesktop() const;

    virtual std::array<int, 2> getAnimationSizeTouch() const;

    virtual bool _isActivationTimeCheckEnabled() const;

    virtual ::EventResult onPlayerTick(::Player&);

    virtual ::EventResult onPlayerInput(::EntityContext&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit FlyUpGameTip(std::shared_ptr<ClientInstanceScreenModel> const&);
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
    MCNAPI bool $isAvailableForGameType(::GameType) const;

    MCNAPI bool $canIgnoreInterruption(::GameTipConstants::Interruption);

    MCNAPI std::string $getAnimationPrefix() const;

    MCNAPI std::string $getLocalizationPrefix() const;

    MCNAPI std::array<int, 2> $getAnimationSizeDesktop() const;

    MCNAPI std::array<int, 2> $getAnimationSizeTouch() const;

    MCNAPI bool $_isActivationTimeCheckEnabled() const;

    MCNAPI ::EventResult $onPlayerTick(::Player&);

    MCNAPI ::EventResult $onPlayerInput(::EntityContext&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class FlyUpGameTip {};
#endif // @header-generator platform
