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
#if defined(LL_PLAT_A) // @header-generator platform
        _count              = 5,
#else // @header-generator platform
        Count               = 5,
#endif // @header-generator platform
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using Properties = ::Bedrock::EnumSet<VanillaBlockActor::Property, (VanillaBlockActor::Property)5>;
#else // @header-generator platform
    using Properties = ::Bedrock::EnumSet<::VanillaBlockActor::Property, 5>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                  mTickCount;
    ::ll::UntypedStorage<1, 1>                                     mProperties;
    ::ll::TypedStorage<4, 24, ::AABB>                              mBB;
    ::ll::TypedStorage<1, 1, ::BlockActorRendererId>               mRendererId;
    ::ll::TypedStorage<8, 24, ::ActorTerrainInterlockData>         mTerrainInterlockData;
    ::ll::TypedStorage<8, 56, ::Bedrock::Safety::RedactableString> mCustomName;
    ::ll::TypedStorage<8, 24, std::string>                         mFilteredCustomName;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                                  mTickCount;
    ::ll::TypedStorage<1, 1, ::Bedrock::EnumSet<::VanillaBlockActor::Property, 5>> mProperties;
    ::ll::TypedStorage<4, 24, ::AABB>                                              mBB;
    ::ll::TypedStorage<1, 1, ::BlockActorRendererId>                               mRendererId;
    ::ll::TypedStorage<8, 24, ::ActorTerrainInterlockData>                         mTerrainInterlockData;
    ::ll::TypedStorage<8, 72, ::Bedrock::Safety::RedactableString>                 mCustomName;
    ::ll::TypedStorage<8, 32, ::std::string>                                       mFilteredCustomName;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    VanillaBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~VanillaBlockActor();
#else // @header-generator platform
    virtual void loadStatic() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& helper) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool save(::CompoundTag&, ::SaveContext const&) const;
#else // @header-generator platform
    virtual bool save(::CompoundTag& tag, ::SaveContext const& context) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void loadStatic();
#else // @header-generator platform
    virtual ::BlockActor& getBlockActor() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::IVanillaRenderBlockActorComponent* _getRenderComponent();
#else // @header-generator platform
    virtual ::BlockActor const& getBlockActor() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::IVanillaRenderBlockActorComponent const* _getRenderComponent() const;
#else // @header-generator platform
    virtual ::BlockPos const& getBlockActorPosition() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::IVanillaTickBlockActorComponent* _getTickComponent();
#else // @header-generator platform
    virtual ::BlockActorType getBlockActorType() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::IVanillaTickBlockActorComponent const* _getTickComponent() const;
#else // @header-generator platform
    virtual ::BlockActorRendererId getRendererId() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::IVanillaMainBlockActorComponent* _getMainComponent();
#else // @header-generator platform
    virtual bool isPermanentlyRendered() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::IVanillaMainBlockActorComponent const* _getMainComponent() const;
#else // @header-generator platform
    virtual bool isWithinRenderDistance(::Vec3 const& cameraPosition) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BlockActor const& getBlockActor() const;
#else // @header-generator platform
    virtual bool hasAlphaLayer() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BlockActor& getBlockActor();
#else // @header-generator platform
    virtual float getShadowRadius(::BlockSource& region) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BlockPos const& getBlockActorPosition() const;
#else // @header-generator platform
    virtual bool isInWorld() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BlockActorType getBlockActorType() const;
#else // @header-generator platform
    virtual ::IVanillaRenderBlockActorComponent*
    getCrackEntity(::BlockSource& region, ::BlockPos const& pos) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BlockActorRendererId getRendererId() const;
#else // @header-generator platform
    virtual ::AABB const& getAABB() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isPermanentlyRendered() const;
#else // @header-generator platform
    virtual void setAABB(::AABB const& value) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isWithinRenderDistance(::Vec3 const&) const;
#else // @header-generator platform
    virtual ::ActorTerrainInterlockData& getEntityTerrainInterlockData() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasAlphaLayer() const;
#else // @header-generator platform
    virtual ::ActorTerrainInterlockData const& getEntityTerrainInterlockDataConst() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getShadowRadius(::BlockSource&) const;
#else // @header-generator platform
    virtual void tick(::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isInWorld() const;
#else // @header-generator platform
    virtual int getTickCount() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::IVanillaRenderBlockActorComponent* getCrackEntity(::BlockSource&, ::BlockPos const&);
#else // @header-generator platform
    virtual ::Container* getContainer() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::AABB const& getAABB() const;
#else // @header-generator platform
    virtual ::Container const* getContainer() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setAABB(::AABB const&);
#else // @header-generator platform
    virtual void eraseLootTable() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ActorTerrainInterlockData& getEntityTerrainInterlockData();
#else // @header-generator platform
    virtual ::std::string getName() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ActorTerrainInterlockData const& getEntityTerrainInterlockDataConst() const;
#else // @header-generator platform
    virtual ::std::string getImmersiveReaderText(::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick(::BlockSource&);
#else // @header-generator platform
    virtual bool canRenderCustomName() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getTickCount() const;
#else // @header-generator platform
    virtual bool hasCustomName() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Container const* getContainer() const;
#else // @header-generator platform
    virtual ::Bedrock::Safety::RedactableString const& getCustomName() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Container* getContainer();
#else // @header-generator platform
    virtual void setCustomName(::Bedrock::Safety::RedactableString const& name) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void eraseLootTable();
#else // @header-generator platform
    virtual bool isCustomNameSaved() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getName() const;
#else // @header-generator platform
    virtual ::Bedrock::Safety::RedactableString getDisplayName() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getImmersiveReaderText(::BlockSource&);
#else // @header-generator platform
    virtual bool hasFilteredNameTag() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canRenderCustomName() const;
#else // @header-generator platform
    virtual ::std::string getFilteredNameTag() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasCustomName() const;
#else // @header-generator platform
    virtual void setFilteredNameTag(::std::string const& filteredName) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Safety::RedactableString const& getCustomName() const;
#else // @header-generator platform
    virtual ::std::vector<::std::string> getUgcStrings(::CompoundTag const& tag) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setCustomName(::Bedrock::Safety::RedactableString const&);
#else // @header-generator platform
    virtual ::std::vector<::std::string> getFilteredUgcStrings(::CompoundTag const& tag) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isCustomNameSaved() const;
#else // @header-generator platform
    virtual void setUgcStrings(::CompoundTag& tag, ::std::vector<::std::string> const& list) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Safety::RedactableString getDisplayName() const;
#else // @header-generator platform
    virtual void setFilteredUgcStrings(::CompoundTag& tag, ::std::vector<::std::string> const& list) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasFilteredNameTag() const;
#else // @header-generator platform
    virtual bool validateData(::CompoundTag const& tag) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getFilteredNameTag() const;
#else // @header-generator platform
    virtual void fixupOnLoad(::LevelChunk& lc) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setFilteredNameTag(std::string const&);
#else // @header-generator platform
    virtual void setChanged() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<std::string> getUgcStrings(::CompoundTag const&) const;
#else // @header-generator platform
    virtual bool isChanged() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<std::string> getFilteredUgcStrings(::CompoundTag const&) const;
#else // @header-generator platform
    virtual void onChanged(::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setUgcStrings(::CompoundTag&, std::vector<std::string> const&) const;
#else // @header-generator platform
    virtual void _resetAABB() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setFilteredUgcStrings(::CompoundTag&, std::vector<std::string> const&) const;
#else // @header-generator platform
    virtual void _setCanRenderCustomName(bool value) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool validateData(::CompoundTag const&) const;
#else // @header-generator platform
    virtual void _setCustomNameSaved(bool saveCustomName) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fixupOnLoad(::LevelChunk&);
#else // @header-generator platform
    virtual ::IVanillaRenderBlockActorComponent const* _getRenderComponent() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setChanged();
#else // @header-generator platform
    virtual ::IVanillaRenderBlockActorComponent* _getRenderComponent() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isChanged() const;
#else // @header-generator platform
    virtual ::IVanillaTickBlockActorComponent const* _getTickComponent() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onChanged(::BlockSource&);
#else // @header-generator platform
    virtual ::IVanillaTickBlockActorComponent* _getTickComponent() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _resetAABB();
#else // @header-generator platform
    virtual ::IVanillaMainBlockActorComponent const* _getMainComponent() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _setCanRenderCustomName(bool);
#else // @header-generator platform
    virtual ::IVanillaMainBlockActorComponent* _getMainComponent() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _setCustomNameSaved(bool);
#else // @header-generator platform
    virtual ~VanillaBlockActor() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI VanillaBlockActor(::BlockActorType, ::BlockPos const&, ::BlockActorRendererId);
#else // @header-generator platform
    MCAPI VanillaBlockActor(::BlockActorType type, ::BlockPos const& pos, ::BlockActorRendererId rendererId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _loadCustomNameFromUpdatePacket(::CompoundTag const&);
#else // @header-generator platform
    MCAPI void _loadCustomNameFromUpdatePacket(::CompoundTag const& data);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _saveCustomNameToUpdatePacket(::CompoundTag&) const;

    MCNAPI bool isClientSideOnly() const;
#else // @header-generator platform
    MCAPI void _saveCustomNameToUpdatePacket(::CompoundTag& tag) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::BlockActorType, ::BlockPos const&, ::BlockActorRendererId);
#else // @header-generator platform
    MCAPI void* $ctor(::BlockActorType type, ::BlockPos const& pos, ::BlockActorRendererId rendererId);
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
    MCAPI void $loadStatic();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $save(::CompoundTag&, ::SaveContext const&) const;
#else // @header-generator platform
    MCAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& helper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $loadStatic();
#else // @header-generator platform
    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& context) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::IVanillaRenderBlockActorComponent* $_getRenderComponent();
#else // @header-generator platform
    MCFOLD ::BlockActor& $getBlockActor();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::IVanillaRenderBlockActorComponent const* $_getRenderComponent() const;
#else // @header-generator platform
    MCFOLD ::BlockActor const& $getBlockActor() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::IVanillaTickBlockActorComponent* $_getTickComponent();
#else // @header-generator platform
    MCFOLD ::BlockPos const& $getBlockActorPosition() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::IVanillaTickBlockActorComponent const* $_getTickComponent() const;
#else // @header-generator platform
    MCAPI ::BlockActorType $getBlockActorType() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::IVanillaMainBlockActorComponent* $_getMainComponent();
#else // @header-generator platform
    MCAPI ::BlockActorRendererId $getRendererId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::IVanillaMainBlockActorComponent const* $_getMainComponent() const;
#else // @header-generator platform
    MCFOLD bool $isPermanentlyRendered() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockActor const& $getBlockActor() const;
#else // @header-generator platform
    MCAPI bool $isWithinRenderDistance(::Vec3 const& cameraPosition) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockActor& $getBlockActor();
#else // @header-generator platform
    MCFOLD bool $hasAlphaLayer() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockPos const& $getBlockActorPosition() const;
#else // @header-generator platform
    MCFOLD float $getShadowRadius(::BlockSource& region) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockActorType $getBlockActorType() const;
#else // @header-generator platform
    MCAPI bool $isInWorld() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockActorRendererId $getRendererId() const;
#else // @header-generator platform
    MCFOLD ::IVanillaRenderBlockActorComponent* $getCrackEntity(::BlockSource& region, ::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isPermanentlyRendered() const;
#else // @header-generator platform
    MCFOLD ::AABB const& $getAABB() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isWithinRenderDistance(::Vec3 const&) const;
#else // @header-generator platform
    MCAPI void $setAABB(::AABB const& value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasAlphaLayer() const;
#else // @header-generator platform
    MCFOLD ::ActorTerrainInterlockData& $getEntityTerrainInterlockData();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getShadowRadius(::BlockSource&) const;
#else // @header-generator platform
    MCFOLD ::ActorTerrainInterlockData const& $getEntityTerrainInterlockDataConst() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isInWorld() const;
#else // @header-generator platform
    MCFOLD void $tick(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::IVanillaRenderBlockActorComponent* $getCrackEntity(::BlockSource&, ::BlockPos const&);
#else // @header-generator platform
    MCFOLD int $getTickCount() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::AABB const& $getAABB() const;
#else // @header-generator platform
    MCFOLD ::Container* $getContainer();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setAABB(::AABB const&);
#else // @header-generator platform
    MCFOLD ::Container const* $getContainer() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorTerrainInterlockData& $getEntityTerrainInterlockData();
#else // @header-generator platform
    MCFOLD void $eraseLootTable();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorTerrainInterlockData const& $getEntityTerrainInterlockDataConst() const;
#else // @header-generator platform
    MCFOLD ::std::string $getName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick(::BlockSource&);
#else // @header-generator platform
    MCFOLD ::std::string $getImmersiveReaderText(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getTickCount() const;
#else // @header-generator platform
    MCAPI bool $canRenderCustomName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Container const* $getContainer() const;
#else // @header-generator platform
    MCAPI bool $hasCustomName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Container* $getContainer();
#else // @header-generator platform
    MCFOLD ::Bedrock::Safety::RedactableString const& $getCustomName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $eraseLootTable();
#else // @header-generator platform
    MCAPI void $setCustomName(::Bedrock::Safety::RedactableString const& name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getName() const;
#else // @header-generator platform
    MCAPI bool $isCustomNameSaved() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getImmersiveReaderText(::BlockSource&);
#else // @header-generator platform
    MCAPI ::Bedrock::Safety::RedactableString $getDisplayName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canRenderCustomName() const;
#else // @header-generator platform
    MCAPI bool $hasFilteredNameTag() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasCustomName() const;
#else // @header-generator platform
    MCAPI ::std::string $getFilteredNameTag() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Safety::RedactableString const& $getCustomName() const;
#else // @header-generator platform
    MCAPI void $setFilteredNameTag(::std::string const& filteredName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setCustomName(::Bedrock::Safety::RedactableString const&);
#else // @header-generator platform
    MCFOLD ::std::vector<::std::string> $getUgcStrings(::CompoundTag const& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isCustomNameSaved() const;
#else // @header-generator platform
    MCFOLD ::std::vector<::std::string> $getFilteredUgcStrings(::CompoundTag const& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Safety::RedactableString $getDisplayName() const;
#else // @header-generator platform
    MCFOLD void $setUgcStrings(::CompoundTag& tag, ::std::vector<::std::string> const& list) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasFilteredNameTag() const;
#else // @header-generator platform
    MCFOLD void $setFilteredUgcStrings(::CompoundTag& tag, ::std::vector<::std::string> const& list) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getFilteredNameTag() const;
#else // @header-generator platform
    MCFOLD bool $validateData(::CompoundTag const& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setFilteredNameTag(std::string const&);
#else // @header-generator platform
    MCFOLD void $fixupOnLoad(::LevelChunk& lc);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::string> $getUgcStrings(::CompoundTag const&) const;
#else // @header-generator platform
    MCAPI void $setChanged();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::string> $getFilteredUgcStrings(::CompoundTag const&) const;
#else // @header-generator platform
    MCAPI bool $isChanged() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setUgcStrings(::CompoundTag&, std::vector<std::string> const&) const;
#else // @header-generator platform
    MCFOLD void $onChanged(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setFilteredUgcStrings(::CompoundTag&, std::vector<std::string> const&) const;
#else // @header-generator platform
    MCAPI void $_resetAABB();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $validateData(::CompoundTag const&) const;
#else // @header-generator platform
    MCAPI void $_setCanRenderCustomName(bool value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fixupOnLoad(::LevelChunk&);
#else // @header-generator platform
    MCAPI void $_setCustomNameSaved(bool saveCustomName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setChanged();
#else // @header-generator platform
    MCFOLD ::IVanillaRenderBlockActorComponent const* $_getRenderComponent() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isChanged() const;
#else // @header-generator platform
    MCFOLD ::IVanillaRenderBlockActorComponent* $_getRenderComponent();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onChanged(::BlockSource&);
#else // @header-generator platform
    MCFOLD ::IVanillaTickBlockActorComponent const* $_getTickComponent() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_resetAABB();
#else // @header-generator platform
    MCFOLD ::IVanillaTickBlockActorComponent* $_getTickComponent();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_setCanRenderCustomName(bool);
#else // @header-generator platform
    MCFOLD ::IVanillaMainBlockActorComponent const* $_getMainComponent() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_setCustomNameSaved(bool);
#else // @header-generator platform
    MCFOLD ::IVanillaMainBlockActorComponent* $_getMainComponent();


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCNAPI static void** $vftableForIVanillaRenderBlockActorComponent();

    MCNAPI static void** $vftableForIVanillaMainBlockActorComponent();

    MCNAPI static void** $vftableForBlockActor();

    MCNAPI static void** $vftableForIVanillaTickBlockActorComponent();
#endif // @header-generator platform
    // NOLINTEND
};
