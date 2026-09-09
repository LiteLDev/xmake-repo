#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/tutorial/PlayerEventGameTip.h"
#include "mc/world/ContainerContentChangeListener.h"
#include "mc/world/events/BlockEventListener.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class ClientInstanceScreenModel;
class ItemStack;
class Player;
// clang-format on

class PlaceCraftingTableGameTip : public ::PlayerEventGameTip,
                                  public ::BlockEventListener,
                                  public ::ContainerContentChangeListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mCraftingTableWasInInventory;
    // NOLINTEND

public:
    // prevent constructor by default
    PlaceCraftingTableGameTip();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlaceCraftingTableGameTip();

    virtual std::string getAnimationPrefix() const;

    virtual std::string getLocalizationPrefix() const;

    virtual std::array<int, 2> getAnimationSizeDesktop() const;

    virtual std::array<int, 2> getAnimationSizeTouch() const;

    virtual ::EventResult onBlockPlacedByPlayer(::Player&, ::Block const&, ::BlockPos const&, bool);

    virtual void containerContentChanged(int);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PlaceCraftingTableGameTip(std::shared_ptr<ClientInstanceScreenModel> const&);

    MCNAPI void _checkInventoryForCraftingTable();
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

    MCNAPI ::EventResult $onBlockPlacedByPlayer(::Player&, ::Block const&, ::BlockPos const&, bool);

    MCNAPI void $containerContentChanged(int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
