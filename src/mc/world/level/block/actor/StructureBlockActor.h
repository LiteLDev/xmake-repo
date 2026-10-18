#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/VanillaBlockActor.h"
#include "mc/world/level/levelgen/structure/StructureEditorData.h"
#include "mc/world/level/levelgen/structure/StructureTelemetryServerData.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ILevel;
#if defined(LL_PLAT_A) // @header-generator platform
class IMinecraftEventing;
class IStructureWireframeQueue;
#else // @header-generator platform
#endif // @header-generator platform
class LevelChunk;
class SaveContext;
#if defined(LL_PLAT_A) // @header-generator platform
namespace mce { class Color; }
#else // @header-generator platform
class IStructureWireframeQueue;
#endif // @header-generator platform
// clang-format on

class StructureBlockActor : public ::VanillaBlockActor {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 184, ::StructureEditorData>         mStructureEditorData;
#else // @header-generator platform
    ::ll::TypedStorage<8, 216, ::StructureEditorData>         mStructureEditorData;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 16, ::StructureTelemetryServerData> mTelemetryServerData;
    ::ll::TypedStorage<1, 1, bool>                            mIsPowered;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~StructureBlockActor();
#else // @header-generator platform
    virtual void load(::ILevel& level, ::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool save(::CompoundTag&, ::SaveContext const&) const;
#else // @header-generator platform
    virtual void onChanged(::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlace(::BlockSource&);
#else // @header-generator platform
    virtual void onPlace(::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onRemoved(::BlockSource&);
#else // @header-generator platform
    virtual void onRemoved(::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onChunkLoaded(::LevelChunk&);
#else // @header-generator platform
    virtual void onChunkLoaded(::LevelChunk& lc) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onChunkUnloaded(::LevelChunk&);
#else // @header-generator platform
    virtual void onSubChunkLoaded(::LevelChunk& lc, short, bool) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onSubChunkLoaded(::LevelChunk&, short, bool);
#else // @header-generator platform
    virtual void onChunkUnloaded(::LevelChunk& lc) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<BlockActorDataPacket> _getUpdatePacket(::BlockSource&);
#else // @header-generator platform
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    virtual void onChanged(::BlockSource&);
#else // @header-generator platform
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit StructureBlockActor(::BlockPos const&);
#else // @header-generator platform
    MCAPI explicit StructureBlockActor(::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _loadStructure(::BlockSource&, ::BlockPos const&, ::BaseGameVersion const&);
#else // @header-generator platform
    MCAPI bool _loadStructure(::BlockSource& region, ::BlockPos const& position, ::BaseGameVersion const& version);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _queueStructure(::IStructureWireframeQueue&, ::StructureEditorData const&);
#else // @header-generator platform
    MCAPI bool _saveStructure(::BlockSource& region, ::BlockPos const& position, bool redstoneTriggered);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _saveStructure(::BlockSource&, ::BlockPos const&, bool);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void
    onBoundsChanged(::IStructureWireframeQueue& wireframeQueue, ::StructureEditorData const& newStructureData);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _triggerLoad(::BlockSource&, ::BlockPos const&, ::BaseGameVersion const&);
#else // @header-generator platform
    MCAPI void setPowered(::BlockSource& region, ::BlockPos const& pos, bool shouldTrigger, bool redstoneTriggered);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::StructureEditorData const& getStructureData() const;

    MCNAPI void onBoundsChanged(::IStructureWireframeQueue&, ::StructureEditorData const&);

    MCNAPI void setIsWaterlogged(bool);

    MCNAPI void setPowered(::BlockSource&, ::BlockPos const&, bool, bool);

    MCNAPI void setStructureData(::StructureEditorData const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& MAX_WIREFRAME_RENDER_DISTANCE();

    MCNAPI static ::mce::Color const& X_AXIS_COLOR();

    MCNAPI static ::mce::Color const& Y_AXIS_COLOR();

    MCNAPI static ::mce::Color const& Z_AXIS_COLOR();
#else // @header-generator platform
    MCAPI void setStructureData(::StructureEditorData const& data);
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
    MCAPI void $load(::ILevel& level, ::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $save(::CompoundTag&, ::SaveContext const&) const;
#else // @header-generator platform
    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onPlace(::BlockSource&);
#else // @header-generator platform
    MCAPI void $onChanged(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onRemoved(::BlockSource&);
#else // @header-generator platform
    MCAPI void $onPlace(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onChunkLoaded(::LevelChunk&);
#else // @header-generator platform
    MCAPI void $onRemoved(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onChunkUnloaded(::LevelChunk&);
#else // @header-generator platform
    MCAPI void $onChunkLoaded(::LevelChunk& lc);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onSubChunkLoaded(::LevelChunk&, short, bool);
#else // @header-generator platform
    MCAPI void $onSubChunkLoaded(::LevelChunk& lc, short, bool);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);
#else // @header-generator platform
    MCAPI void $onChunkUnloaded(::LevelChunk& lc);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_onUpdatePacket(::CompoundTag const&, ::BlockSource&);
#else // @header-generator platform
    MCFOLD ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onChanged(::BlockSource&);
#else // @header-generator platform
    MCAPI void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCNAPI static void** $vftableForIVanillaRenderBlockActorComponent();

    MCNAPI static void** $vftableForIVanillaTickBlockActorComponent();

    MCNAPI static void** $vftableForIVanillaMainBlockActorComponent();

    MCNAPI static void** $vftableForBlockActor();
#endif // @header-generator platform
    // NOLINTEND
};
