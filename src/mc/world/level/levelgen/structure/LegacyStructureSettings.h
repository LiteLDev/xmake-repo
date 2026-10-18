#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/levelgen/structure/BoundingBox.h"
#include "mc/world/level/levelgen/structure/Projection.h"

// auto generated forward declare list
// clang-format off
class Block;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPalette;
class Random;
#else // @header-generator platform
#endif // @header-generator platform
class StructurePoolBlockRule;
class StructurePoolBlockTagRule;
// clang-format on

class LegacyStructureSettings {
public:
    // LegacyStructureSettings inner types declare
    // clang-format off
    struct IndexedName;
    // clang-format on

    // LegacyStructureSettings inner types define
    struct IndexedName {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ulong> mGroupIndex;
        ::ll::TypedStorage<8, 8, ulong> mBlockIndex;
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, uint64> mGroupIndex;
        ::ll::TypedStorage<8, 8, uint64> mBlockIndex;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                                          mIntegrity;
    ::ll::TypedStorage<4, 4, uint>                                                           mSeed;
    ::ll::TypedStorage<1, 1, ::Projection>                                                   mProjection;
    ::ll::TypedStorage<1, 1, ::Mirror>                                                       mMirror;
    ::ll::TypedStorage<1, 1, ::Rotation>                                                     mRotation;
    ::ll::TypedStorage<1, 1, bool>                                                           mIgnoreStructureBlocks;
    ::ll::TypedStorage<1, 1, bool>                                                           mIgnoreJigsawBlocks;
    ::ll::TypedStorage<1, 1, bool>                                                           mWaterBelowSeaLevel;
    ::ll::TypedStorage<8, 8, ::Block const*>                                                 mIgnoreBlock;
    ::ll::TypedStorage<8, 8, ::ChunkPos>                                                     mChunkPos;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                                    mRefPos;
    ::ll::TypedStorage<4, 24, ::BoundingBox>                                                 mBoundingBox;
    ::ll::TypedStorage<8, 40, std::unordered_map<uchar, uchar>>                              mSwapAuxValues;
    ::ll::TypedStorage<8, 8, std::vector<std::unique_ptr<StructurePoolBlockRule>> const*>    mBlockRules;
    ::ll::TypedStorage<8, 8, std::vector<std::unique_ptr<StructurePoolBlockTagRule>> const*> mBlockTagRules;
    ::ll::TypedStorage<8, 24, std::vector<std::vector<std::reference_wrapper<const HashedString>>>> mGroupedBlockIds;
    ::ll::TypedStorage<8, 24, std::map<HashedString, LegacyStructureSettings::IndexedName>>         mIndexedNames;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                                             mIntegrity;
    ::ll::TypedStorage<4, 4, uint>                                                              mSeed;
    ::ll::TypedStorage<1, 1, ::Projection>                                                      mProjection;
    ::ll::TypedStorage<1, 1, ::Mirror>                                                          mMirror;
    ::ll::TypedStorage<1, 1, ::Rotation>                                                        mRotation;
    ::ll::TypedStorage<1, 1, bool>                                                              mIgnoreStructureBlocks;
    ::ll::TypedStorage<1, 1, bool>                                                              mIgnoreJigsawBlocks;
    ::ll::TypedStorage<1, 1, bool>                                                              mWaterBelowSeaLevel;
    ::ll::TypedStorage<8, 8, ::Block const*>                                                    mIgnoreBlock;
    ::ll::TypedStorage<8, 8, ::ChunkPos>                                                        mChunkPos;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                                       mRefPos;
    ::ll::TypedStorage<4, 24, ::BoundingBox>                                                    mBoundingBox;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uchar, uchar>>                               mSwapAuxValues;
    ::ll::TypedStorage<8, 8, ::std::vector<::std::unique_ptr<::StructurePoolBlockRule>> const*> mBlockRules;
    ::ll::TypedStorage<8, 8, ::std::vector<::std::unique_ptr<::StructurePoolBlockTagRule>> const*> mBlockTagRules;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::vector<::std::reference_wrapper<::HashedString const>>>>
                                                                                                  mGroupedBlockIds;
    ::ll::TypedStorage<8, 16, ::std::map<::HashedString, ::LegacyStructureSettings::IndexedName>> mIndexedNames;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    LegacyStructureSettings(LegacyStructureSettings const&);
    LegacyStructureSettings();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI LegacyStructureSettings();
#else // @header-generator platform
    MCAPI LegacyStructureSettings(
        ::Mirror             mirror,
        ::Rotation           rotation,
        ::Block const*       ignoreBlock,
        ::BoundingBox const& boundingBox
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI LegacyStructureSettings(::LegacyStructureSettings const&);
#else // @header-generator platform
    MCAPI ::LegacyStructureSettings& operator=(::LegacyStructureSettings const& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI LegacyStructureSettings(::Mirror, ::Rotation, ::Block const*, ::BoundingBox const&);

    MCNAPI void addSwapAuxValue(int, int);

    MCNAPI ::BoundingBox const& getBoundingBox();

    MCNAPI ::Mirror const& getMirror() const;

    MCNAPI ::BlockPos const& getRefPos() const;

    MCNAPI ::Rotation const& getRotation() const;

    MCNAPI void placeWaterBelowSeaLevel(bool);

    MCNAPI void setBlockRules(std::vector<std::unique_ptr<StructurePoolBlockRule>> const*);

    MCNAPI void setBlockTagRules(std::vector<std::unique_ptr<StructurePoolBlockTagRule>> const*);

    MCNAPI void setBoundingBox(::BoundingBox const&);

    MCNAPI void setIgnoreBlock(::Block const*);

    MCNAPI void setIntegrity(float);

    MCNAPI void setMirror(::Mirror);

    MCNAPI void setProjection(::Projection const);

    MCNAPI void setRefPos(::BlockPos const&);

    MCNAPI void setRotation(::Rotation);

    MCNAPI void setSeed(uint);

    MCNAPI ~LegacyStructureSettings();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& INTEGRITY_MAX();

    MCNAPI static float const& INTEGRITY_MIN();

    MCNAPI static int const& MAX_STRUCTURE_SIZE();
#else // @header-generator platform
    MCAPI ~LegacyStructureSettings();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::LegacyStructureSettings const&);

    MCNAPI void* $ctor(::Mirror, ::Rotation, ::Block const*, ::BoundingBox const&);
#else // @header-generator platform
    MCAPI void*
    $ctor(::Mirror mirror, ::Rotation rotation, ::Block const* ignoreBlock, ::BoundingBox const& boundingBox);
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
};
