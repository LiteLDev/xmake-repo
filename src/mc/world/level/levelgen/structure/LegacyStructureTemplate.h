#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/chunk/NeighborAwareBlockUpdateType.h"
#include "mc/world/level/levelgen/structure/ILegacyStructureTemplate.h"
#include "mc/world/level/levelgen/structure/IStructureTemplate.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/levelgen/structure/LegacyStructureActorInfo.h"
#include "mc/world/level/levelgen/structure/LegacyStructureBlockInfo.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/levelgen/structure/LegacyStructureBlockPalette.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockSource;
class CompoundTag;
class JigsawStructureBlockInfo;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class LegacyStructureActorInfo;
class LegacyStructureBlockInfo;
#endif // @header-generator platform
class LegacyStructureSettings;
class Random;
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
#else // @header-generator platform
#endif // @header-generator platform
namespace br::worldgen { struct StructureTemplateBlockPalette; }
// clang-format on

class LegacyStructureTemplate : public ::ILegacyStructureTemplate, public ::IStructureTemplate {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                           mAuthor;
    ::ll::TypedStorage<4, 12, ::BlockPos>                            mSize;
    ::ll::TypedStorage<4, 4, int>                                    mDataVersion;
    ::ll::TypedStorage<8, 40, ::LegacyStructureBlockPalette>         mPalette;
    ::ll::TypedStorage<8, 40, ::LegacyStructureBlockPalette>         mExtraBlockPalette;
    ::ll::TypedStorage<8, 24, std::vector<LegacyStructureBlockInfo>> mBlockInfo;
    ::ll::TypedStorage<8, 24, std::vector<LegacyStructureActorInfo>> mEntityInfo;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                             mAuthor;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                mSize;
    ::ll::TypedStorage<4, 4, int>                                        mDataVersion;
    ::ll::TypedStorage<8, 64, ::LegacyStructureBlockPalette>             mPalette;
    ::ll::TypedStorage<8, 64, ::LegacyStructureBlockPalette>             mExtraBlockPalette;
    ::ll::TypedStorage<8, 24, ::std::vector<::LegacyStructureBlockInfo>> mBlockInfo;
    ::ll::TypedStorage<8, 24, ::std::vector<::LegacyStructureActorInfo>> mEntityInfo;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    LegacyStructureTemplate& operator=(LegacyStructureTemplate const&);
    LegacyStructureTemplate(LegacyStructureTemplate const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~LegacyStructureTemplate();
#else // @header-generator platform
    virtual ~LegacyStructureTemplate() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unordered_map<BlockPos, std::string> getMarkers(::BlockPos const&, ::LegacyStructureSettings&) const;
#else // @header-generator platform
    virtual ::std::unordered_map<::BlockPos, ::std::string>
    getMarkers(::BlockPos const& position, ::LegacyStructureSettings& settings) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void placeInWorld(::BlockSource&, ::BlockPos const&, ::LegacyStructureSettings&, ::Random&) const;
#else // @header-generator platform
    virtual void placeInWorld(
        ::BlockSource&             region,
        ::BlockPos const&          pos,
        ::LegacyStructureSettings& settings,
        ::Random&                  random
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::NeighborAwareBlockUpdateType shouldHandleUpgradeForBlock(::Block const&) const;
#else // @header-generator platform
    virtual ::NeighborAwareBlockUpdateType shouldHandleUpgradeForBlock(::Block const& block) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BlockPos rawSize() const;
#else // @header-generator platform
    virtual ::BlockPos rawSize() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::br::worldgen::StructureTemplateBlockPalette randomPalette(::BlockPos) const;
    // clang-format on
#else // @header-generator platform
    virtual ::br::worldgen::StructureTemplateBlockPalette randomPalette(::BlockPos) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::IStructureTemplate const& asStructureTemplate() const;
#else // @header-generator platform
    MCAPI LegacyStructureTemplate();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockPos calculateConnectedPosition(
        ::LegacyStructureSettings const&,
        ::BlockPos const&,
        ::LegacyStructureSettings const&,
        ::BlockPos const&
#else // @header-generator platform
    MCAPI ::BlockPos calculateConnectedPosition(
        ::LegacyStructureSettings const& settings1,
        ::BlockPos const&                connection1,
        ::LegacyStructureSettings const& settings2,
        ::BlockPos const&                connection2
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void finalizeBlockRules(::BlockSource&, ::BlockPos const&, ::LegacyStructureSettings&, ::Random&) const;
#else // @header-generator platform
    MCAPI void finalizeBlockRules(
        ::BlockSource&             region,
        ::BlockPos const&          position,
        ::LegacyStructureSettings& settings,
        ::Random&
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<JigsawStructureBlockInfo> getJigsawMarkers() const;
#else // @header-generator platform
    MCAPI ::std::vector<::JigsawStructureBlockInfo> getJigsawMarkers() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockPos getSize(::Rotation) const;

    MCNAPI void placeInWorldChunk(::BlockSource&, ::BlockPos const&, ::LegacyStructureSettings&, ::Random&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void load(::CompoundTag const& tag);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _fixItemStack(::CompoundTag&, int const);
#else // @header-generator platform
    MCAPI static void _fixItemStack(::CompoundTag& itemTag, int const dataVersion);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _mapPropertiesToTags(::CompoundTag&, ::CompoundTag const&);
#else // @header-generator platform
    MCAPI static void _mapPropertiesToTags(::CompoundTag& originalTag, ::CompoundTag const& paletteTag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Block const* _mapPropertyToExtraBlock(std::string const&, std::string const&);
#else // @header-generator platform
    MCAPI static ::std::unique_ptr<::CompoundTag> _mapTag(
        ::std::unique_ptr<::CompoundTag> originalTag,
        ::std::string const&             javaBlockName,
        int                              dataVersion,
        ::Block const*&                  block
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _mapPropertyToTag(::CompoundTag&, std::string const&, std::string const&);
#else // @header-generator platform
    MCAPI static ::Block const* _mapToBlock(::std::string const& blockName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unique_ptr<CompoundTag>
    _mapTag(std::unique_ptr<CompoundTag>, std::string const&, int const, ::Block const*&);
#else // @header-generator platform
    MCAPI static ::Block const& _mapToData(::Block const& curr, ::LegacyStructureSettings const& settings);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Block const* _mapToBlock(std::string const&);

    MCNAPI static ::Block const& _mapToData(::Block const&, ::LegacyStructureSettings const&);

    MCNAPI static ::Block const* _mapToProperty(std::string const&, std::string const&, ::Block const&);

    MCNAPI static ::BlockPos getZeroPositionWithTransform(::BlockPos const&, ::Mirror, ::Rotation, int, int);

    MCNAPI static ::BlockPos transform(::BlockPos, ::Mirror, ::Rotation);
#else // @header-generator platform
    MCAPI static ::Block const*
    _mapToProperty(::std::string const& propertyString, ::std::string const& valueString, ::Block const& block);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& AUTHOR_TAG();
#else // @header-generator platform
    MCAPI static ::std::string const& AUTHOR_TAG();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& BLOCKS_TAG();
#else // @header-generator platform
    MCAPI static ::std::string const& BLOCKS_TAG();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& BLOCK_TAG_NBT();
#else // @header-generator platform
    MCAPI static ::std::string const& BLOCK_TAG_NBT();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& BLOCK_TAG_POS();
#else // @header-generator platform
    MCAPI static ::std::string const& BLOCK_TAG_POS();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& BLOCK_TAG_STATE();
#else // @header-generator platform
    MCAPI static ::std::string const& BLOCK_TAG_STATE();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int const& CHUNK_SIZE();
#else // @header-generator platform
    MCAPI static ::std::string const& DATA_VERSION_TAG();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& DATA_VERSION_TAG();
#else // @header-generator platform
    MCAPI static ::std::string const& ENTITIES_TAG();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& ENTITIES_TAG();
#else // @header-generator platform
    MCAPI static ::std::string const& ENTITY_TAG_BLOCKPOS();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& ENTITY_TAG_BLOCKPOS();
#else // @header-generator platform
    MCAPI static ::std::string const& ENTITY_TAG_NBT();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& ENTITY_TAG_NBT();
#else // @header-generator platform
    MCAPI static ::std::string const& ENTITY_TAG_POS();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& ENTITY_TAG_POS();
#else // @header-generator platform
    MCAPI static ::std::string const& MINECRAFT_PREFIX();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& MINECRAFT_PREFIX();
#else // @header-generator platform
    MCAPI static ::std::string const& PALETTE_TAG();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& PALETTE_TAG();
#else // @header-generator platform
    MCAPI static ::std::string const& SIZE_TAG();
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& SIZE_TAG();

    MCNAPI static int const& STRUCTURE_VERSION();

    MCNAPI static std::string const& VERSION_TAG();
#else // @header-generator platform
public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
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
    MCNAPI std::unordered_map<BlockPos, std::string> $getMarkers(::BlockPos const&, ::LegacyStructureSettings&) const;
#else // @header-generator platform
    MCAPI ::std::unordered_map<::BlockPos, ::std::string>
    $getMarkers(::BlockPos const& position, ::LegacyStructureSettings& settings) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $placeInWorld(::BlockSource&, ::BlockPos const&, ::LegacyStructureSettings&, ::Random&) const;
#else // @header-generator platform
    MCAPI void $placeInWorld(
        ::BlockSource&             region,
        ::BlockPos const&          pos,
        ::LegacyStructureSettings& settings,
        ::Random&                  random
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::NeighborAwareBlockUpdateType $shouldHandleUpgradeForBlock(::Block const&) const;
#else // @header-generator platform
    MCAPI ::NeighborAwareBlockUpdateType $shouldHandleUpgradeForBlock(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockPos $rawSize() const;
#else // @header-generator platform
    MCAPI ::BlockPos $rawSize() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::br::worldgen::StructureTemplateBlockPalette $randomPalette(::BlockPos) const;
#else // @header-generator platform
    MCAPI ::br::worldgen::StructureTemplateBlockPalette $randomPalette(::BlockPos) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCNAPI static void** $vftableForILegacyStructureTemplate();

    MCNAPI static void** $vftableForIStructureTemplate();
#endif // @header-generator platform
    // NOLINTEND
};
