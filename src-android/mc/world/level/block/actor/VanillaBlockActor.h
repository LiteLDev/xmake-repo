#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
#include "mc/safety/RedactableString.h"
#include "mc/world/actor/ActorTerrainInterlockData.h"
#include "mc/world/level/block/actor/BlockActor.h"
#include "mc/world/level/block/actor/BlockActorRendererId.h"
#include "mc/world/level/block/actor/BlockActorType.h"
#include "mc/world/level/block/actor/component/IVanillaMainBlockActorComponent.h"
#include "mc/world/level/block/actor/component/IVanillaRenderBlockActorComponent.h"
#include "mc/world/level/block/actor/component/IVanillaTickBlockActorComponent.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class CompoundTag;
class Container;
class DataLoadHelper;
class ILevel;
class LevelChunk;
class SaveContext;
class Vec3;
// clang-format on

class VanillaBlockActor : public ::BlockActor,
                          public ::IVanillaMainBlockActorComponent,
                          public ::IVanillaRenderBlockActorComponent,
                          public ::IVanillaTickBlockActorComponent {
public:
    // VanillaBlockActor inner types define
    enum class Property : uchar {
        Changed             = 0,
        Movable             = 1,
        ClientSideOnly      = 2,
        SaveCustomName      = 3,
        CanRenderCustomName = 4,
        _count              = 5,
    };

    using Properties = ::Bedrock::EnumSet<VanillaBlockActor::Property, (VanillaBlockActor::Property)5>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                  mTickCount;
    ::ll::UntypedStorage<1, 1>                                     mProperties;
    ::ll::TypedStorage<4, 24, ::AABB>                              mBB;
    ::ll::TypedStorage<1, 1, ::BlockActorRendererId>               mRendererId;
    ::ll::TypedStorage<8, 24, ::ActorTerrainInterlockData>         mTerrainInterlockData;
    ::ll::TypedStorage<8, 56, ::Bedrock::Safety::RedactableString> mCustomName;
    ::ll::TypedStorage<8, 24, std::string>                         mFilteredCustomName;
    // NOLINTEND

public:
    // prevent constructor by default
    VanillaBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VanillaBlockActor();

    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    virtual bool save(::CompoundTag&, ::SaveContext const&) const;

    virtual void loadStatic();

    virtual ::IVanillaRenderBlockActorComponent* _getRenderComponent();

    virtual ::IVanillaRenderBlockActorComponent const* _getRenderComponent() const;

    virtual ::IVanillaTickBlockActorComponent* _getTickComponent();

    virtual ::IVanillaTickBlockActorComponent const* _getTickComponent() const;

    virtual ::IVanillaMainBlockActorComponent* _getMainComponent();

    virtual ::IVanillaMainBlockActorComponent const* _getMainComponent() const;

    virtual ::BlockActor const& getBlockActor() const;

    virtual ::BlockActor& getBlockActor();

    virtual ::BlockPos const& getBlockActorPosition() const;

    virtual ::BlockActorType getBlockActorType() const;

    virtual ::BlockActorRendererId getRendererId() const;

    virtual bool isPermanentlyRendered() const;

    virtual bool isWithinRenderDistance(::Vec3 const&) const;

    virtual bool hasAlphaLayer() const;

    virtual float getShadowRadius(::BlockSource&) const;

    virtual bool isInWorld() const;

    virtual ::IVanillaRenderBlockActorComponent* getCrackEntity(::BlockSource&, ::BlockPos const&);

    virtual ::AABB const& getAABB() const;

    virtual void setAABB(::AABB const&);

    virtual ::ActorTerrainInterlockData& getEntityTerrainInterlockData();

    virtual ::ActorTerrainInterlockData const& getEntityTerrainInterlockDataConst() const;

    virtual void tick(::BlockSource&);

    virtual int getTickCount() const;

    virtual ::Container const* getContainer() const;

    virtual ::Container* getContainer();

    virtual void eraseLootTable();

    virtual std::string getName() const;

    virtual std::string getImmersiveReaderText(::BlockSource&);

    virtual bool canRenderCustomName() const;

    virtual bool hasCustomName() const;

    virtual ::Bedrock::Safety::RedactableString const& getCustomName() const;

    virtual void setCustomName(::Bedrock::Safety::RedactableString const&);

    virtual bool isCustomNameSaved() const;

    virtual ::Bedrock::Safety::RedactableString getDisplayName() const;

    virtual bool hasFilteredNameTag() const;

    virtual std::string getFilteredNameTag() const;

    virtual void setFilteredNameTag(std::string const&);

    virtual std::vector<std::string> getUgcStrings(::CompoundTag const&) const;

    virtual std::vector<std::string> getFilteredUgcStrings(::CompoundTag const&) const;

    virtual void setUgcStrings(::CompoundTag&, std::vector<std::string> const&) const;

    virtual void setFilteredUgcStrings(::CompoundTag&, std::vector<std::string> const&) const;

    virtual bool validateData(::CompoundTag const&) const;

    virtual void fixupOnLoad(::LevelChunk&);

    virtual void setChanged();

    virtual bool isChanged() const;

    virtual void onChanged(::BlockSource&);

    virtual void _resetAABB();

    virtual void _setCanRenderCustomName(bool);

    virtual void _setCustomNameSaved(bool);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VanillaBlockActor(::BlockActorType, ::BlockPos const&, ::BlockActorRendererId);

    MCNAPI void _loadCustomNameFromUpdatePacket(::CompoundTag const&);

    MCNAPI void _saveCustomNameToUpdatePacket(::CompoundTag&) const;

    MCNAPI bool isClientSideOnly() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockActorType, ::BlockPos const&, ::BlockActorRendererId);
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

    MCNAPI void $loadStatic();

    MCNAPI ::IVanillaRenderBlockActorComponent* $_getRenderComponent();

    MCNAPI ::IVanillaRenderBlockActorComponent const* $_getRenderComponent() const;

    MCNAPI ::IVanillaTickBlockActorComponent* $_getTickComponent();

    MCNAPI ::IVanillaTickBlockActorComponent const* $_getTickComponent() const;

    MCNAPI ::IVanillaMainBlockActorComponent* $_getMainComponent();

    MCNAPI ::IVanillaMainBlockActorComponent const* $_getMainComponent() const;

    MCNAPI ::BlockActor const& $getBlockActor() const;

    MCNAPI ::BlockActor& $getBlockActor();

    MCNAPI ::BlockPos const& $getBlockActorPosition() const;

    MCNAPI ::BlockActorType $getBlockActorType() const;

    MCNAPI ::BlockActorRendererId $getRendererId() const;

    MCNAPI bool $isPermanentlyRendered() const;

    MCNAPI bool $isWithinRenderDistance(::Vec3 const&) const;

    MCNAPI bool $hasAlphaLayer() const;

    MCNAPI float $getShadowRadius(::BlockSource&) const;

    MCNAPI bool $isInWorld() const;

    MCNAPI ::IVanillaRenderBlockActorComponent* $getCrackEntity(::BlockSource&, ::BlockPos const&);

    MCNAPI ::AABB const& $getAABB() const;

    MCNAPI void $setAABB(::AABB const&);

    MCNAPI ::ActorTerrainInterlockData& $getEntityTerrainInterlockData();

    MCNAPI ::ActorTerrainInterlockData const& $getEntityTerrainInterlockDataConst() const;

    MCNAPI void $tick(::BlockSource&);

    MCNAPI int $getTickCount() const;

    MCNAPI ::Container const* $getContainer() const;

    MCNAPI ::Container* $getContainer();

    MCNAPI void $eraseLootTable();

    MCNAPI std::string $getName() const;

    MCNAPI std::string $getImmersiveReaderText(::BlockSource&);

    MCNAPI bool $canRenderCustomName() const;

    MCNAPI bool $hasCustomName() const;

    MCNAPI ::Bedrock::Safety::RedactableString const& $getCustomName() const;

    MCNAPI void $setCustomName(::Bedrock::Safety::RedactableString const&);

    MCNAPI bool $isCustomNameSaved() const;

    MCNAPI ::Bedrock::Safety::RedactableString $getDisplayName() const;

    MCNAPI bool $hasFilteredNameTag() const;

    MCNAPI std::string $getFilteredNameTag() const;

    MCNAPI void $setFilteredNameTag(std::string const&);

    MCNAPI std::vector<std::string> $getUgcStrings(::CompoundTag const&) const;

    MCNAPI std::vector<std::string> $getFilteredUgcStrings(::CompoundTag const&) const;

    MCNAPI void $setUgcStrings(::CompoundTag&, std::vector<std::string> const&) const;

    MCNAPI void $setFilteredUgcStrings(::CompoundTag&, std::vector<std::string> const&) const;

    MCNAPI bool $validateData(::CompoundTag const&) const;

    MCNAPI void $fixupOnLoad(::LevelChunk&);

    MCNAPI void $setChanged();

    MCNAPI bool $isChanged() const;

    MCNAPI void $onChanged(::BlockSource&);

    MCNAPI void $_resetAABB();

    MCNAPI void $_setCanRenderCustomName(bool);

    MCNAPI void $_setCustomNameSaved(bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
