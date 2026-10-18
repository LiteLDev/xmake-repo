#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/block/Block.h"
#endif // @header-generator platform
#include "mc/world/level/chunk/NeighborAwareBlockUpdateType.h"
#include "mc/world/level/levelgen/structure/IStructureTemplate.h"
#include "mc/world/level/levelgen/structure/StructureTemplateData.h"

// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
class Block;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    LLAPI void placeInWorld(
        BlockSource&    blockSource,
        BlockPos const& minCorner,
        Mirror          mirror         = Mirror::None,
        Rotation        rotation       = Rotation::None,
        bool            ignoreBlocks   = false,
        bool            ignoreEntities = false
    ) const;

    LLNDAPI static std::unique_ptr<StructureTemplate> create(std::string_view name, CompoundTag const& tag);

    LLNDAPI static std::unique_ptr<StructureTemplate> create(
        std::string_view   name,
        BlockSource&       blockSource,
        BoundingBox const& boundingBox,
        bool               ignoreBlocks   = false,
        bool               ignoreEntities = false
    );

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                 mName;
    ::ll::TypedStorage<8, 152, ::StructureTemplateData>    mStructureTemplateData;
    ::ll::TypedStorage<1, 1, uchar>                        mStructureVersion;
    ::ll::UntypedStorage<8, 24>                            mUnknownBlockRegistry;
    ::ll::TypedStorage<1, 1, bool>                         mIsRemovable;
    ::ll::TypedStorage<8, 24, std::map<const Block*, int>> mBlockToIndex;
    ::ll::TypedStorage<1, 1, bool>                         mNeedsOptimize;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                                           mName;
    ::ll::TypedStorage<8, 176, ::StructureTemplateData>                                mStructureTemplateData;
    ::ll::TypedStorage<1, 1, uchar>                                                    mStructureVersion;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry>> mUnknownBlockRegistry;
    ::ll::TypedStorage<1, 1, bool>                                                     mIsRemovable;
    ::ll::TypedStorage<8, 16, ::std::map<::Block const*, int>>                         mBlockToIndex;
    ::ll::TypedStorage<1, 1, bool>                                                     mNeedsOptimize;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    StructureTemplate& operator=(StructureTemplate const&);
    StructureTemplate(StructureTemplate const&);
    StructureTemplate();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~StructureTemplate();
#else // @header-generator platform
    virtual ~StructureTemplate() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::br::worldgen::StructureTemplateBlockPalette randomPalette(::BlockPos) const;
#else // @header-generator platform
    virtual bool load(::CompoundTag const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BlockPos rawSize() const;

    virtual ::NeighborAwareBlockUpdateType shouldHandleUpgradeForBlock(::Block const&) const;

    virtual bool load(::CompoundTag const&);

    virtual std::unique_ptr<CompoundTag> save() const;
#else // @header-generator platform
    virtual ::std::unique_ptr<::CompoundTag> save() const;
#endif // @header-generator platform

    virtual void clear();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BoundingBox getTransformedBounds(::BlockPos, ::StructureSettings const&) const;
#else // @header-generator platform
    virtual ::BoundingBox
    getTransformedBounds(::BlockPos loadPosition, ::StructureSettings const& structureSettings) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fillEmpty(::BlockPos const&);
#else // @header-generator platform
    virtual void fillEmpty(::BlockPos const& size);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _allowReadBlock(::BlockPos const&, ::Block const&) const;
#else // @header-generator platform
    virtual ::NeighborAwareBlockUpdateType shouldHandleUpgradeForBlock(::Block const& block) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _allowReadActor(::Actor const&) const;
#else // @header-generator platform
    virtual bool _allowReadBlock(::BlockPos const& position, ::Block const& block) const;

    virtual bool _allowReadActor(::Actor const& actor) const;

    virtual ::BlockPos rawSize() const /*override*/;

    virtual ::br::worldgen::StructureTemplateBlockPalette randomPalette(::BlockPos randomPosSeed) const
        /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI StructureTemplate(std::string_view, ::Bedrock::NonOwnerPointer<IUnknownBlockTypeRegistry>);
#else // @header-generator platform
    MCAPI StructureTemplate(::StructureTemplate&& other);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI StructureTemplate(::StructureTemplate const&, ::Bedrock::NonOwnerPointer<IUnknownBlockTypeRegistry>);
#else // @header-generator platform
    MCAPI explicit StructureTemplate(::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> unknownBlockRegistry);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _clearStructureData();
#else // @header-generator platform
    MCAPI StructureTemplate(
        ::std::string_view                                      name,
        ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> unknownBlockRegistry
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _fillBlockInfo(::BlockSource&, ::BlockPos const&, ::BlockPos const&, ::BlockPos const&);
#else // @header-generator platform
    MCAPI StructureTemplate(
        ::StructureTemplate const&                              temp,
        ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> unknownBlockRegistry
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _fillEntityList(::BlockSource&, ::BlockPos const&, ::BlockPos const&);
#else // @header-generator platform
    MCAPI void _fillBlockInfo(
        ::BlockSource&    region,
        ::BlockPos const& minCorner,
        ::BlockPos const& maxCorner,
        ::BlockPos const& size
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int _getOrCreateIndex(::Block const&, std::map<const Block*, int>&, ::StructureBlockPalette&);
#else // @header-generator platform
    MCAPI void _fillEntityList(::BlockSource& region, ::BlockPos const& minCorner, ::BlockPos const& maxCorner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _placeEntitiesInWorld(::BlockSource&, ::DataLoadHelper&, bool, std::optional<BoundingBox>) const;
#else // @header-generator platform
    MCAPI int _getOrCreateIndex(
        ::Block const&                   block,
        ::std::map<::Block const*, int>& indexMap,
        ::StructureBlockPalette&         palette
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void _placeEntitiesInWorld(
        ::BlockSource&                 region,
        ::DataLoadHelper&              dataLoadHelper,
        bool                           shouldReloadActorEquipment,
        ::std::optional<::BoundingBox> overlapBB
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void _placeNextBlockSegmentInWorld(
        ::BlockSource&                 region,
        uint64                         startPlacement,
        uint64                         endPlacement,
        ::StructureSettings const&     structureSettings,
        ::DataLoadHelper&              dataLoadHelper,
        ::StructureBlockPalette const& structureBlockPalette,
        ::BlockPalette const&          globalBlockPalette,
        ::BlockPos                     position,
        ::BlockPos const&              offset,
        ::Vec3 const&                  pivot,
        ::Rotation                     rotation,
        ::Mirror                       mirror,
        float                          integrityValue,
        uint                           integritySeed,
#endif // @header-generator platform
        ::StructureTelemetryServerData*,
#if defined(LL_PLAT_A) // @header-generator platform
        bool
#else // @header-generator platform
        bool updateItemData,
        bool ignoreJigsawBlocks
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void placeNextSegmentInWorld(::StructureAnimationData&, ::BlockPalette const&) const;
#else // @header-generator platform
    MCAPI void fillFromWorld(
        ::BlockSource&             region,
        ::BlockPos const&          capturePosition,
        ::StructureSettings const& structureSettings
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool setBlock(::BlockPos const&, ::Block const*, bool);
#else // @header-generator platform
    MCAPI ::std::vector<::JigsawStructureBlockInfo> getJigsawMarkers() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setName(std::string const&);
#else // @header-generator platform
    MCAPI bool const isWaterlogged(::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setRemovable(bool);
#else // @header-generator platform
    MCAPI ::StructureTemplate& operator=(::StructureTemplate&& other);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setStructureTemplateData(::StructureTemplateData const&);
#else // @header-generator platform
    MCAPI bool operator==(::StructureTemplate const& other) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool structureTemplateDataIsValid(
        ::BlockSource const&,
        std::string const&,
        ::BlockPos const&,
        ::StructureSettings const&
#else // @header-generator platform
    MCAPI void optimizePalette(::std::string const& paletteName);

    MCAPI void placeEntitiesInWorld(
        ::BlockSource&             region,
        ::BlockPos const&          position,
        ::StructureSettings const& structureSettings,
        ::BoundingBox              overlapBB
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const* tryGetBlockAtPos(::BlockPos const&) const;
#else // @header-generator platform
    MCAPI void placeInWorld(
        ::BlockSource&                  region,
        ::BlockPalette const&           globalBlockPalette,
        ::BlockPos const&               position,
        ::StructureSettings const&      structureSettings,
        ::StructureTelemetryServerData* telemetryServerData,
        bool                            updateItemData
    ) const;

#ifdef LL_PLAT_S
    MCAPI void placeNextSegmentInWorld(
        ::StructureAnimationData& structureAnimationData,
        ::BlockPalette const&     globalBlockPalette
    ) const;
#endif

    MCAPI bool setBlock(::BlockPos const& pos, ::Block const* block, bool waterlogged);

    MCAPI bool structureTemplateDataIsValid(
        ::BlockSource const&       region,
        ::std::string const&       structureName,
        ::BlockPos const&          capturePosition,
        ::StructureSettings const& structureSettings
    ) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Block const& _mapToRotation(::Block const&, ::Rotation);
#else // @header-generator platform
    MCAPI static ::Block const& _mapToRotation(::Block const& curr, ::Rotation rotation);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Block const* tryGetBlockAtPos(
        ::BlockPos const&,
        ::StructureTemplateData const&,
        ::Bedrock::NonOwnerPointer<IUnknownBlockTypeRegistry>
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::std::vector<::std::unique_ptr<::LevelChunk>> constructTransformedLevelChunks(
        ::Dimension&                                            targetDimension,
        ::StructureSettings const&                              settings,
        ::StructureTemplateData const&                          structureTemplateData,
        ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> blockRegistry
    );
#endif

    MCAPI static ::Block const* tryGetBlockAtPos(
        ::BlockPos const&                                       pos,
        ::StructureTemplateData const&                          structureTemplateData,
        ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> blockRegistry
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::BlockPos const& INVALID_POSITION();

    MCNAPI static int const& NO_BLOCK_INDEX_VALUE();
#else // @header-generator platform
    MCAPI static int const& NO_BLOCK_INDEX_VALUE();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string_view, ::Bedrock::NonOwnerPointer<IUnknownBlockTypeRegistry>);
#else // @header-generator platform
    MCAPI void* $ctor(::StructureTemplate&& other);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::StructureTemplate const&, ::Bedrock::NonOwnerPointer<IUnknownBlockTypeRegistry>);
#else // @header-generator platform
    MCAPI void* $ctor(::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> unknownBlockRegistry);

    MCAPI void*
    $ctor(::std::string_view name, ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> unknownBlockRegistry);

    MCAPI void* $ctor(
        ::StructureTemplate const&                              temp,
        ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> unknownBlockRegistry
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
    MCNAPI ::br::worldgen::StructureTemplateBlockPalette $randomPalette(::BlockPos) const;
#else // @header-generator platform
    MCAPI bool $load(::CompoundTag const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockPos $rawSize() const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::CompoundTag> $save() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::NeighborAwareBlockUpdateType $shouldHandleUpgradeForBlock(::Block const&) const;
#else // @header-generator platform
    MCAPI void $clear();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $load(::CompoundTag const&);
#else // @header-generator platform
    MCAPI ::BoundingBox
    $getTransformedBounds(::BlockPos loadPosition, ::StructureSettings const& structureSettings) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<CompoundTag> $save() const;
#else // @header-generator platform
    MCAPI void $fillEmpty(::BlockPos const& size);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $clear();
#else // @header-generator platform
    MCAPI ::NeighborAwareBlockUpdateType $shouldHandleUpgradeForBlock(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BoundingBox $getTransformedBounds(::BlockPos, ::StructureSettings const&) const;
#else // @header-generator platform
    MCAPI bool $_allowReadBlock(::BlockPos const& position, ::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fillEmpty(::BlockPos const&);
#else // @header-generator platform
    MCAPI bool $_allowReadActor(::Actor const& actor) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_allowReadBlock(::BlockPos const&, ::Block const&) const;
#else // @header-generator platform
    MCAPI ::BlockPos $rawSize() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_allowReadActor(::Actor const&) const;
#else // @header-generator platform
    MCAPI ::br::worldgen::StructureTemplateBlockPalette $randomPalette(::BlockPos randomPosSeed) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
