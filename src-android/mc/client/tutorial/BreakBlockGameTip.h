#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/tutorial/PlayerEventGameTip.h"
#include "mc/client/tutorial/game_tip_constants/Interruption.h"
#include "mc/deps/core/utility/BasicTimer.h"
#include "mc/world/events/BlockEventListener.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Block;
class ClientInstanceScreenModel;
class ItemStackBase;
class Player;
// clang-format on

class BreakBlockGameTip : public ::PlayerEventGameTip, public ::BlockEventListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64>           mClickTimer;
    ::ll::TypedStorage<4, 4, int>         mBlockClickedRapidlyCounter;
    ::ll::TypedStorage<4, 12, ::BlockPos> mBlockPos;
    ::ll::TypedStorage<1, 1, bool>        mDoOncePerTouch;
    ::ll::UntypedStorage<4, 12>           mNumberOfBlocksBrokenByPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    BreakBlockGameTip();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~BreakBlockGameTip();

    virtual bool canIgnoreInterruption(::GameTipConstants::Interruption);

    virtual std::string getAnimationPrefix() const;

    virtual std::string getLocalizationPrefix() const;

    virtual std::string getLocalizationDetail() const;

    virtual std::array<int, 2> getAnimationSizeDesktop() const;

    virtual std::array<int, 2> getAnimationSizeTouch() const;

    virtual ::EventResult onBlockDestroyedByPlayer(::Player&, ::Block const&, ::BlockPos const&, ::ItemStackBase const&, ::ItemStackBase const&);

    virtual ::EventResult onStartDestroyBlock(::Player&, ::BlockPos const&, uchar&);

    virtual ::EventResult onPlayerTick(::Player&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BreakBlockGameTip(std::shared_ptr<ClientInstanceScreenModel> const&);

    MCNAPI void _handleBreakBlockGameTip(bool);
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

    MCNAPI std::string $getLocalizationDetail() const;

    MCNAPI std::array<int, 2> $getAnimationSizeDesktop() const;

    MCNAPI std::array<int, 2> $getAnimationSizeTouch() const;

    MCNAPI ::EventResult $onBlockDestroyedByPlayer(
        ::Player&,
        ::Block const&,
        ::BlockPos const&,
        ::ItemStackBase const&,
        ::ItemStackBase const&
    );

    MCNAPI ::EventResult $onStartDestroyBlock(::Player&, ::BlockPos const&, uchar&);

    MCNAPI ::EventResult $onPlayerTick(::Player&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
