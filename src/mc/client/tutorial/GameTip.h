#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/client/tutorial/game_tip_constants/Interruption.h"
#include "mc/deps/input/InputMode.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class RectangleArea;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class GameTip {
public:
    // GameTip inner types declare
    // clang-format off
    struct UIAnchors;
    // clang-format on

    // GameTip inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class Status : int {
        Inactive    = 0,
        Prioritized = 1,
        Ready       = 2,
        Displayed   = 3,
        Stopped     = 4,
        Finished    = 5,
    };
#else // @header-generator platform
    enum class ArrowAnchor : int {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    enum class ArrowDirection : int {
        None  = 0,
        Left  = 1,
        Right = 2,
        Up    = 3,
        Down  = 4,
    };
#else // @header-generator platform
    enum class ArrowDirection : int {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    enum class ArrowAnchor : int {
        Left   = 0,
        Right  = 1,
        Middle = 2,
        Top    = 3,
        Bottom = 4,
        None   = 5,
    };
#else // @header-generator platform
    enum class Status : int {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct UIAnchors {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> mAnchorFrom;
        ::ll::TypedStorage<8, 24, std::string> mAnchorTo;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~UIAnchors();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using TimePoint =
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, std::shared_ptr<ClientInstanceScreenModel>> mClientInstanceScreenModel;
    ::ll::TypedStorage<4, 4, ::GameTip::Status> mStatus;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>>> mInactiveDurationSeconds;
    ::ll::TypedStorage<4, 4, ::OptionID const> mShowingsRemainOption;
    ::ll::TypedStorage<8, 24, std::vector<InputMode>> mValidInputModes;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastUpdateTime;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000>>> mEffectiveDuration;
    ::ll::TypedStorage<1, 1, bool> mActivationTimeCheck;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    GameTip();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GameTip() = 0;

    virtual bool isAvailableForGameType(::GameType) const;

    virtual std::chrono::duration<long long, std::ratio<1, 1>> getDisplayDurationSeconds() const;

    virtual std::chrono::duration<long long, std::ratio<1, 1>> getCooldownAfterStopped() const;

    virtual bool canIgnoreInterruption(::GameTipConstants::Interruption);

    virtual void prepareForDisplay();

    virtual void handleButtonPressed(std::string const);

    virtual std::string getAnimationPrefix() const = 0;

    virtual std::string getAnimationSuffix() const;

    virtual ::GameTip::UIAnchors getUIAnchors() const;

    virtual std::string getLocalizationPrefix() const = 0;

    virtual std::string getLocalizationDetail() const;

    virtual std::vector<std::string> getLocalizationParameters() const;

    virtual std::array<int, 2> getAnimationSize() const;

    virtual std::array<std::string, 2> getCustomOffset() const;

    virtual ::GameTip::ArrowDirection getArrowDirection() const;

    virtual std::string getArrowOffset() const;

    virtual ::GameTip::ArrowAnchor getArrowAnchor() const;

    virtual std::array<int, 2> getAnimationSizeDesktop() const = 0;

    virtual std::array<int, 2> getAnimationSizeTouch() const = 0;

    virtual std::optional<std::string> getCustomUIFactoryName() const;

    virtual std::optional<std::string> getCustomTTSMessage() const;

    virtual bool _isActivationTimeCheckEnabled() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _activate(bool);

    MCNAPI void _discard(bool);

    MCNAPI ::InputMode _getCurrentInputMode() const;

    MCNAPI std::chrono::duration<long long, std::ratio<1, 1000>> _getEffectiveTime() const;

    MCNAPI float _getHalfOfScreenWidth() const;

    MCNAPI ::RectangleArea _getTouchControlArea(uint const) const;

    MCNAPI void _reset();

    MCNAPI void _resolve();

    MCNAPI void _setActivationTimeCheck(bool);

    MCNAPI bool canIgnoreInterruptions(std::unordered_set<GameTipConstants::Interruption> const&);

    MCNAPI ::OptionID getOptionId() const;

    MCNAPI bool hasPriority() const;

    MCNAPI bool isFinished() const;

    MCNAPI bool isReadyForDisplay() const;

    MCNAPI void markDisplayed();

    MCNAPI void markInterrupted();

    MCNAPI bool shouldStopDisplaying() const;

    MCNAPI void updateTimeAndStatus();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::chrono::duration<long long, std::ratio<1, 1>> const& DEFAULT_DISPLAY_TIME();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isAvailableForGameType(::GameType) const;

    MCNAPI std::chrono::duration<long long, std::ratio<1, 1>> $getDisplayDurationSeconds() const;

    MCNAPI std::chrono::duration<long long, std::ratio<1, 1>> $getCooldownAfterStopped() const;

    MCNAPI bool $canIgnoreInterruption(::GameTipConstants::Interruption);

    MCNAPI void $prepareForDisplay();

    MCNAPI void $handleButtonPressed(std::string const);

    MCNAPI std::string $getAnimationSuffix() const;

    MCNAPI ::GameTip::UIAnchors $getUIAnchors() const;

    MCNAPI std::string $getLocalizationDetail() const;

    MCNAPI std::vector<std::string> $getLocalizationParameters() const;

    MCNAPI std::array<int, 2> $getAnimationSize() const;

    MCNAPI std::array<std::string, 2> $getCustomOffset() const;

    MCNAPI ::GameTip::ArrowDirection $getArrowDirection() const;

    MCNAPI std::string $getArrowOffset() const;

    MCNAPI ::GameTip::ArrowAnchor $getArrowAnchor() const;

    MCNAPI std::optional<std::string> $getCustomUIFactoryName() const;

    MCNAPI std::optional<std::string> $getCustomTTSMessage() const;

    MCNAPI bool $_isActivationTimeCheckEnabled() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    struct UIAnchors {};
#endif // @header-generator platform
};
