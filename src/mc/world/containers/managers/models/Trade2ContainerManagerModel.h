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
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // Trade2ContainerManagerModel inner types define
    enum class Slot : int {
        Item1 = 0,
        Item2 = 1,
        Sell  = 2,
        Count = 3,
    };

public:
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~Trade2ContainerManagerModel();
#else // @header-generator platform
    virtual ~Trade2ContainerManagerModel() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<ItemStack> getItemCopies() const;
#else // @header-generator platform
    virtual ::std::vector<::ItemStack> getItemCopies() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setSlot(int, ::ItemStack const&, bool);
#else // @header-generator platform
    virtual void setSlot(int slot, ::ItemStack const& item, bool) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStack const& getSlot(int) const;
#else // @header-generator platform
    virtual ::ItemStack const& getSlot(int slot) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void broadcastChanges();
#else // @header-generator platform
    virtual bool isValid(float pickRange) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isValid(float);
#else // @header-generator platform
    virtual void broadcastChanges() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ContainerScreenContext _postInit();
#else // @header-generator platform
    virtual ::ContainerScreenContext _postInit() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Trade2ContainerManagerModel(::ContainerID, ::Player&, ::ActorUniqueID const&);
#else // @header-generator platform
    MCAPI Trade2ContainerManagerModel(::ContainerID containerId, ::Player& player, ::ActorUniqueID const& uniqueId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::MerchantRecipeList* getAllTrades() const;

    MCAPI int getCurrentTradeExp() const;

    MCFOLD ::std::string getDisplayName();

    MCAPI ::std::string getDisplayNameTag() const;

    MCAPI ::Actor* getEntity() const;

    MCAPI int getEntityMaxTradeTier() const;

    MCAPI int getEntityTradeTier() const;

    MCAPI ::std::vector<int> getNumberOfTradesByTier() const;

    MCAPI ::MerchantRecipe* getSelectedTrade() const;

    MCAPI ::MerchantRecipe* getTrade(int tier, int index) const;

    MCAPI int getTradeExpForCurrentRequirement(uint currentExp) const;

    MCAPI int getTradeExpToNextRequirement(uint currentExp) const;

    MCAPI int getTradeIndex(int tier, int index) const;

    MCAPI bool hasAvailableTradeWithSecondItem() const;

    MCAPI bool isSelectedTrade(int tier, int index) const;

    MCAPI void setSelectedTrade(int index);

    MCAPI void setSelectedTrade(int tier, int index);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ContainerID, ::Player&, ::ActorUniqueID const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::ContainerID containerId, ::Player& player, ::ActorUniqueID const& uniqueId);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<ItemStack> $getItemCopies() const;
#else // @header-generator platform
    MCAPI ::std::vector<::ItemStack> $getItemCopies() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setSlot(int, ::ItemStack const&, bool);
#else // @header-generator platform
    MCAPI void $setSlot(int slot, ::ItemStack const& item, bool);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStack const& $getSlot(int) const;
#else // @header-generator platform
    MCAPI ::ItemStack const& $getSlot(int slot) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $broadcastChanges();
#else // @header-generator platform
    MCAPI bool $isValid(float pickRange);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isValid(float);
#else // @header-generator platform
    MCFOLD void $broadcastChanges();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ContainerScreenContext $_postInit();
#else // @header-generator platform
    MCAPI ::ContainerScreenContext $_postInit();


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
