#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/dimension/DimensionType.h"
#include "mc/world/level/levelgen/structure/StructureSettings.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class CommandArea;
class CompoundTag;
// clang-format on

class StructureAnimationData {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // prevent constructor by default
    StructureAnimationData& operator=(StructureAnimationData const&);
    StructureAnimationData(StructureAnimationData const&);
    StructureAnimationData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool allBlocksPlaced() const;

    MCNAPI uint getBlocksExpectedToPlace(ulong) const;

    MCNAPI uint getBlocksPlaced() const;

    MCNAPI ::BlockSource& getDimensionBlockSource() const;

    MCNAPI ::BlockPos const& getPosition() const;

    MCNAPI std::string const& getStructureName() const;

    MCNAPI ::StructureSettings const& getStructureSettings() const;

    MCNAPI uint getTotalBlocks() const;

    MCNAPI ::CompoundTag& serialize(::CompoundTag&);

    MCNAPI void setBlocksPlaced(uint);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::StructureAnimationData load(std::string const&, ::CompoundTag const&);
    // NOLINTEND
};
