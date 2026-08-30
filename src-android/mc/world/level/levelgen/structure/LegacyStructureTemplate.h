#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/chunk/NeighborAwareBlockUpdateType.h"
#include "mc/world/level/levelgen/structure/ILegacyStructureTemplate.h"
#include "mc/world/level/levelgen/structure/IStructureTemplate.h"
#include "mc/world/level/levelgen/structure/LegacyStructureActorInfo.h"
#include "mc/world/level/levelgen/structure/LegacyStructureBlockInfo.h"
#include "mc/world/level/levelgen/structure/LegacyStructureBlockPalette.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockSource;
class CompoundTag;
class JigsawStructureBlockInfo;
class LegacyStructureSettings;
class Random;
class Vec3;
namespace br::worldgen { struct StructureTemplateBlockPalette; }
// clang-format on

class LegacyStructureTemplate : public ::ILegacyStructureTemplate, public ::IStructureTemplate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                           mAuthor;
    ::ll::TypedStorage<4, 12, ::BlockPos>                            mSize;
    ::ll::TypedStorage<4, 4, int>                                    mDataVersion;
    ::ll::TypedStorage<8, 40, ::LegacyStructureBlockPalette>         mPalette;
    ::ll::TypedStorage<8, 40, ::LegacyStructureBlockPalette>         mExtraBlockPalette;
    ::ll::TypedStorage<8, 24, std::vector<LegacyStructureBlockInfo>> mBlockInfo;
    ::ll::TypedStorage<8, 24, std::vector<LegacyStructureActorInfo>> mEntityInfo;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyStructureTemplate& operator=(LegacyStructureTemplate const&);
    LegacyStructureTemplate(LegacyStructureTemplate const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~LegacyStructureTemplate();

    virtual std::unordered_map<BlockPos, std::string> getMarkers(::BlockPos const&, ::LegacyStructureSettings&) const;

    virtual void placeInWorld(::BlockSource&, ::BlockPos const&, ::LegacyStructureSettings&, ::Random&) const;

    virtual ::NeighborAwareBlockUpdateType shouldHandleUpgradeForBlock(::Block const&) const;

    virtual ::BlockPos rawSize() const;

    virtual ::br::worldgen::StructureTemplateBlockPalette randomPalette(::BlockPos) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::IStructureTemplate const& asStructureTemplate() const;

    MCNAPI ::BlockPos calculateConnectedPosition(
        ::LegacyStructureSettings const&,
        ::BlockPos const&,
        ::LegacyStructureSettings const&,
        ::BlockPos const&
    ) const;

    MCNAPI void finalizeBlockRules(::BlockSource&, ::BlockPos const&, ::LegacyStructureSettings&, ::Random&) const;

    MCNAPI std::vector<JigsawStructureBlockInfo> getJigsawMarkers() const;

    MCNAPI ::BlockPos getSize(::Rotation) const;

    MCNAPI void placeInWorldChunk(::BlockSource&, ::BlockPos const&, ::LegacyStructureSettings&, ::Random&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _fixItemStack(::CompoundTag&, int const);

    MCNAPI static void _mapPropertiesToTags(::CompoundTag&, ::CompoundTag const&);

    MCNAPI static ::Block const* _mapPropertyToExtraBlock(std::string const&, std::string const&);

    MCNAPI static void _mapPropertyToTag(::CompoundTag&, std::string const&, std::string const&);

    MCNAPI static std::unique_ptr<CompoundTag>
    _mapTag(std::unique_ptr<CompoundTag>, std::string const&, int const, ::Block const*&);

    MCNAPI static ::Block const* _mapToBlock(std::string const&);

    MCNAPI static ::Block const& _mapToData(::Block const&, ::LegacyStructureSettings const&);

    MCNAPI static ::Block const* _mapToProperty(std::string const&, std::string const&, ::Block const&);

    MCNAPI static ::BlockPos getZeroPositionWithTransform(::BlockPos const&, ::Mirror, ::Rotation, int, int);

    MCNAPI static ::BlockPos transform(::BlockPos, ::Mirror, ::Rotation);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& AUTHOR_TAG();

    MCNAPI static std::string const& BLOCKS_TAG();

    MCNAPI static std::string const& BLOCK_TAG_NBT();

    MCNAPI static std::string const& BLOCK_TAG_POS();

    MCNAPI static std::string const& BLOCK_TAG_STATE();

    MCNAPI static int const& CHUNK_SIZE();

    MCNAPI static std::string const& DATA_VERSION_TAG();

    MCNAPI static std::string const& ENTITIES_TAG();

    MCNAPI static std::string const& ENTITY_TAG_BLOCKPOS();

    MCNAPI static std::string const& ENTITY_TAG_NBT();

    MCNAPI static std::string const& ENTITY_TAG_POS();

    MCNAPI static std::string const& MINECRAFT_PREFIX();

    MCNAPI static std::string const& PALETTE_TAG();

    MCNAPI static std::string const& SIZE_TAG();

    MCNAPI static int const& STRUCTURE_VERSION();

    MCNAPI static std::string const& VERSION_TAG();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::unordered_map<BlockPos, std::string> $getMarkers(::BlockPos const&, ::LegacyStructureSettings&) const;

    MCNAPI void $placeInWorld(::BlockSource&, ::BlockPos const&, ::LegacyStructureSettings&, ::Random&) const;

    MCNAPI ::NeighborAwareBlockUpdateType $shouldHandleUpgradeForBlock(::Block const&) const;

    MCNAPI ::BlockPos $rawSize() const;

    MCNAPI ::br::worldgen::StructureTemplateBlockPalette $randomPalette(::BlockPos) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
