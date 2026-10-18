#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/block/actor/DecoratedPotAnimation.h"
#include "mc/world/level/block/actor/RandomizableBlockActorContainer.h"

// auto generated forward declare list
// clang-format off
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class ItemStackBase;
class Player;
class SaveContext;
// clang-format on

class DecoratedPotBlockActor : public ::RandomizableBlockActorContainer {
public:
    // DecoratedPotBlockActor inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum PotFace : uint64 {
#else // @header-generator platform
    enum class PotFace : uint64 {
#endif // @header-generator platform
        Back  = 0,
        Left  = 1,
        Right = 2,
        Front = 3,
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using SherdList = std::array<std::string, 4>;
#else // @header-generator platform
    using SherdList = ::std::array<::std::string, 4>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 96, std::array<std::string, 4>> mSherdItemNames;
    ::ll::TypedStorage<8, 152, ::ItemStack>               mContainedItem;
    ::ll::TypedStorage<1, 1, ::DecoratedPotAnimation>     mAnimation;
    ::ll::TypedStorage<4, 4, int>                         mAnimationTick;
#else // @header-generator platform
    ::ll::TypedStorage<8, 128, ::std::array<::std::string, 4>> mSherdItemNames;
    ::ll::TypedStorage<8, 152, ::ItemStack>                    mContainedItem;
    ::ll::TypedStorage<1, 1, ::DecoratedPotAnimation>          mAnimation;
    ::ll::TypedStorage<4, 4, int>                              mAnimationTick;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    DecoratedPotBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~DecoratedPotBlockActor();
#else // @header-generator platform
    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool save(::CompoundTag&, ::SaveContext const&) const;
#else // @header-generator platform
    virtual void tick(::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<BlockActorDataPacket> _getUpdatePacket(::BlockSource&);
#else // @header-generator platform
    virtual void serverInitItemStackIds(
        int containerSlot,
        int,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&);
#else // @header-generator platform
    virtual int getContainerSize() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick(::BlockSource&);
#else // @header-generator platform
    virtual int getMaxStackSize() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void serverInitItemStackIds(int, int, std::function<void(int, const ItemStack&)>);
#else // @header-generator platform
    virtual ::ItemStack const& getItem(int) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getContainerSize() const;
#else // @header-generator platform
    virtual void setItem(int, ::ItemStack const& item) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getMaxStackSize() const;
#else // @header-generator platform
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStack const& getItem(int) const;

    virtual void setItem(int, ::ItemStack const&);
#else // @header-generator platform
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit DecoratedPotBlockActor(::BlockPos const&);
#else // @header-generator platform
    MCAPI explicit DecoratedPotBlockActor(::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _setContainedItem(::ItemStack const&);
#else // @header-generator platform
    MCAPI void _setContainedItem(::ItemStack const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void fromItem(::ItemStack const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void fromItem(::ItemStack const& item);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::DecoratedPotAnimation getAnimation() const;

    MCNAPI float getAnimationProgress(float) const;

    MCNAPI std::array<std::string, 4> const& getSherdNames() const;

    MCNAPI void tryAddItem(::Player&);
#else // @header-generator platform
    MCAPI void tryAddItem(::Player& player);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool _areDefaultSherds(std::array<std::string, 4> const&);
#else // @header-generator platform
    MCAPI static bool _areDefaultSherds(::std::array<::std::string, 4> const& sherds);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string getDelimitedConcatenatedSherdNames(::CompoundTag const*);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::std::string getDelimitedConcatenatedSherdNames(::CompoundTag const* userData);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void removeDefaultSherdsFromUserData(::ItemStackBase&);
#else // @header-generator platform
    MCAPI static void removeDefaultSherdsFromUserData(::ItemStackBase& itemInstance);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void saveSherdsToItemForInventoryRendering(::ItemStack&, std::string const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static void
    saveSherdsToItemForInventoryRendering(::ItemStack& itemInstance, ::std::string const& screenSherdNames);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void saveSherdsToTag(::CompoundTag&, std::array<std::string, 4> const&, bool);
#else // @header-generator platform
    MCAPI static void
    saveSherdsToTag(::CompoundTag& tag, ::std::array<::std::string, 4> const& sherds, bool forceSaveDefaultSherds);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::DecoratedPotBlockActor* tryGet(::BlockSource&, ::BlockPos const&);

    MCNAPI static std::optional<std::array<std::string, 4>> tryGetSherdsFromTag(::CompoundTag const&);
#else // @header-generator platform
    MCAPI static ::std::optional<::std::array<::std::string, 4>> tryGetSherdsFromTag(::CompoundTag const& tag);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::array<std::string, 4> const& DEFAULT_SHERD_LIST();
#else // @header-generator platform
    MCAPI static ::std::array<::std::string, 4> const& DEFAULT_SHERD_LIST();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::BlockPos const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::BlockPos const& pos);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    MCAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $save(::CompoundTag&, ::SaveContext const&) const;
#else // @header-generator platform
    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);
#else // @header-generator platform
    MCAPI void $tick(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_onUpdatePacket(::CompoundTag const&, ::BlockSource&);
#else // @header-generator platform
    MCAPI void
    $serverInitItemStackIds(int containerSlot, int, ::std::function<void(int, ::ItemStack const&)> onNetIdChanged);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick(::BlockSource&);
#else // @header-generator platform
    MCFOLD int $getContainerSize() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $serverInitItemStackIds(int, int, std::function<void(int, const ItemStack&)>);
#else // @header-generator platform
    MCFOLD int $getMaxStackSize() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getContainerSize() const;
#else // @header-generator platform
    MCAPI ::ItemStack const& $getItem(int) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getMaxStackSize() const;
#else // @header-generator platform
    MCAPI void $setItem(int, ::ItemStack const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStack const& $getItem(int) const;
#else // @header-generator platform
    MCFOLD ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setItem(int, ::ItemStack const&);
#else // @header-generator platform
    MCFOLD void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MCNAPI static void** $vftableForIVanillaMainBlockActorComponent();

#endif // @header-generator platform
    MCNAPI static void** $vftable();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    MCNAPI static void** $vftableForBlockActor();

    MCNAPI static void** $vftableForIVanillaRenderBlockActorComponent();

    MCNAPI static void** $vftableForIVanillaTickBlockActorComponent();
#endif // @header-generator platform
    // NOLINTEND
};
