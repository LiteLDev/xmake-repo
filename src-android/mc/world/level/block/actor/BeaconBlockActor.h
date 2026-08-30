#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Container.h"
#include "mc/world/level/block/BlockColor.h"
#include "mc/world/level/block/actor/BeaconBeamSection.h"
#include "mc/world/level/block/actor/VanillaBlockActor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class BlockType;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class ItemDescriptor;
class ItemStack;
class MobEffect;
class SaveContext;
class Vec3;
// clang-format on

class BeaconBlockActor : public ::VanillaBlockActor, public ::Container {
public:
    // BeaconBlockActor inner types define
    using BeaconBeamSections = std::vector<BeaconBeamSection>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<BeaconBeamSection>>             mBeamSections;
    ::ll::TypedStorage<4, 4, float>                                       mBeamRot;
    ::ll::TypedStorage<4, 4, int>                                         mNumLevels;
    ::ll::TypedStorage<4, 4, int>                                         mNumLevelsSet;
    ::ll::TypedStorage<4, 4, int>                                         mBlockRefreshCounter;
    ::ll::TypedStorage<4, 4, int>                                         mPrimaryEffectId;
    ::ll::TypedStorage<4, 4, int>                                         mSecondaryEffectId;
    ::ll::TypedStorage<4, 4, int>                                         mPrimaryEffectTier;
    ::ll::TypedStorage<4, 4, int>                                         mSecondaryEffectTier;
    ::ll::TypedStorage<8, 24, std::vector<const MobEffect*>>              mBeaconEffects;
    ::ll::TypedStorage<8, 24, std::vector<std::vector<const MobEffect*>>> mTierEffects;
    ::ll::TypedStorage<1, 1, bool>                                        mPermanentlyRendered;
    ::ll::TypedStorage<1, 1, bool>                                        mClientRenderingNeedsUpdate;
    ::ll::TypedStorage<1, 1, bool>                                        mIsBlockBaseLoaded;
    // NOLINTEND

public:
    // prevent constructor by default
    BeaconBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BeaconBlockActor();

    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    virtual bool save(::CompoundTag&, ::SaveContext const&) const;

    virtual std::unique_ptr<BlockActorDataPacket> _getUpdatePacket(::BlockSource&);

    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    virtual bool isPermanentlyRendered() const;

    virtual bool isWithinRenderDistance(::Vec3 const&) const;

    virtual bool hasAlphaLayer() const;

    virtual void tick(::BlockSource&);

    virtual ::Container const* getContainer() const;

    virtual ::Container* getContainer();

    virtual std::string getName() const;

    virtual ::ItemStack const& getItem(int) const;

    virtual void setItem(int, ::ItemStack const&);

    virtual void removeItem(int, int);

    virtual int getContainerSize() const;

    virtual int getMaxStackSize() const;

    virtual void startOpen(::Actor&);

    virtual void stopOpen(::Actor&);

    virtual void serverInitItemStackIds(int, int, std::function<void(int, const ItemStack&)>);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BeaconBlockActor(::BlockPos const&, bool);

    MCNAPI int _getEffectTier(int) const;

    MCNAPI void _notifyBeamSectionsChange(::BlockSource&, std::vector<BeaconBeamSection> const&);

    MCNAPI bool _saveClientSideState(::CompoundTag&, ::SaveContext const&) const;

    MCNAPI void checkShape(::BlockSource&);

    MCNAPI bool clientRenderingNeedsUpdate() const;

    MCNAPI void generateBeamSections(::BlockSource&);

    MCNAPI ::CompoundTag getBeaconData(::SaveContext const&);

    MCNAPI std::vector<const MobEffect*> const& getEffects() const;

    MCNAPI int getMaxSelections() const;

    MCNAPI bool isEffectAvailable(int) const;

    MCNAPI bool isSecondaryAvailable() const;

    MCNAPI bool setPrimaryEffect(int);

    MCNAPI bool setSecondaryEffect(int);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isPaymentItem(::ItemDescriptor const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const&, bool);
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

    MCNAPI std::unique_ptr<BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCNAPI void $_onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    MCNAPI bool $isPermanentlyRendered() const;

    MCNAPI bool $isWithinRenderDistance(::Vec3 const&) const;

    MCNAPI bool $hasAlphaLayer() const;

    MCNAPI void $tick(::BlockSource&);

    MCNAPI ::Container const* $getContainer() const;

    MCNAPI ::Container* $getContainer();

    MCNAPI std::string $getName() const;

    MCNAPI ::ItemStack const& $getItem(int) const;

    MCNAPI void $setItem(int, ::ItemStack const&);

    MCNAPI void $removeItem(int, int);

    MCNAPI int $getContainerSize() const;

    MCNAPI int $getMaxStackSize() const;

    MCNAPI void $startOpen(::Actor&);

    MCNAPI void $stopOpen(::Actor&);

    MCNAPI void $serverInitItemStackIds(int, int, std::function<void(int, const ItemStack&)>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
