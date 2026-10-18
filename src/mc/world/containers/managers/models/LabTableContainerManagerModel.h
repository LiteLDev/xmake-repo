#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"
#include "mc/world/containers/managers/models/LevelContainerManagerModel.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class ItemStack;
class Player;
// clang-format on

class LabTableContainerManagerModel : public ::LevelContainerManagerModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mBlockPos;
    // NOLINTEND

public:
    // prevent constructor by default
    LabTableContainerManagerModel();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LabTableContainerManagerModel();
#else // @header-generator platform
    virtual ~LabTableContainerManagerModel() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<ItemStack> getItemCopies() const;
#else // @header-generator platform
    virtual ::std::vector<::ItemStack> getItemCopies() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setSlot(int, ::ItemStack const&, bool);
#else // @header-generator platform
    virtual void setSlot(int slot, ::ItemStack const& item, bool fromNetwork) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStack const& getSlot(int) const;
#else // @header-generator platform
    virtual ::ItemStack const& getSlot(int slot) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setData(int, int);
#else // @header-generator platform
    virtual void setData(int id, int value) /*override*/;
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
    MCNAPI LabTableContainerManagerModel(::ContainerID, ::Player&, ::BlockPos const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& INPUT_SLOTS();
#else // @header-generator platform
    MCAPI LabTableContainerManagerModel(::ContainerID containerId, ::Player& player, ::BlockPos const& blockPos);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ContainerID, ::Player&, ::BlockPos const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::ContainerID containerId, ::Player& player, ::BlockPos const& blockPos);
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
    MCAPI void $setSlot(int slot, ::ItemStack const& item, bool fromNetwork);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStack const& $getSlot(int) const;
#else // @header-generator platform
    MCAPI ::ItemStack const& $getSlot(int slot) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setData(int, int);
#else // @header-generator platform
    MCFOLD void $setData(int id, int value);
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
