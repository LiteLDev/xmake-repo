#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/block/actor/BlockActorRendererId.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/block/actor/ChestBlockActor.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class ItemStack;
class ItemStackBase;
class SaveContext;
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ShulkerBoxBlockActor : public ::ChestBlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar> mFacing;
    ::ll::TypedStorage<1, 1, bool>  mFacingChanged;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ShulkerBoxBlockActor();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ShulkerBoxBlockActor();
#else // @header-generator platform
    virtual ~ShulkerBoxBlockActor() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    virtual ::std::string getName() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool save(::CompoundTag&, ::SaveContext const&) const;
#else // @header-generator platform
    virtual int getMaxStackSize() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlace(::BlockSource&);
#else // @header-generator platform
    virtual void onPlace(::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<BlockActorDataPacket> _getUpdatePacket(::BlockSource&);
#else // @header-generator platform
    virtual void load(::ILevel& level, ::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&);
#else // @header-generator platform
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick(::BlockSource&);
#else // @header-generator platform
    virtual void tick(::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getName() const;
#else // @header-generator platform
    virtual bool canPushInItem(int slot, int face, ::ItemStack const& item) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void startOpen(::Actor&);
#else // @header-generator platform
    virtual void startOpen(::Actor& actor) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getMaxStackSize() const;
#else // @header-generator platform
    virtual void stopOpen(::Actor& actor) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void stopOpen(::Actor&);
#else // @header-generator platform
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canPushInItem(int, int, ::ItemStack const&) const;
#else // @header-generator platform
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::AABB getObstructionAABB() const;
#else // @header-generator platform
    virtual ::SharedTypes::Legacy::LevelSoundEvent getOpenSound() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _detectEntityObstruction(::BlockSource&) const;
#else // @header-generator platform
    virtual ::SharedTypes::Legacy::LevelSoundEvent getCloseSound() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::SharedTypes::Legacy::LevelSoundEvent getOpenSound() const;
#else // @header-generator platform
    virtual ::AABB getObstructionAABB() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::SharedTypes::Legacy::LevelSoundEvent getCloseSound() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI uchar getFacingDir();

    MCNAPI void setFacingDir(uchar);

    MCNAPI void setupRedstoneComponent(::BlockSource&) const;
#else // @header-generator platform
    virtual bool _detectEntityObstruction(::BlockSource& region) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unique_ptr<ShulkerBoxBlockActor> createShulkerBoxBlockEntity(::BlockPos const&);
#else // @header-generator platform
    MCAPI static ::std::unique_ptr<::ShulkerBoxBlockActor> createShulkerBoxBlockEntity(::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool itemAllowed(::ItemStackBase const&);
#else // @header-generator platform
    MCAPI static bool itemAllowed(::ItemStackBase const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool itemAllowedInSlot(int, ::ItemStackBase const&, int);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& ITEMS_SIZE();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static bool itemAllowedInSlot(int, ::ItemStackBase const& item, int);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    MCAPI ::std::string $getName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $save(::CompoundTag&, ::SaveContext const&) const;
#else // @header-generator platform
    MCFOLD int $getMaxStackSize() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onPlace(::BlockSource&);
#else // @header-generator platform
    MCAPI void $onPlace(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);
#else // @header-generator platform
    MCAPI void $load(::ILevel& level, ::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_onUpdatePacket(::CompoundTag const&, ::BlockSource&);
#else // @header-generator platform
    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick(::BlockSource&);
#else // @header-generator platform
    MCAPI void $tick(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getName() const;
#else // @header-generator platform
    MCFOLD bool $canPushInItem(int slot, int face, ::ItemStack const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $startOpen(::Actor&);
#else // @header-generator platform
    MCAPI void $startOpen(::Actor& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getMaxStackSize() const;
#else // @header-generator platform
    MCAPI void $stopOpen(::Actor& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $stopOpen(::Actor&);
#else // @header-generator platform
    MCFOLD ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canPushInItem(int, int, ::ItemStack const&) const;
#else // @header-generator platform
    MCFOLD void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::AABB $getObstructionAABB() const;
#else // @header-generator platform
    MCFOLD ::SharedTypes::Legacy::LevelSoundEvent $getOpenSound() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_detectEntityObstruction(::BlockSource&) const;
#else // @header-generator platform
    MCFOLD ::SharedTypes::Legacy::LevelSoundEvent $getCloseSound() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent $getOpenSound() const;
#else // @header-generator platform
    MCAPI ::AABB $getObstructionAABB() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent $getCloseSound() const;
#else // @header-generator platform
    MCFOLD bool $_detectEntityObstruction(::BlockSource& region) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MCNAPI static void** $vftableForIVanillaMainBlockActorComponent();

    MCNAPI static void** $vftableForIVanillaRenderBlockActorComponent();

#endif // @header-generator platform
    MCNAPI static void** $vftable();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    MCNAPI static void** $vftableForBlockActor();

    MCNAPI static void** $vftableForIVanillaTickBlockActorComponent();
#endif // @header-generator platform
    // NOLINTEND
};
