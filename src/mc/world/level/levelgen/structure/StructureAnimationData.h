#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/dimension/DimensionType.h"
#include "mc/world/level/levelgen/structure/StructureSettings.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BlockSource;
#else // @header-generator platform
#endif // @header-generator platform
class CommandArea;
class CompoundTag;
// clang-format on

class StructureAnimationData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong>                        mTickQueued;
    ::ll::TypedStorage<8, 24, std::string>                 mStructureName;
    ::ll::TypedStorage<8, 96, ::StructureSettings>         mStructureSettings;
    ::ll::TypedStorage<4, 4, uint>                         mBlocksPlaced;
    ::ll::TypedStorage<4, 4, uint>                         mTotalBlocks;
    ::ll::TypedStorage<1, 1, uchar>                        mInitialStructureVersion;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CommandArea>> mCmdArea;
    ::ll::TypedStorage<4, 12, ::BlockPos>                  mPlacementPos;
    ::ll::TypedStorage<4, 4, uint>                         mQueueID;
    ::ll::TypedStorage<4, 4, ::DimensionType>              mTargetDimension;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64>                           mTickQueued;
    ::ll::TypedStorage<8, 32, ::std::string>                   mStructureName;
    ::ll::TypedStorage<8, 104, ::StructureSettings>            mStructureSettings;
    ::ll::TypedStorage<4, 4, uint>                             mBlocksPlaced;
    ::ll::TypedStorage<4, 4, uint>                             mTotalBlocks;
    ::ll::TypedStorage<1, 1, uchar>                            mInitialStructureVersion;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CommandArea>> mCmdArea;
    ::ll::TypedStorage<4, 12, ::BlockPos>                      mPlacementPos;
    ::ll::TypedStorage<4, 4, uint>                             mQueueID;
    ::ll::TypedStorage<4, 4, ::DimensionType>                  mTargetDimension;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    StructureAnimationData& operator=(StructureAnimationData const&);
    StructureAnimationData(StructureAnimationData const&);
    StructureAnimationData();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool allBlocksPlaced() const;
#else // @header-generator platform
    MCAPI StructureAnimationData(::StructureAnimationData&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint getBlocksExpectedToPlace(ulong) const;
#else // @header-generator platform
    MCAPI StructureAnimationData(
        ::std::unique_ptr<::CommandArea> cmdArea,
        uint64                           tickQueued,
        ::std::string const&             structureName,
        ::StructureSettings const&       structureSettings,
        uchar                            structureVersion,
        ::BlockPos const&                placementPos
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint getBlocksPlaced() const;
#else // @header-generator platform
    MCAPI ::CompoundTag& serialize(::CompoundTag& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockSource& getDimensionBlockSource() const;

    MCNAPI ::BlockPos const& getPosition() const;

    MCNAPI std::string const& getStructureName() const;

    MCNAPI ::StructureSettings const& getStructureSettings() const;

    MCNAPI uint getTotalBlocks() const;

    MCNAPI ::CompoundTag& serialize(::CompoundTag&);

    MCNAPI void setBlocksPlaced(uint);
#else // @header-generator platform
    MCAPI ~StructureAnimationData();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::StructureAnimationData load(std::string const&, ::CompoundTag const&);
#else // @header-generator platform
    MCAPI static ::StructureAnimationData load(::std::string const& key, ::CompoundTag const& tag);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::StructureAnimationData&&);

    MCAPI void* $ctor(
        ::std::unique_ptr<::CommandArea> cmdArea,
        uint64                           tickQueued,
        ::std::string const&             structureName,
        ::StructureSettings const&       structureSettings,
        uchar                            structureVersion,
        ::BlockPos const&                placementPos
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
