#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/game/ControlOptionType.h"
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/SoundDirection.h"
#include "mc/client/gui/TitleMessage.h"
#include "mc/client/gui/oreui/routing/RouterAction.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/client/input/vanilla/remapping/ActionEnum.h"
#include "mc/deps/core/timing/Stopwatch.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/world/ContainerID.h"
#include "mc/world/actor/ai/util/BossBarColor.h"
#include "mc/world/actor/ai/util/BossEventUpdateType.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Block;
class BossEventPacket;
class ClientInstanceScreenModel;
class GamePadRemappingLayout;
class GameTipScreenController;
class GuiMessage;
class HudContainerManagerController;
class KeyboardRemappingLayout;
class Keymapping;
class RemappingLayout;
class ScoreboardScreenController;
class UIPropertyBag;
class Vec3;
struct ActorUniqueID;
namespace Bedrock::Safety { class RedactableString; }
namespace Json { class Value; }
namespace OreUI { class RouterLocation; }
namespace mce { class Color; }
// clang-format on

class HudScreenController : public ::ClientInstanceScreenController {
public:
    // HudScreenController inner types declare
    // clang-format off
    struct Tooltip;
    struct ButtonLists;
    // clang-format on

    // HudScreenController inner types define
    enum class Tooltips : uchar {
        None      = 0,
        LeftTips  = 1,
        RightTips = 2,
    };

    struct Tooltip {
    public:
        // Tooltip inner types define
        enum class Type : uchar {
            KeyboardOnly = 0,
            GamepadOnly  = 1,
            Mixed        = 2,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::Remapping::ActionEnum> action;
        ::ll::UntypedStorage<1, 12>                       type;
        ::ll::UntypedStorage<8, 48>                       generateTooltipDescription;
        ::ll::UntypedStorage<8, 32>                       keyPostfix;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Tooltip();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct ButtonLists {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<std::string>> chatbuttonList;
        ::ll::TypedStorage<8, 24, std::vector<std::string>> ttsButtonList;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ButtonLists();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                mOnBossEventWithPacketSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                mOnBossEventSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                mOnLevelSoundEvent;
    ::ll::TypedStorage<1, 1, bool>                                            mEDUDiscoveryObserved;
    ::ll::TypedStorage<4, 4, int>                                             mInputDelayTimer;
    ::ll::TypedStorage<8, 24, std::string>                                    mPopupItemText;
    ::ll::TypedStorage<8, 24, std::string>                                    mPopupJukeboxText;
    ::ll::TypedStorage<8, 24, std::string>                                    mTipText;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                     mPlayerPos;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                     mAgentPos;
    ::ll::TypedStorage<4, 4, ::ui::DirtyFlag>                                 mRecordedDirtyState;
    ::ll::TypedStorage<8, 16, std::shared_ptr<HudContainerManagerController>> mHudScreenManagerController;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ScoreboardScreenController>>    mScoreboardScreenController;
    ::ll::TypedStorage<8, 16, std::shared_ptr<GameTipScreenController>>       mGameTipScreenController;
    ::ll::TypedStorage<1, 1, bool>                                            mIsPlayerRiding;
    ::ll::TypedStorage<1, 1, bool>                                            mIsCreative;
    ::ll::TypedStorage<1, 1, bool>                                            mIsSpectator;
    ::ll::TypedStorage<1, 1, bool>                                            mIsExpediateEmoteActive;
    ::ll::TypedStorage<1, 1, bool>                                            mHasPresentedInitialChat;
    ::ll::TypedStorage<1, 1, bool>                                            mIsAutoSaving;
    ::ll::TypedStorage<1, 1, bool>                                            mIsAutoSaveTimerDone;
    ::ll::TypedStorage<8, 56, ::Stopwatch>                                    mAutoSaveTimer;
    ::ll::TypedStorage<8, 56, ::Stopwatch>                                    mHUDOpacityTimer;
    ::ll::TypedStorage<4, 4, float>                                           mHUDOpacityOverride;
    ::ll::TypedStorage<1, 1, bool>                                            mOverrideHUDOpacity;
    ::ll::TypedStorage<1, 1, bool>                                       mShouldFireInitialControlTipsActivationEvent;
    ::ll::TypedStorage<1, 1, bool>                                       mIsDisplayingGameTip;
    ::ll::TypedStorage<1, 1, bool>                                       mIsTitleOnDisplay;
    ::ll::TypedStorage<1, 1, bool>                                       mIsActionBarMessageOnDisplay;
    ::ll::TypedStorage<8, 184, ::TitleMessage>                           mTitleQueuedData;
    ::ll::TypedStorage<8, 184, ::TitleMessage>                           mTitleOnDisplayData;
    ::ll::TypedStorage<8, 24, std::vector<HudScreenController::Tooltip>> mLeftTooltips;
    ::ll::TypedStorage<8, 24, std::vector<HudScreenController::Tooltip>> mRightTooltips;
    ::ll::TypedStorage<8, 24, std::vector<HudScreenController::Tooltip>> mEmoteTooltips;
    ::ll::TypedStorage<1, 1, bool>                                       mOnNewDeathScreen;
    ::ll::TypedStorage<1, 1, bool>                                       mShowCursor;
    ::ll::TypedStorage<8, 24, std::map<OptionID, float>>                 mCustomizableFloatOptions;
    ::ll::TypedStorage<8, 24, std::set<uint>>                            mPreviouslyActiveControlOptions;
    ::ll::TypedStorage<4, 4, ::ui::DirtyFlag>                            mOnNewDeathScreenDirtyFlag;
    ::ll::TypedStorage<1, 1, bool>                                       mIsNewDeathScreenEnabled;
    ::ll::TypedStorage<1, 1, bool>                                       mProfanityFilterChanged;
    ::ll::TypedStorage<1, 1, bool>                                       mShouldUseFilteredMessage;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>           mProfanityToggleSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>           mOnRouteChangedSubscription;
    ::ll::TypedStorage<1, 1, bool>                                       mShouldShowLocatorBarPrev;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>           mSubtitlePositionSubscription;
    ::ll::UntypedStorage<1, 16>                                          mSubtitlePositionChanged;
    // NOLINTEND

public:
    // prevent constructor by default
    HudScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~HudScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void onOpen();

    virtual void onInit();

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification);

    virtual bool bind(std::string const&, uint, std::string const&, ::UIPropertyBag&);

    virtual bool bind(std::string const&, uint, int, std::string const&, uint, std::string const&, ::UIPropertyBag&);

    virtual void addStaticScreenVars(::Json::Value&);

    virtual ::ui::SceneType getSceneType() const;

    virtual void onScreenPushedAbove();

    virtual bool _isStillValid() const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit HudScreenController(std::shared_ptr<ClientInstanceScreenModel>);

    MCNAPI void _bindActionIconForGamepad(::Remapping::ActionEnum, std::string const&, ::UIPropertyBag&) const;

    MCNAPI void _bindInventoryPromptsFlyout(uint, std::string const&, ::UIPropertyBag&) const;

    MCNAPI bool
    _bindKeyboardTooltip(::HudScreenController::Tooltip const&, uint, std::string const&, ::UIPropertyBag&) const;

    MCNAPI void _bindMenuPromptsFlyout(uint, std::string const&, ::UIPropertyBag&) const;

    MCNAPI void _bindTooltipCollection(
        std::vector<HudScreenController::Tooltip> const&,
        int,
        uint,
        std::string const&,
        ::UIPropertyBag&,
        ::HudScreenController::Tooltips
    ) const;

    MCNAPI void _bindTooltipFlyout(uint, std::string const&, ::UIPropertyBag&) const;

    MCNAPI void _fireInitialControlTipsActivationEvent() const;

    MCNAPI std::string _formatButtonList(std::vector<std::string>) const;

    MCNAPI ::mce::Color _getBossColorValue(::BossBarColor) const;

    MCNAPI std::string _getContextAttackButton() const;

    MCNAPI std::string _getContextChat() const;

    MCNAPI std::string _getContextCodeBuilder() const;

    MCNAPI std::string _getContextCraftingButton() const;

    MCNAPI std::string _getContextDescendButton() const;

    MCNAPI std::string _getContextDismountButton() const;

    MCNAPI std::string _getContextDropItemButton() const;

    MCNAPI std::string _getContextEmoteButton() const;

    MCNAPI std::string _getContextImmersiveReader() const;

    MCNAPI std::string _getContextInventoryButton() const;

    MCNAPI std::string _getContextJumpButton() const;

    MCNAPI std::string _getContextToggleFlight() const;

    MCNAPI std::string _getContextUseButton() const;

    MCNAPI std::string _getEmoteName(int);

    MCNAPI void _getFloatCustomizableOptionValue(::OptionID);

    MCNAPI float _getHudAlpha();

    MCNAPI ::Keymapping const& _getKeyboardMapping(::Remapping::ActionEnum) const;

    MCNAPI ::Keymapping const& _getMapping(::Remapping::ActionEnum, ::RemappingLayout const&) const;

    MCNAPI void _handleNewActionBarMessage();

    MCNAPI void _handleSlotSelection(int, ::ContainerID);

    MCNAPI bool _isAutoSaveIconVisible();

    MCNAPI bool _isToolTipsHidden(::HudScreenController::Tooltips, ::HudScreenController::Tooltip const*) const;

    MCNAPI bool _isTouchActive() const;

    MCNAPI void _leaveControlCustomizationScreen();

    MCNAPI void _pushNewChatMessage(std::string const&, float);

    MCNAPI void _pushNewSubtitleMessage(std::string const&, float, ::SoundDirection, bool);

    MCNAPI void _recreateSubtitleContainer();

    MCNAPI void _refreshSubtitleMessages();

    MCNAPI bool _shouldShowLocatorBar() const;

    MCNAPI bool _shouldShowTags() const;

    MCNAPI bool _showClassicUI() const;

    MCNAPI bool _showPaperDoll() const;

    MCNAPI bool _showPocketUI() const;

    MCNAPI bool _showSurvivalUI() const;

    MCNAPI void displayOpenEmoteInstructions(::HudScreenController::ButtonLists const&) const;

    MCNAPI ::HudScreenController::ButtonLists const getButtonLists() const;

    MCNAPI std::string const getFormattedOpenChatMessage(std::vector<std::string> const&) const;

    MCNAPI std::string const getFormattedOpenEmoteMessage(std::vector<std::string> const&) const;

    MCNAPI ::HudScreenController::ButtonLists const getGamepadEmoteButtonLists() const;

    MCNAPI ::HudScreenController::ButtonLists const getKeyboardEmoteButtonLists() const;

    MCNAPI void setupControlCustomizationCallbacksForOptions(::ControlOptionType);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _shouldShowDefaultUseTooltip(::Block const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const*& ROOT_CONTROL_NAME();

    MCNAPI static char const*& ROOT_CONTROL_NAME_INCLUDING_NAMESPACE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<ClientInstanceScreenModel>);
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

    MCNAPI void $onInit();

    MCNAPI ::ui::DirtyFlag $handleGameEventNotification(::ui::GameEventNotification);

    MCNAPI bool $bind(std::string const&, uint, std::string const&, ::UIPropertyBag&);

    MCNAPI bool $bind(std::string const&, uint, int, std::string const&, uint, std::string const&, ::UIPropertyBag&);

    MCNAPI void $addStaticScreenVars(::Json::Value&);

    MCNAPI ::ui::SceneType $getSceneType() const;

    MCNAPI void $onScreenPushedAbove();

    MCNAPI bool $_isStillValid() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
