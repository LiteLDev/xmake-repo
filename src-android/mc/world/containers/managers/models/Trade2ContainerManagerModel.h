#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"
#include "mc/world/containers/managers/models/LevelContainerManagerModel.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ContainerScreenContext;
class ItemStack;
class MerchantRecipe;
class MerchantRecipeList;
class Player;
struct ActorUniqueID;
// clang-format on

class Trade2ContainerManagerModel : public ::LevelContainerManagerModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mSelectedTrade;
    ::ll::TypedStorage<4, 4, int> mTraderVariant;
    // NOLINTEND

public:
    // prevent constructor by default
    Trade2ContainerManagerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Trade2ContainerManagerModel();

    virtual std::vector<ItemStack> getItemCopies() const;

    virtual void setSlot(int, ::ItemStack const&, bool);

    virtual ::ItemStack const& getSlot(int) const;

    virtual void broadcastChanges();

    virtual bool isValid(float);

    virtual ::ContainerScreenContext _postInit();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Trade2ContainerManagerModel(::ContainerID, ::Player&, ::ActorUniqueID const&);

    MCNAPI ::MerchantRecipeList* getAllTrades() const;

    MCNAPI int getCurrentTradeExp() const;

    MCNAPI std::string getDisplayName();

    MCNAPI std::string getDisplayNameTag() const;

    MCNAPI ::Actor* getEntity() const;

    MCNAPI ::ItemStack const& getEntityCarriedItem() const;

    MCNAPI int getEntityMaxTradeTier() const;

    MCNAPI int getEntityTradeTier() const;

    MCNAPI std::vector<int> getNumberOfTradesByTier() const;

    MCNAPI ::ItemStack const& getPlayerCarriedItem() const;

    MCNAPI ::MerchantRecipe* getSelectedTrade() const;

    MCNAPI int getSelectedTradeIndex() const;

    MCNAPI ::MerchantRecipe* getTrade(int, int) const;

    MCNAPI int getTradeExpForCurrentRequirement(uint) const;

    MCNAPI int getTradeExpToNextRequirement(uint) const;

    MCNAPI int getTradeIndex(int, int) const;

    MCNAPI bool hasAvailableTradeWithSecondItem() const;

    MCNAPI bool isSelectedTrade(int, int) const;

    MCNAPI void setSelectedTrade(int);

    MCNAPI void setSelectedTrade(int, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ContainerID, ::Player&, ::ActorUniqueID const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::vector<ItemStack> $getItemCopies() const;

    MCNAPI void $setSlot(int, ::ItemStack const&, bool);

    MCNAPI ::ItemStack const& $getSlot(int) const;

    MCNAPI void $broadcastChanges();

    MCNAPI bool $isValid(float);

    MCNAPI ::ContainerScreenContext $_postInit();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
