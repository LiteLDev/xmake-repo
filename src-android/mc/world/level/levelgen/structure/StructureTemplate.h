#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/chunk/NeighborAwareBlockUpdateType.h"
#include "mc/world/level/levelgen/structure/IStructureTemplate.h"
#include "mc/world/level/levelgen/structure/StructureTemplateData.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPalette;
class BlockPos;
class BlockSource;
class BoundingBox;
class CompoundTag;
class DataLoadHelper;
class Dimension;
class IUnknownBlockTypeRegistry;
class JigsawStructureBlockInfo;
class LevelChunk;
class StructureAnimationData;
class StructureBlockPalette;
class StructureSettings;
class StructureTelemetryServerData;
class Vec3;
namespace br::worldgen { struct StructureTemplateBlockPalette; }
// clang-format on

class StructureTemplate : public ::IStructureTemplate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                 mName;
    ::ll::TypedStorage<8, 152, ::StructureTemplateData>    mStructureTemplateData;
    ::ll::TypedStorage<1, 1, uchar>                        mStructureVersion;
    ::ll::UntypedStorage<8, 24>                            mUnknownBlockRegistry;
    ::ll::TypedStorage<1, 1, bool>                         mIsRemovable;
    ::ll::TypedStorage<8, 24, std::map<const Block*, int>> mBlockToIndex;
    ::ll::TypedStorage<1, 1, bool>                         mNeedsOptimize;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureTemplate& operator=(StructureTemplate const&);
    StructureTemplate(StructureTemplate const&);
    StructureTemplate();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StructureTemplate();

    virtual ::br::worldgen::StructureTemplateBlockPalette randomPalette(::BlockPos) const;

    virtual ::BlockPos rawSize() const;

    virtual ::NeighborAwareBlockUpdateType shouldHandleUpgradeForBlock(::Block const&) const;

    virtual bool load(::CompoundTag const&);

    virtual std::unique_ptr<CompoundTag> save() const;

    virtual void clear();

    virtual ::BoundingBox getTransformedBounds(::BlockPos, ::StructureSettings const&) const;

    virtual void fillEmpty(::BlockPos const&);

    virtual bool _allowReadBlock(::BlockPos const&, ::Block const&) const;

    virtual bool _allowReadActor(::Actor const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StructureTemplate(std::string_view, ::Bedrock::NonOwnerPointer<IUnknownBlockTypeRegistry>);

    MCNAPI StructureTemplate(::StructureTemplate const&, ::Bedrock::NonOwnerPointer<IUnknownBlockTypeRegistry>);

    MCNAPI void _clearStructureData();

    MCNAPI void _fillBlockInfo(::BlockSource&, ::BlockPos const&, ::BlockPos const&, ::BlockPos const&);

    MCNAPI void _fillEntityList(::BlockSource&, ::BlockPos const&, ::BlockPos const&);

    MCNAPI int _getOrCreateIndex(::Block const&, std::map<const Block*, int>&, ::StructureBlockPalette&);

    MCNAPI void _placeEntitiesInWorld(::BlockSource&, ::DataLoadHelper&, bool, std::optional<BoundingBox>) const;

    MCNAPI void _placeNextBlockSegmentInWorld(
        ::BlockSource&,
        ulong,
        ulong,
        ::StructureSettings const&,
        ::DataLoadHelper&,
        ::StructureBlockPalette const&,
        ::BlockPalette const&,
        ::BlockPos,
        ::BlockPos const&,
        ::Vec3 const&,
        ::Rotation,
        ::Mirror,
        float,
        uint,
        ::StructureTelemetryServerData*,
        bool,
        bool
    ) const;

    MCNAPI void fillFromWorld(::BlockSource&, ::BlockPos const&, ::StructureSettings const&);

    MCNAPI std::vector<JigsawStructureBlockInfo> getJigsawMarkers() const;

    MCNAPI std::string const& getName() const;

    MCNAPI bool getRemovable() const;

    MCNAPI ::BlockPos const& getSize() const;

    MCNAPI uchar getStructureVersion() const;

    MCNAPI bool isLoaded() const;

    MCNAPI bool const isWaterlogged(::BlockPos const&) const;

    MCNAPI void optimizePalette(std::string const&);

    MCNAPI void
    placeEntitiesInWorld(::BlockSource&, ::BlockPos const&, ::StructureSettings const&, ::BoundingBox) const;

    MCNAPI void placeInWorld(
        ::BlockSource&,
        ::BlockPalette const&,
        ::BlockPos const&,
        ::StructureSettings const&,
        ::StructureTelemetryServerData*,
        bool
    ) const;

    MCNAPI void placeNextSegmentInWorld(::StructureAnimationData&, ::BlockPalette const&) const;

    MCNAPI bool setBlock(::BlockPos const&, ::Block const*, bool);

    MCNAPI void setName(std::string const&);

    MCNAPI void setRemovable(bool);

    MCNAPI void setStructureTemplateData(::StructureTemplateData const&);

    MCNAPI bool structureTemplateDataIsValid(
        ::BlockSource const&,
        std::string const&,
        ::BlockPos const&,
        ::StructureSettings const&
    ) const;

    MCNAPI ::Block const* tryGetBlockAtPos(::BlockPos const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Block const& _mapToRotation(::Block const&, ::Rotation);

    MCNAPI static ::Block const* tryGetBlockAtPos(
        ::BlockPos const&,
        ::StructureTemplateData const&,
        ::Bedrock::NonOwnerPointer<IUnknownBlockTypeRegistry>
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BlockPos const& INVALID_POSITION();

    MCNAPI static int const& NO_BLOCK_INDEX_VALUE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string_view, ::Bedrock::NonOwnerPointer<IUnknownBlockTypeRegistry>);

    MCNAPI void* $ctor(::StructureTemplate const&, ::Bedrock::NonOwnerPointer<IUnknownBlockTypeRegistry>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::br::worldgen::StructureTemplateBlockPalette $randomPalette(::BlockPos) const;

    MCNAPI ::BlockPos $rawSize() const;

    MCNAPI ::NeighborAwareBlockUpdateType $shouldHandleUpgradeForBlock(::Block const&) const;

    MCNAPI bool $load(::CompoundTag const&);

    MCNAPI std::unique_ptr<CompoundTag> $save() const;

    MCNAPI void $clear();

    MCNAPI ::BoundingBox $getTransformedBounds(::BlockPos, ::StructureSettings const&) const;

    MCNAPI void $fillEmpty(::BlockPos const&);

    MCNAPI bool $_allowReadBlock(::BlockPos const&, ::Block const&) const;

    MCNAPI bool $_allowReadActor(::Actor const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
