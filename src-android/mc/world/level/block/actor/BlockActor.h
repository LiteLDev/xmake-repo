#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/actor/BlockActorType.h"

// auto generated forward declare list
// clang-format off
class BlockActorDataPacket;
class BlockSource;
class BlockType;
class CompoundTag;
class DataLoadHelper;
class DynamicPropertiesBlockActorComponent;
class ILevel;
class IVanillaMainBlockActorComponent;
class IVanillaRenderBlockActorComponent;
class IVanillaTickBlockActorComponent;
class LevelChunk;
class Player;
class RandomizableContainerBlockActorComponent;
class SaveContext;
// clang-format on

class BlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>                                               mPosition;
    ::ll::TypedStorage<1, 1, ::BlockActorType const>                                    mType;
    ::ll::TypedStorage<8, 8, std::unique_ptr<DynamicPropertiesBlockActorComponent>>     mDynamicProperties;
    ::ll::TypedStorage<8, 8, std::unique_ptr<RandomizableContainerBlockActorComponent>> mRandomizableContainer;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockActor();

    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    virtual bool save(::CompoundTag&, ::SaveContext const&) const;

    virtual bool saveItemInstanceData(::CompoundTag&) const;

    virtual void saveBlockData(::CompoundTag&, ::BlockSource&) const;

    virtual void loadBlockData(::CompoundTag const&, ::BlockSource&, ::DataLoadHelper&);

    virtual void onCustomTagLoadDone(::BlockSource&);

    virtual void loadStatic();

    virtual void onPlace(::BlockSource&);

    virtual void onMove();

    virtual void onRemoved(::BlockSource&);

    virtual void onChunkLoaded(::LevelChunk&);

    virtual void onChunkUnloaded(::LevelChunk&);

    virtual void onSubChunkLoaded(::LevelChunk&, short, bool);

    virtual void onNeighborChanged(::BlockSource&, ::BlockPos const&);

    virtual void triggerEvent(int, int);

    virtual bool isTypeOrDerived(::BlockActorType) const;

    virtual void getDebugText(std::vector<std::string>&, ::BlockPos const&, ::BlockSource const*) const;

    virtual std::unique_ptr<BlockActorDataPacket> _getUpdatePacket(::BlockSource&);

    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    virtual bool _playerCanUpdate(::Player const&) const;

    virtual ::IVanillaRenderBlockActorComponent* _getRenderComponent();

    virtual ::IVanillaRenderBlockActorComponent const* _getRenderComponent() const;

    virtual ::IVanillaTickBlockActorComponent* _getTickComponent();

    virtual ::IVanillaTickBlockActorComponent const* _getTickComponent() const;

    virtual ::IVanillaMainBlockActorComponent* _getMainComponent();

    virtual ::IVanillaMainBlockActorComponent const* _getMainComponent() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockActor(::BlockActorType, ::BlockPos const&);

    MCNAPI std::unique_ptr<BlockActorDataPacket> getClientUpdatePacket(::BlockSource&);

    MCNAPI ::BlockPos const& getPosition() const;

    MCNAPI std::unique_ptr<BlockActorDataPacket> getServerUpdatePacket(::BlockSource&);

    MCNAPI ::BlockActorType getType() const;

    MCNAPI bool isType(::BlockActorType) const;

    MCNAPI bool onUpdatePacket(::CompoundTag const&, ::BlockSource&, ::Player const*);

    MCNAPI bool playerCanUpdate(::Player const*) const;

    MCNAPI void setPosition(::BlockPos const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::BlockActor* _getBlockActor(::BlockSource&, ::BlockPos const&);

    MCNAPI static ::BlockPos getPosition(::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI static bool isType(::BlockActor&, ::BlockActorType);

    MCNAPI static std::shared_ptr<BlockActor>
    loadStatic(::BlockType const&, ::BlockPos const&, ::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& KEY_VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockActorType, ::BlockPos const&);
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

    MCNAPI void $saveBlockData(::CompoundTag&, ::BlockSource&) const;

    MCNAPI void $loadBlockData(::CompoundTag const&, ::BlockSource&, ::DataLoadHelper&);

    MCNAPI void $onCustomTagLoadDone(::BlockSource&);

    MCNAPI void $loadStatic();

    MCNAPI void $onPlace(::BlockSource&);

    MCNAPI void $onMove();

    MCNAPI void $onRemoved(::BlockSource&);

    MCNAPI void $onChunkLoaded(::LevelChunk&);

    MCNAPI void $onChunkUnloaded(::LevelChunk&);

    MCNAPI void $onSubChunkLoaded(::LevelChunk&, short, bool);

    MCNAPI void $onNeighborChanged(::BlockSource&, ::BlockPos const&);

    MCNAPI void $triggerEvent(int, int);

    MCNAPI bool $isTypeOrDerived(::BlockActorType) const;

    MCNAPI void $getDebugText(std::vector<std::string>&, ::BlockPos const&, ::BlockSource const*) const;

    MCNAPI std::unique_ptr<BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCNAPI void $_onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    MCNAPI bool $_playerCanUpdate(::Player const&) const;

    MCNAPI ::IVanillaRenderBlockActorComponent* $_getRenderComponent();

    MCNAPI ::IVanillaRenderBlockActorComponent const* $_getRenderComponent() const;

    MCNAPI ::IVanillaTickBlockActorComponent* $_getTickComponent();

    MCNAPI ::IVanillaTickBlockActorComponent const* $_getTickComponent() const;

    MCNAPI ::IVanillaMainBlockActorComponent* $_getMainComponent();

    MCNAPI ::IVanillaMainBlockActorComponent const* $_getMainComponent() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
