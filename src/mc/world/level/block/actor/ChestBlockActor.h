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
#if defined(LL_PLAT_A) // @header-generator platform
class ChestBlock;
#else // @header-generator platform
#endif // @header-generator platform
class CompoundTag;
class Container;
class ContainerContentChangeListener;
class DataLoadHelper;
class ILevel;
class IVanillaRenderBlockActorComponent;
class ItemStack;
class Player;
class SaveContext;
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void close();
#else // @header-generator platform
        MCAPI void close();
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                  mSpeed;
    ::ll::TypedStorage<1, 1, bool>                                   mIsGlobalChest;
    ::ll::TypedStorage<1, 1, bool>                                   mAlwayCheckObstructionComponent;
    ::ll::TypedStorage<4, 4, float>                                  mObstructionHeight;
    bool                                                             mPairLead : 1;
    ::ll::TypedStorage<4, 4, float>                                  mOpenness;
    ::ll::TypedStorage<4, 4, float>                                  mOldOpenness;
    ::ll::TypedStorage<1, 1, bool>                                   mIsOpen;
    ::ll::TypedStorage<4, 4, int>                                    mTickInterval;
    bool                                                             mPairingChanged   : 1;
    bool                                                             mAlongX           : 1;
    bool                                                             mDeferredPairLoad : 1;
    bool                                                             mConverted        : 1;
    ::ll::TypedStorage<4, 4, int>                                    mDeferredPairX;
    ::ll::TypedStorage<4, 4, int>                                    mDeferredPairZ;
    ::ll::TypedStorage<8, 8, ::ChestBlockActor*>                     mLargeChestPaired;
    ::ll::TypedStorage<4, 12, ::BlockPos>                            mLargeChestPairedPosition;
    ::ll::TypedStorage<1, 2, ::std::optional<::ChestType>>           mChestType;
    ::ll::TypedStorage<1, 1, bool>                                   mIsFindable;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::ActorUniqueID>> mOpenedByIds;
    ::ll::TypedStorage<4, 4, int>                                    mUpdateFlags;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::ChestBlockActor::ChestCloser>>> mChestClosers;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ChestBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ChestBlockActor();
#else // @header-generator platform
    virtual ~ChestBlockActor() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    virtual bool isTypeOrDerived(::BlockActorType type) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool save(::CompoundTag&, ::SaveContext const&) const;
#else // @header-generator platform
    virtual int getContainerSize() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool saveItemInstanceData(::CompoundTag&) const;
#else // @header-generator platform
    virtual int getMaxStackSize() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlace(::BlockSource&);
#else // @header-generator platform
    virtual ::std::string getName() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onMove();
#else // @header-generator platform
    virtual ::ItemStack const& getItem(int slot) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onRemoved(::BlockSource&);
#else // @header-generator platform
    virtual void setItem(int slot, ::ItemStack const& item) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onNeighborChanged(::BlockSource&, ::BlockPos const&);
#else // @header-generator platform
    virtual void setItemWithForceBalance(int slot, ::ItemStack const& item, bool forceBalanced) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void triggerEvent(int, int);
#else // @header-generator platform
    virtual void serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isTypeOrDerived(::BlockActorType) const;
#else // @header-generator platform
    virtual void loadItems(::CompoundTag const& base, ::ILevel& level);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void getDebugText(std::vector<std::string>&, ::BlockPos const&, ::BlockSource const*) const;
#else // @header-generator platform
    virtual void load(::ILevel& level, ::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<BlockActorDataPacket> _getUpdatePacket(::BlockSource&);
#else // @header-generator platform
    virtual bool saveItems(::CompoundTag& base, ::SaveContext const& saveContext) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&);
#else // @header-generator platform
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::IVanillaRenderBlockActorComponent* getCrackEntity(::BlockSource&, ::BlockPos const&);
#else // @header-generator platform
    virtual bool saveItemInstanceData(::CompoundTag& base) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick(::BlockSource&);
#else // @header-generator platform
    virtual void tick(::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Container const* getContainer() const;
#else // @header-generator platform
    virtual void triggerEvent(int b0, int b1) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Container* getContainer();
#else // @header-generator platform
    virtual void startOpen(::Actor& actor) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getName() const;
#else // @header-generator platform
    virtual void onRemoved(::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onChanged(::BlockSource&);
#else // @header-generator platform
    virtual void stopOpen(::Actor& actor) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setContainerChanged(int);
#else // @header-generator platform
    virtual void onChanged(::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void startOpen(::Actor&);
#else // @header-generator platform
    virtual void onNeighborChanged(::BlockSource& region, ::BlockPos const& position) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initializeContainerContents(::BlockSource&);
#else // @header-generator platform
    virtual ::IVanillaRenderBlockActorComponent*
    getCrackEntity(::BlockSource& region, ::BlockPos const& pos) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getContainerSize() const;
#else // @header-generator platform
    virtual int clearInventory(int resizeTo) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getMaxStackSize() const;
#else // @header-generator platform
    virtual ::Container* getContainer() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStack const& getItem(int) const;
#else // @header-generator platform
    virtual ::Container const* getContainer() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setItem(int, ::ItemStack const&);
#else // @header-generator platform
    virtual void onMove() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setItemWithForceBalance(int, ::ItemStack const&, bool);
#else // @header-generator platform
    virtual void onPlace(::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void serverInitItemStackIds(int, int, std::function<void(int, const ItemStack&)>);
#else // @header-generator platform
    virtual void openBy(::Player& p);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void loadItems(::CompoundTag const&, ::ILevel&);
#else // @header-generator platform
    virtual void setContainerChanged(int slot) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool saveItems(::CompoundTag&, ::SaveContext const&) const;
#else // @header-generator platform
    virtual bool canPushInItem(int slot, int face, ::ItemStack const& item) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void stopOpen(::Actor&);
#else // @header-generator platform
    virtual bool canPullOutItem(int, int, ::ItemStack const&) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int clearInventory(int);
#else // @header-generator platform
    virtual void getDebugText(
        ::std::vector<::std::string>& outputInfo,
        ::BlockPos const&             debugPos,
        ::BlockSource const*          region
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void openBy(::Player&);
#else // @header-generator platform
    virtual void addContentChangeListener(::ContainerContentChangeListener* listener) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canPushInItem(int, int, ::ItemStack const&) const;
#else // @header-generator platform
    virtual void removeContentChangeListener(::ContainerContentChangeListener* listener) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canPullOutItem(int, int, ::ItemStack const&) const;
#else // @header-generator platform
    virtual void initializeContainerContents(::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addContentChangeListener(::ContainerContentChangeListener*);
#else // @header-generator platform
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void removeContentChangeListener(::ContainerContentChangeListener*);
#else // @header-generator platform
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _canOpenThis(::BlockSource&) const;
#else // @header-generator platform
    virtual bool _canOpenThis(::BlockSource& region) const;
#endif // @header-generator platform

    virtual ::AABB getObstructionAABB() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _detectEntityObstruction(::BlockSource&) const;
#else // @header-generator platform
    virtual bool _detectEntityObstruction(::BlockSource& region) const;
#endif // @header-generator platform

    virtual ::SharedTypes::Legacy::LevelSoundEvent getOpenSound() const;

    virtual ::SharedTypes::Legacy::LevelSoundEvent getCloseSound() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ChestBlockActor(::BlockActorType, ::BlockActorRendererId, std::optional<ChestType>, ::BlockPos const&);
#else // @header-generator platform
    MCAPI ChestBlockActor(
        ::BlockActorType             type,
        ::BlockActorRendererId       renderId,
        ::std::optional<::ChestType> chestType,
        ::BlockPos const&            pos
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _closeChest(::BlockSource&, ::Actor*);
#else // @header-generator platform
    MCAPI void _closeChest(::BlockSource& region, ::Actor* actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _pairWith(::ChestBlockActor*, ::BlockSource&, bool);
#else // @header-generator platform
    MCAPI void _pairWith(::ChestBlockActor* chest, ::BlockSource& region, bool isLead);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _saveClientSideState(::CompoundTag&, ::SaveContext const&) const;
#else // @header-generator platform
    MCAPI bool _saveClientSideState(::CompoundTag& tag, ::SaveContext const& saveContext) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _tryToPairWith(::BlockSource&, ::BlockPos const&);
#else // @header-generator platform
    MCAPI void _tryToPairWith(::BlockSource& region, ::BlockPos const& position);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool canOpen(::BlockSource&) const;
#else // @header-generator platform
    MCAPI bool canPairWith(::BlockActor* entity, ::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool canPairWith(::BlockActor*, ::BlockSource&);
#else // @header-generator platform
    MCAPI ::std::weak_ptr<::ChestBlockActor::ChestCloser> getChestCloser(::Actor& closingActor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void unpair(::BlockSource& region);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unique_ptr<ChestBlockActor>
    createChestBlockEntity(std::optional<ChestType> const&, ::BlockPos const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BlockActorType const& TypeId();
#else // @header-generator platform
    MCAPI static ::std::unique_ptr<::ChestBlockActor>
    createChestBlockEntity(::std::optional<::ChestType> const& chestType, ::BlockPos const& pos);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::BlockActorType, ::BlockActorRendererId, std::optional<ChestType>, ::BlockPos const&);
#else // @header-generator platform
    MCAPI void* $ctor(
        ::BlockActorType             type,
        ::BlockActorRendererId       renderId,
        ::std::optional<::ChestType> chestType,
        ::BlockPos const&            pos
    );
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
    MCAPI int $getContainerSize() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $saveItemInstanceData(::CompoundTag&) const;
#else // @header-generator platform
    MCFOLD int $getMaxStackSize() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onPlace(::BlockSource&);
#else // @header-generator platform
    MCAPI ::std::string $getName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onMove();
#else // @header-generator platform
    MCAPI ::ItemStack const& $getItem(int slot) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onRemoved(::BlockSource&);
#else // @header-generator platform
    MCAPI void $setItem(int slot, ::ItemStack const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onNeighborChanged(::BlockSource&, ::BlockPos const&);
#else // @header-generator platform
    MCFOLD void $setItemWithForceBalance(int slot, ::ItemStack const& item, bool forceBalanced);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $triggerEvent(int, int);
#else // @header-generator platform
    MCAPI void $serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isTypeOrDerived(::BlockActorType) const;
#else // @header-generator platform
    MCAPI void $loadItems(::CompoundTag const& base, ::ILevel& level);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $getDebugText(std::vector<std::string>&, ::BlockPos const&, ::BlockSource const*) const;
#else // @header-generator platform
    MCAPI void $load(::ILevel& level, ::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);
#else // @header-generator platform
    MCAPI bool $saveItems(::CompoundTag& base, ::SaveContext const& saveContext) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_onUpdatePacket(::CompoundTag const&, ::BlockSource&);
#else // @header-generator platform
    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::IVanillaRenderBlockActorComponent* $getCrackEntity(::BlockSource&, ::BlockPos const&);
#else // @header-generator platform
    MCAPI bool $saveItemInstanceData(::CompoundTag& base) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick(::BlockSource&);
#else // @header-generator platform
    MCAPI void $tick(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Container const* $getContainer() const;
#else // @header-generator platform
    MCAPI void $triggerEvent(int b0, int b1);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Container* $getContainer();
#else // @header-generator platform
    MCAPI void $startOpen(::Actor& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getName() const;
#else // @header-generator platform
    MCAPI void $onRemoved(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onChanged(::BlockSource&);
#else // @header-generator platform
    MCAPI void $stopOpen(::Actor& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setContainerChanged(int);
#else // @header-generator platform
    MCAPI void $onChanged(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $startOpen(::Actor&);
#else // @header-generator platform
    MCFOLD void $onNeighborChanged(::BlockSource& region, ::BlockPos const& position);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initializeContainerContents(::BlockSource&);
#else // @header-generator platform
    MCAPI ::IVanillaRenderBlockActorComponent* $getCrackEntity(::BlockSource& region, ::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getContainerSize() const;
#else // @header-generator platform
    MCAPI int $clearInventory(int resizeTo);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getMaxStackSize() const;
#else // @header-generator platform
    MCFOLD ::Container* $getContainer();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStack const& $getItem(int) const;
#else // @header-generator platform
    MCFOLD ::Container const* $getContainer() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setItem(int, ::ItemStack const&);
#else // @header-generator platform
    MCFOLD void $onMove();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setItemWithForceBalance(int, ::ItemStack const&, bool);
#else // @header-generator platform
    MCAPI void $onPlace(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $serverInitItemStackIds(int, int, std::function<void(int, const ItemStack&)>);
#else // @header-generator platform
    MCAPI void $openBy(::Player& p);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $loadItems(::CompoundTag const&, ::ILevel&);
#else // @header-generator platform
    MCAPI void $setContainerChanged(int slot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $saveItems(::CompoundTag&, ::SaveContext const&) const;
#else // @header-generator platform
    MCFOLD bool $canPushInItem(int slot, int face, ::ItemStack const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $stopOpen(::Actor&);
#else // @header-generator platform
    MCFOLD bool $canPullOutItem(int, int, ::ItemStack const&) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $clearInventory(int);
#else // @header-generator platform
    MCAPI void $getDebugText(
        ::std::vector<::std::string>& outputInfo,
        ::BlockPos const&             debugPos,
        ::BlockSource const*          region
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $openBy(::Player&);
#else // @header-generator platform
    MCAPI void $addContentChangeListener(::ContainerContentChangeListener* listener);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canPushInItem(int, int, ::ItemStack const&) const;
#else // @header-generator platform
    MCAPI void $removeContentChangeListener(::ContainerContentChangeListener* listener);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canPullOutItem(int, int, ::ItemStack const&) const;
#else // @header-generator platform
    MCAPI void $initializeContainerContents(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addContentChangeListener(::ContainerContentChangeListener*);
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $removeContentChangeListener(::ContainerContentChangeListener*);
#else // @header-generator platform
    MCFOLD void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_canOpenThis(::BlockSource&) const;
#else // @header-generator platform
    MCAPI bool $_canOpenThis(::BlockSource& region) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::AABB $getObstructionAABB() const;
#else // @header-generator platform
    MCAPI ::AABB $getObstructionAABB() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_detectEntityObstruction(::BlockSource&) const;
#else // @header-generator platform
    MCAPI bool $_detectEntityObstruction(::BlockSource& region) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent $getOpenSound() const;
#else // @header-generator platform
    MCAPI ::SharedTypes::Legacy::LevelSoundEvent $getOpenSound() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent $getCloseSound() const;
#else // @header-generator platform
    MCAPI ::SharedTypes::Legacy::LevelSoundEvent $getCloseSound() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MCNAPI static void** $vftableForIVanillaRenderBlockActorComponent();

    MCNAPI static void** $vftableForIVanillaTickBlockActorComponent();

    MCNAPI static void** $vftableForIVanillaMainBlockActorComponent();

    MCNAPI static void** $vftableForBlockActor();

#endif // @header-generator platform
    MCNAPI static void** $vftable();
    // NOLINTEND
};
