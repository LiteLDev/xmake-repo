#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/ContainerID.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/containers/managers/models/LevelContainerManagerModel.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
#else // @header-generator platform
#endif // @header-generator platform
class ContainerScreenContext;
class ItemStack;
class MerchantRecipe;
#if defined(LL_PLAT_A) // @header-generator platform
class Player;
struct ActorUniqueID;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class TradeContainerManagerModel : public ::LevelContainerManagerModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mCurrentIndex;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    TradeContainerManagerModel();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~TradeContainerManagerModel();
#else // @header-generator platform
    virtual ~TradeContainerManagerModel() /*override*/ = default;
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
    MCNAPI TradeContainerManagerModel(::ContainerID, ::Player&, ::ActorUniqueID const&);

    MCNAPI int getAvailableRecipeListSize();

    MCNAPI ::MerchantRecipe* getCurrentRecipe(int);

    MCNAPI std::string getDisplayName();

    MCNAPI ::Actor* getEntity() const;

    MCNAPI void recipeChanged();

    MCNAPI void setCurrentRecipeIndex(int);
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI int getAvailableRecipeListSize();

    MCAPI ::MerchantRecipe* getCurrentRecipe(int index);

    MCFOLD ::std::string getDisplayName();

    MCAPI void recipeChanged();
#endif
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
