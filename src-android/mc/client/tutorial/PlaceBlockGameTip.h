#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/tutorial/GameTip.h"
#include "mc/deps/core/utility/BasicTimer.h"
#include "mc/world/events/BlockEventListener.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/PlayerEventListener.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class ClientInstanceScreenModel;
class Player;
class PlayerInventory;
// clang-format on

class PlaceBlockGameTip : public ::GameTip, public ::BlockEventListener, public ::PlayerEventListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000>>> mHeldItemStartingEffectiveTime;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>>>    mHeldItemDisplaySeconds;
    ::ll::TypedStorage<2, 2, short>                                                 mHeldItemId;
    ::ll::UntypedStorage<1, 14>                                                     mHeldItemValid;
    ::ll::UntypedStorage<8, 64>                                                     mInventoryTimer;
    // NOLINTEND

public:
    // prevent constructor by default
    PlaceBlockGameTip();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlaceBlockGameTip();

    virtual std::string getAnimationPrefix() const;

    virtual std::string getLocalizationPrefix() const;

    virtual std::string getLocalizationDetail() const;

    virtual std::array<int, 2> getAnimationSizeDesktop() const;

    virtual std::array<int, 2> getAnimationSizeTouch() const;

    virtual ::EventResult onBlockPlacedByPlayer(::Player&, ::Block const&, ::BlockPos const&, bool);

    virtual ::EventResult onPlayerTick(::Player&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PlaceBlockGameTip(std::shared_ptr<ClientInstanceScreenModel> const&);

    MCNAPI void _handlePlaceBlockGameTip(::Player&);
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

    MCNAPI std::string $getLocalizationDetail() const;

    MCNAPI std::array<int, 2> $getAnimationSizeDesktop() const;

    MCNAPI std::array<int, 2> $getAnimationSizeTouch() const;

    MCNAPI ::EventResult $onBlockPlacedByPlayer(::Player&, ::Block const&, ::BlockPos const&, bool);

    MCNAPI ::EventResult $onPlayerTick(::Player&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
