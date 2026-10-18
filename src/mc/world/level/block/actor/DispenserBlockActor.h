#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/legacy/ContainerType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/block/actor/BlockActorType.h"
#include "mc/world/level/block/actor/RandomizableBlockActorContainer.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class Container;
class DataLoadHelper;
class ILevel;
#if defined(LL_PLAT_A) // @header-generator platform
class Random;
#else // @header-generator platform
#endif // @header-generator platform
class SaveContext;
// clang-format on

class DispenserBlockActor : public ::RandomizableBlockActorContainer {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 0> mItems;
#else // @header-generator platform
    ::ll::TypedStorage<8, 1368, ::ItemStack[9]> mItems;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    DispenserBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~DispenserBlockActor();
#else // @header-generator platform
    virtual bool isTypeOrDerived(::BlockActorType type) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    virtual int getContainerSize() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool save(::CompoundTag&, ::SaveContext const&) const;
#else // @header-generator platform
    virtual ::Container* getContainer() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onMove();
#else // @header-generator platform
    virtual ::Container const* getContainer() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isTypeOrDerived(::BlockActorType) const;
#else // @header-generator platform
    virtual ::ItemStack const& getItem(int slot) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<BlockActorDataPacket> _getUpdatePacket(::BlockSource&);
#else // @header-generator platform
    virtual void setItem(int slot, ::ItemStack const& item) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&);
#else // @header-generator platform
    virtual int getMaxStackSize() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Container const* getContainer() const;
#else // @header-generator platform
    virtual ::std::string getName() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Container* getContainer();
#else // @header-generator platform
    virtual void startOpen(::Actor& actor) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getName() const;
#else // @header-generator platform
    virtual void stopOpen(::Actor& actor) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void startOpen(::Actor&);
#else // @header-generator platform
    virtual void load(::ILevel& level, ::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getContainerSize() const;
#else // @header-generator platform
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStack const& getItem(int) const;
#else // @header-generator platform
    virtual void onMove() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setItem(int, ::ItemStack const&);
#else // @header-generator platform
    virtual void serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getMaxStackSize() const;
#else // @header-generator platform
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void stopOpen(::Actor&);
#else // @header-generator platform
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void serverInitItemStackIds(int, int, std::function<void(int, const ItemStack&)>);
#else // @header-generator platform
    virtual ~DispenserBlockActor() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit DispenserBlockActor(::BlockPos);
#else // @header-generator platform
    MCAPI explicit DispenserBlockActor(::BlockPos pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI DispenserBlockActor(::BlockPos, ::BlockActorType);

    MCNAPI int getRandomSlot(::Random&);
#else // @header-generator platform
    MCAPI DispenserBlockActor(::BlockPos pos, ::BlockActorType type);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::BlockPos);
#else // @header-generator platform
    MCAPI void* $ctor(::BlockPos pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::BlockPos, ::BlockActorType);
#else // @header-generator platform
    MCAPI void* $ctor(::BlockPos pos, ::BlockActorType type);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    MCAPI bool $isTypeOrDerived(::BlockActorType type) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $save(::CompoundTag&, ::SaveContext const&) const;
#else // @header-generator platform
    MCFOLD int $getContainerSize() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onMove();
#else // @header-generator platform
    MCFOLD ::Container* $getContainer();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isTypeOrDerived(::BlockActorType) const;
#else // @header-generator platform
    MCFOLD ::Container const* $getContainer() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);
#else // @header-generator platform
    MCAPI ::ItemStack const& $getItem(int slot) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_onUpdatePacket(::CompoundTag const&, ::BlockSource&);
#else // @header-generator platform
    MCAPI void $setItem(int slot, ::ItemStack const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Container const* $getContainer() const;
#else // @header-generator platform
    MCFOLD int $getMaxStackSize() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Container* $getContainer();
#else // @header-generator platform
    MCAPI ::std::string $getName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getName() const;
#else // @header-generator platform
    MCFOLD void $startOpen(::Actor& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $startOpen(::Actor&);
#else // @header-generator platform
    MCFOLD void $stopOpen(::Actor& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getContainerSize() const;
#else // @header-generator platform
    MCAPI void $load(::ILevel& level, ::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStack const& $getItem(int) const;
#else // @header-generator platform
    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setItem(int, ::ItemStack const&);
#else // @header-generator platform
    MCFOLD void $onMove();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getMaxStackSize() const;
#else // @header-generator platform
    MCAPI void $serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $stopOpen(::Actor&);
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $serverInitItemStackIds(int, int, std::function<void(int, const ItemStack&)>);
#else // @header-generator platform
    MCFOLD void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MCNAPI static void** $vftableForIVanillaRenderBlockActorComponent();

    MCNAPI static void** $vftableForIVanillaTickBlockActorComponent();

#endif // @header-generator platform
    MCNAPI static void** $vftable();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    MCNAPI static void** $vftableForBlockActor();

    MCNAPI static void** $vftableForIVanillaMainBlockActorComponent();
#endif // @header-generator platform
    // NOLINTEND
};
