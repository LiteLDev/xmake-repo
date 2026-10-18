#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/tutorial/HotbarGameTip.h"
#include "mc/client/tutorial/game_tip_constants/Interruption.h"
#include "mc/deps/core/utility/BasicTimer.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/PlayerEventListener.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class ItemStack;
class Player;
class PlayerInventory;
// clang-format on

class HotbarSelectionGameTip : public ::HotbarGameTip, public ::PlayerEventListener {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000>>> mBlockItemPresentInHotbarStartingEffectiveTime;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>>> mItemInHotbarActivationDurationSeconds;
    ::ll::UntypedStorage<8, 64> mActivationCheckTimer;
    ::ll::TypedStorage<1, 1, bool> mFirstTick;
    ::ll::TypedStorage<4, 4, int> mInitialSelectedSlotIndex;
    ::ll::TypedStorage<4, 4, int> mSelectedSlotIndexPreviousTick;
    ::ll::TypedStorage<4, 4, uint> mNumberOfTicksOnSelectedSlot;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    HotbarSelectionGameTip();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HotbarSelectionGameTip();

    virtual bool canIgnoreInterruption(::GameTipConstants::Interruption);

    virtual std::string getAnimationPrefix() const;

    virtual std::string getLocalizationPrefix() const;

    virtual std::vector<std::string> getLocalizationParameters() const;

    virtual std::array<int, 2> getAnimationSizeDesktop() const;

    virtual std::array<int, 2> getAnimationSizeTouch() const;

    virtual ::EventResult onPlayerTick(::Player&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit HotbarSelectionGameTip(std::shared_ptr<ClientInstanceScreenModel> const&);

    MCNAPI void _handleHotbarSelectionGameTip(::Player&);
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

    MCNAPI std::string $getLocalizationPrefix() const;

    MCNAPI std::vector<std::string> $getLocalizationParameters() const;

    MCNAPI std::array<int, 2> $getAnimationSizeDesktop() const;

    MCNAPI std::array<int, 2> $getAnimationSizeTouch() const;

    MCNAPI ::EventResult $onPlayerTick(::Player&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class HotbarSelectionGameTip {};
#endif // @header-generator platform
