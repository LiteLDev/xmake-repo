#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/client/social/IToastEventListener.h"
#include "mc/client/tutorial/game_tip_constants/Animation.h"
#include "mc/client/tutorial/game_tip_constants/Interruption.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/input/InputMode.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class GameTip;
class HudContainerManagerController;
class Option;
class ToastMessage;
class UIPropertyBag;
// clang-format on

class GameTipScreenController : public ::ClientInstanceScreenController, public ::IToastEventListener {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, std::shared_ptr<HudContainerManagerController>> mHudContainerManagerController;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<GameTip>>> mAvailableTips;
    ::ll::TypedStorage<8, 16, std::weak_ptr<GameTip>> mActiveNowTip;
    ::ll::TypedStorage<8, 16, std::weak_ptr<GameTip>> mInterruptedTip;
    ::ll::TypedStorage<4, 4, float> mActiveNowTipGuiScale;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mActiveDisplayFactoryName;
    ::ll::TypedStorage<8, 40, std::unordered_set<GameTipConstants::Interruption>> mInterruptions;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>>> mCooldownAfterStoppedDisplaying;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>>> mCooldownAfterInterruption;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastTipStoppedDisplayingTime;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastInterruptionFinishedTime;
    ::ll::TypedStorage<4, 4, ::InputMode> mInputModeLastTick;
    ::ll::TypedStorage<1, 1, bool> mFirstTick;
    ::ll::TypedStorage<1, 1, bool> mUpdateBinds;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mGametipOptionSubscription;
    ::ll::UntypedStorage<1, 16> mShowGameTipsAnimations;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    GameTipScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GameTipScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void onOpen();

    virtual void onTerminate();

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification);

    virtual void handleToastEvent(::IToastEventListener::ToastEventType const, ::ToastMessage const);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GameTipScreenController(
        std::shared_ptr<ClientInstanceScreenModel>,
        std::shared_ptr<HudContainerManagerController>
    );

    MCNAPI void _addInterruption(::GameTipConstants::Interruption);

    MCNAPI void _destroyActiveTip();

    MCNAPI void _displayActiveTip(::GameTipConstants::Animation const);

    MCNAPI void _displayNewTip(std::shared_ptr<GameTip> const&);

    MCNAPI void _gametipOptionCallback(::Option const&);

    MCNAPI void _instantiateTips();

    MCNAPI bool isDisplayingTip() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<ClientInstanceScreenModel>, std::shared_ptr<HudContainerManagerController>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ui::DirtyFlag $tick();

    MCNAPI void $onOpen();

    MCNAPI void $onTerminate();

    MCNAPI ::ui::DirtyFlag $handleGameEventNotification(::ui::GameEventNotification);

    MCNAPI void $handleToastEvent(::IToastEventListener::ToastEventType const, ::ToastMessage const);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
