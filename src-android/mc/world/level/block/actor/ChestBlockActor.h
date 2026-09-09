#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/ChestType.h"
#include "mc/world/level/block/actor/BlockActorRendererId.h"
#include "mc/world/level/block/actor/BlockActorType.h"
#include "mc/world/level/block/actor/RandomizableBlockActorFillingContainer.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class BlockActor;
class BlockActorDataPacket;
class BlockSource;
class ChestBlock;
class CompoundTag;
class Container;
class ContainerContentChangeListener;
class DataLoadHelper;
class ILevel;
class IVanillaRenderBlockActorComponent;
class ItemStack;
class Player;
class SaveContext;
class Vec3;
// clang-format on

class ChestBlockActor : public ::RandomizableBlockActorFillingContainer {
public:
    // ChestBlockActor inner types declare
    // clang-format off
    class ChestCloser;
    // clang-format on

    // ChestBlockActor inner types define
    class ChestCloser {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ChestBlockActor&> mChest;
        ::ll::TypedStorage<1, 1, bool>               mIsUsed;
        ::ll::TypedStorage<8, 8, ::ActorUniqueID>    mActorId;
        // NOLINTEND

    public:
        // prevent constructor by default
        ChestCloser& operator=(ChestCloser const&);
        ChestCloser(ChestCloser const&);
        ChestCloser();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void close();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                              mSpeed;
    ::ll::TypedStorage<1, 1, bool>                               mIsGlobalChest;
    ::ll::TypedStorage<1, 1, bool>                               mAlwayCheckObstructionComponent;
    ::ll::UntypedStorage<4, 4>                                   mObstructionHeight;
    bool                                                         mPairLead : 1;
    ::ll::TypedStorage<4, 4, float>                              mOpenness;
    ::ll::TypedStorage<4, 4, float>                              mOldOpenness;
    ::ll::TypedStorage<1, 1, bool>                               mIsOpen;
    ::ll::UntypedStorage<4, 4>                                   mTickInterval;
    bool                                                         mPairingChanged   : 1;
    bool                                                         mAlongX           : 1;
    bool                                                         mDeferredPairLoad : 1;
    bool                                                         mConverted        : 1;
    ::ll::TypedStorage<4, 4, int>                                mDeferredPairX;
    ::ll::TypedStorage<4, 4, int>                                mDeferredPairZ;
    ::ll::TypedStorage<8, 8, ::ChestBlockActor*>                 mLargeChestPaired;
    ::ll::TypedStorage<4, 12, ::BlockPos>                        mLargeChestPairedPosition;
    ::ll::TypedStorage<1, 2, std::optional<ChestType>>           mChestType;
    ::ll::TypedStorage<1, 1, bool>                               mIsFindable;
    ::ll::TypedStorage<8, 40, std::unordered_set<ActorUniqueID>> mOpenedByIds;
    ::ll::TypedStorage<4, 4, int>                                mUpdateFlags;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<ChestBlockActor::ChestCloser>>> mChestClosers;
    // NOLINTEND

public:
    // prevent constructor by default
    ChestBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ChestBlockActor();

    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    virtual bool save(::CompoundTag&, ::SaveContext const&) const;

    virtual bool saveItemInstanceData(::CompoundTag&) const;

    virtual void onPlace(::BlockSource&);

    virtual void onMove();

    virtual void onRemoved(::BlockSource&);

    virtual void onNeighborChanged(::BlockSource&, ::BlockPos const&);

    virtual void triggerEvent(int, int);

    virtual bool isTypeOrDerived(::BlockActorType) const;

    virtual void getDebugText(std::vector<std::string>&, ::BlockPos const&, ::BlockSource const*) const;

    virtual std::unique_ptr<BlockActorDataPacket> _getUpdatePacket(::BlockSource&);

    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    virtual ::IVanillaRenderBlockActorComponent* getCrackEntity(::BlockSource&, ::BlockPos const&);

    virtual void tick(::BlockSource&);

    virtual ::Container const* getContainer() const;

    virtual ::Container* getContainer();

    virtual std::string getName() const;

    virtual void onChanged(::BlockSource&);

    virtual void setContainerChanged(int);

    virtual void startOpen(::Actor&);

    virtual void initializeContainerContents(::BlockSource&);

    virtual int getContainerSize() const;

    virtual int getMaxStackSize() const;

    virtual ::ItemStack const& getItem(int) const;

    virtual void setItem(int, ::ItemStack const&);

    virtual void setItemWithForceBalance(int, ::ItemStack const&, bool);

    virtual void serverInitItemStackIds(int, int, std::function<void(int, const ItemStack&)>);

    virtual void loadItems(::CompoundTag const&, ::ILevel&);

    virtual bool saveItems(::CompoundTag&, ::SaveContext const&) const;

    virtual void stopOpen(::Actor&);

    virtual int clearInventory(int);

    virtual void openBy(::Player&);

    virtual bool canPushInItem(int, int, ::ItemStack const&) const;

    virtual bool canPullOutItem(int, int, ::ItemStack const&) const;

    virtual void addContentChangeListener(::ContainerContentChangeListener*);

    virtual void removeContentChangeListener(::ContainerContentChangeListener*);

    virtual bool _canOpenThis(::BlockSource&) const;

    virtual ::AABB getObstructionAABB() const;

    virtual bool _detectEntityObstruction(::BlockSource&) const;

    virtual ::SharedTypes::Legacy::LevelSoundEvent getOpenSound() const;

    virtual ::SharedTypes::Legacy::LevelSoundEvent getCloseSound() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ChestBlockActor(::BlockActorType, ::BlockActorRendererId, std::optional<ChestType>, ::BlockPos const&);

    MCNAPI void _closeChest(::BlockSource&, ::Actor*);

    MCNAPI void _pairWith(::ChestBlockActor*, ::BlockSource&, bool);

    MCNAPI bool _saveClientSideState(::CompoundTag&, ::SaveContext const&) const;

    MCNAPI void _tryToPairWith(::BlockSource&, ::BlockPos const&);

    MCNAPI bool canOpen(::BlockSource&) const;

    MCNAPI bool canPairWith(::BlockActor*, ::BlockSource&);

    MCNAPI void forceCloseChest(::BlockSource&);

    MCNAPI std::weak_ptr<ChestBlockActor::ChestCloser> getChestCloser(::Actor&);

    MCNAPI bool getIsGlobalChest();

    MCNAPI ::ChestBlockActor& getMainChest();

    MCNAPI float getModelOffsetX() const;

    MCNAPI float getOldOpenness() const;

    MCNAPI int getOpenCount() const;

    MCNAPI float getOpenness() const;

    MCNAPI ::BlockPos const& getPairedChestPosition() const;

    MCNAPI bool isFindable() const;

    MCNAPI bool isLargeChest() const;

    MCNAPI bool isMainSubchest() const;

    MCNAPI void onMove(::BlockSource&, ::BlockPos const&, ::BlockPos const&);

    MCNAPI void setFindable(bool);

    MCNAPI void unpair(::BlockSource&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<ChestBlockActor>
    createChestBlockEntity(std::optional<ChestType> const&, ::BlockPos const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BlockActorType const& TypeId();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockActorType, ::BlockActorRendererId, std::optional<ChestType>, ::BlockPos const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI bool $save(::CompoundTag&, ::SaveContext const&) const;

    MCNAPI bool $saveItemInstanceData(::CompoundTag&) const;

    MCNAPI void $onPlace(::BlockSource&);

    MCNAPI void $onMove();

    MCNAPI void $onRemoved(::BlockSource&);

    MCNAPI void $onNeighborChanged(::BlockSource&, ::BlockPos const&);

    MCNAPI void $triggerEvent(int, int);

    MCNAPI bool $isTypeOrDerived(::BlockActorType) const;

    MCNAPI void $getDebugText(std::vector<std::string>&, ::BlockPos const&, ::BlockSource const*) const;

    MCNAPI std::unique_ptr<BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCNAPI void $_onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    MCNAPI ::IVanillaRenderBlockActorComponent* $getCrackEntity(::BlockSource&, ::BlockPos const&);

    MCNAPI void $tick(::BlockSource&);

    MCNAPI ::Container const* $getContainer() const;

    MCNAPI ::Container* $getContainer();

    MCNAPI std::string $getName() const;

    MCNAPI void $onChanged(::BlockSource&);

    MCNAPI void $setContainerChanged(int);

    MCNAPI void $startOpen(::Actor&);

    MCNAPI void $initializeContainerContents(::BlockSource&);

    MCNAPI int $getContainerSize() const;

    MCNAPI int $getMaxStackSize() const;

    MCNAPI ::ItemStack const& $getItem(int) const;

    MCNAPI void $setItem(int, ::ItemStack const&);

    MCNAPI void $setItemWithForceBalance(int, ::ItemStack const&, bool);

    MCNAPI void $serverInitItemStackIds(int, int, std::function<void(int, const ItemStack&)>);

    MCNAPI void $loadItems(::CompoundTag const&, ::ILevel&);

    MCNAPI bool $saveItems(::CompoundTag&, ::SaveContext const&) const;

    MCNAPI void $stopOpen(::Actor&);

    MCNAPI int $clearInventory(int);

    MCNAPI void $openBy(::Player&);

    MCNAPI bool $canPushInItem(int, int, ::ItemStack const&) const;

    MCNAPI bool $canPullOutItem(int, int, ::ItemStack const&) const;

    MCNAPI void $addContentChangeListener(::ContainerContentChangeListener*);

    MCNAPI void $removeContentChangeListener(::ContainerContentChangeListener*);

    MCNAPI bool $_canOpenThis(::BlockSource&) const;

    MCNAPI ::AABB $getObstructionAABB() const;

    MCNAPI bool $_detectEntityObstruction(::BlockSource&) const;

    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent $getOpenSound() const;

    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent $getCloseSound() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
