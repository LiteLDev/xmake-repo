#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/chunk/NeighborAwareBlockUpgradeVersionType.h"
#include "mc/world/level/levelgen/structure/StructureBlockPalette.h"
#include "mc/world/level/levelgen/structure/StructureLoadResult.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

class StructureTemplateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                     mFormatVersion;
    ::ll::TypedStorage<4, 4, ::NeighborAwareBlockUpgradeVersionType>                  mNeighborAwareBlockUpgradeVersion;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                             mSize;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                             mStructureWorldOrigin;
    ::ll::TypedStorage<8, 24, std::vector<int>>                                       mBlockIndices;
    ::ll::TypedStorage<8, 24, std::vector<int>>                                       mExtraBlockIndices;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, StructureBlockPalette>> mPalettes;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<CompoundTag>>>              mEntityData;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StructureTemplateData();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::StructureLoadResult _parseBlockIndices(::CompoundTag const&);

    MCNAPI ::StructureLoadResult _parseEntities(::CompoundTag const&);

    MCNAPI ::StructureLoadResult _parsePalettes(::CompoundTag const&);

    MCNAPI ::CompoundTag const* _parseStructureTag(::CompoundTag const&);

    MCNAPI void _saveFormatVersion(::CompoundTag&) const;

    MCNAPI void _saveSize(::CompoundTag&) const;

    MCNAPI void _saveStructureTag(::CompoundTag&) const;

    MCNAPI void _saveStructureWorldOrigin(::CompoundTag&) const;

    MCNAPI ::StructureLoadResult _validateSizeAndBlockIndicesSize() const;

    MCNAPI void addEntityData(std::unique_ptr<CompoundTag>);

    MCNAPI std::unordered_map<std::string, StructureBlockPalette> const& getAllPalettes() const;

    MCNAPI std::vector<int> const& getBlockIndices() const;

    MCNAPI std::vector<int> const& getExtraBlockIndices() const;

    MCNAPI ::BlockPos const& getSize() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& CURRENT_FORMAT_VERSION();

    MCNAPI static std::string const& DEFAULT_PALETTE_NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
