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
class IMinecraftEventing;
class IStructureWireframeQueue;
class LevelChunk;
class SaveContext;
namespace mce { class Color; }
// clang-format on

class StructureBlockActor : public ::VanillaBlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 184, ::StructureEditorData>         mStructureEditorData;
    ::ll::TypedStorage<4, 16, ::StructureTelemetryServerData> mTelemetryServerData;
    ::ll::TypedStorage<1, 1, bool>                            mIsPowered;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StructureBlockActor();

    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    virtual bool save(::CompoundTag&, ::SaveContext const&) const;

    virtual void onPlace(::BlockSource&);

    virtual void onRemoved(::BlockSource&);

    virtual void onChunkLoaded(::LevelChunk&);

    virtual void onChunkUnloaded(::LevelChunk&);

    virtual void onSubChunkLoaded(::LevelChunk&, short, bool);

    virtual std::unique_ptr<BlockActorDataPacket> _getUpdatePacket(::BlockSource&);

    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    virtual void onChanged(::BlockSource&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit StructureBlockActor(::BlockPos const&);

    MCNAPI bool _loadStructure(::BlockSource&, ::BlockPos const&, ::BaseGameVersion const&);

    MCNAPI void _queueStructure(::IStructureWireframeQueue&, ::StructureEditorData const&);

    MCNAPI bool _saveStructure(::BlockSource&, ::BlockPos const&, bool);

    MCNAPI void _triggerLoad(::BlockSource&, ::BlockPos const&, ::BaseGameVersion const&);

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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const&);
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

    MCNAPI void $onPlace(::BlockSource&);

    MCNAPI void $onRemoved(::BlockSource&);

    MCNAPI void $onChunkLoaded(::LevelChunk&);

    MCNAPI void $onChunkUnloaded(::LevelChunk&);

    MCNAPI void $onSubChunkLoaded(::LevelChunk&, short, bool);

    MCNAPI std::unique_ptr<BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCNAPI void $_onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    MCNAPI void $onChanged(::BlockSource&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
