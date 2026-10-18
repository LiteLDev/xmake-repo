#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/tutorial/GameTip.h"
#include "mc/client/tutorial/PlayerEventGameTip.h"
#include "mc/client/tutorial/game_tip_constants/Interruption.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class EntityContext;
class Option;
// clang-format on

class MovementGameTip : public ::PlayerEventGameTip {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                              mPlayerMovementDuration;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mInteractionModelSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    MovementGameTip();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MovementGameTip();

    virtual std::chrono::duration<long long, std::ratio<1, 1>> getCooldownAfterStopped() const;

    virtual bool canIgnoreInterruption(::GameTipConstants::Interruption);

    virtual void handleButtonPressed(std::string const);

    virtual std::string getAnimationPrefix() const;

    virtual std::string getAnimationSuffix() const;

    virtual std::string getLocalizationPrefix() const;

    virtual std::string getLocalizationDetail() const;

    virtual std::array<std::string, 2> getCustomOffset() const;

    virtual ::GameTip::ArrowDirection getArrowDirection() const;

    virtual ::GameTip::ArrowAnchor getArrowAnchor() const;

    virtual std::array<int, 2> getAnimationSizeDesktop() const;

    virtual std::array<int, 2> getAnimationSizeTouch() const;

    virtual ::EventResult onPlayerInput(::EntityContext&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MovementGameTip(std::shared_ptr<ClientInstanceScreenModel> const&);

    MCNAPI bool _hasCustomKeyBindings() const;

    MCNAPI void _interactionModelCallback(::Option const&);
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
    MCNAPI std::chrono::duration<long long, std::ratio<1, 1>> $getCooldownAfterStopped() const;

    MCNAPI bool $canIgnoreInterruption(::GameTipConstants::Interruption);

    MCNAPI void $handleButtonPressed(std::string const);

    MCNAPI std::string $getAnimationPrefix() const;

    MCNAPI std::string $getAnimationSuffix() const;

    MCNAPI std::string $getLocalizationPrefix() const;

    MCNAPI std::string $getLocalizationDetail() const;

    MCNAPI std::array<std::string, 2> $getCustomOffset() const;

    MCNAPI ::GameTip::ArrowDirection $getArrowDirection() const;

    MCNAPI ::GameTip::ArrowAnchor $getArrowAnchor() const;

    MCNAPI std::array<int, 2> $getAnimationSizeDesktop() const;

    MCNAPI std::array<int, 2> $getAnimationSizeTouch() const;

    MCNAPI ::EventResult $onPlayerInput(::EntityContext&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class MovementGameTip {};
#endif // @header-generator platform
