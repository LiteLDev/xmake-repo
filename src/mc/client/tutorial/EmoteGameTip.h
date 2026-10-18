#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/tutorial/GameTip.h"
#include "mc/client/tutorial/PlayerEventGameTip.h"
#include "mc/client/tutorial/game_tip_constants/Interruption.h"
#include "mc/deps/core/utility/BasicTimer.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class LocalPlayer;
class Player;
// clang-format on

class EmoteGameTip : public ::PlayerEventGameTip {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64>                                                  mRemotePlayerCheckIntervalTimer;
    ::ll::TypedStorage<1, 1, bool>                                               mLastEffectiveTimeStored;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>>> mEmoteDisplaySeconds;
    ::ll::UntypedStorage<8, 16>                                                  mLastEffectiveTime;
    // NOLINTEND

public:
    // prevent constructor by default
    EmoteGameTip();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EmoteGameTip();

    virtual bool canIgnoreInterruption(::GameTipConstants::Interruption);

    virtual std::string getAnimationPrefix() const;

    virtual ::GameTip::UIAnchors getUIAnchors() const;

    virtual std::string getLocalizationPrefix() const;

    virtual std::array<std::string, 2> getCustomOffset() const;

    virtual ::GameTip::ArrowDirection getArrowDirection() const;

    virtual ::GameTip::ArrowAnchor getArrowAnchor() const;

    virtual std::array<int, 2> getAnimationSizeDesktop() const;

    virtual std::array<int, 2> getAnimationSizeTouch() const;

    virtual std::optional<std::string> getCustomTTSMessage() const;

    virtual bool _isActivationTimeCheckEnabled() const;

    virtual ::EventResult onPlayerTick(::Player&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EmoteGameTip(std::shared_ptr<ClientInstanceScreenModel> const&);
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
    MCNAPI bool $canIgnoreInterruption(::GameTipConstants::Interruption);

    MCNAPI std::string $getAnimationPrefix() const;

    MCNAPI ::GameTip::UIAnchors $getUIAnchors() const;

    MCNAPI std::string $getLocalizationPrefix() const;

    MCNAPI std::array<std::string, 2> $getCustomOffset() const;

    MCNAPI ::GameTip::ArrowDirection $getArrowDirection() const;

    MCNAPI ::GameTip::ArrowAnchor $getArrowAnchor() const;

    MCNAPI std::array<int, 2> $getAnimationSizeDesktop() const;

    MCNAPI std::array<int, 2> $getAnimationSizeTouch() const;

    MCNAPI std::optional<std::string> $getCustomTTSMessage() const;

    MCNAPI bool $_isActivationTimeCheckEnabled() const;

    MCNAPI ::EventResult $onPlayerTick(::Player&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class EmoteGameTip {};
#endif // @header-generator platform
