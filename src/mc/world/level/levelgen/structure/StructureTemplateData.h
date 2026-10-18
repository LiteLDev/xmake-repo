#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/chunk/NeighborAwareBlockUpgradeVersionType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/levelgen/structure/StructureBlockPalette.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/levelgen/structure/StructureLoadResult.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class StructureBlockPalette;
#endif // @header-generator platform
// clang-format on

class StructureTemplateData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                                     mFormatVersion;
    ::ll::TypedStorage<4, 4, ::NeighborAwareBlockUpgradeVersionType>                  mNeighborAwareBlockUpgradeVersion;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                             mSize;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                             mStructureWorldOrigin;
    ::ll::TypedStorage<8, 24, std::vector<int>>                                       mBlockIndices;
    ::ll::TypedStorage<8, 24, std::vector<int>>                                       mExtraBlockIndices;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, StructureBlockPalette>> mPalettes;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<CompoundTag>>>              mEntityData;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                    mFormatVersion;
    ::ll::TypedStorage<4, 4, ::NeighborAwareBlockUpgradeVersionType> mNeighborAwareBlockUpgradeVersion;
    ::ll::TypedStorage<4, 12, ::BlockPos>                            mSize;
    ::ll::TypedStorage<4, 12, ::BlockPos>                            mStructureWorldOrigin;
    ::ll::TypedStorage<8, 24, ::std::vector<int>>                    mBlockIndices;
    ::ll::TypedStorage<8, 24, ::std::vector<int>>                    mExtraBlockIndices;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::StructureBlockPalette>> mPalettes;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::CompoundTag>>>              mEntityData;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    StructureTemplateData& operator=(StructureTemplateData const&);
    StructureTemplateData(StructureTemplateData const&);
    StructureTemplateData();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StructureTemplateData();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::StructureLoadResult _parseBlockIndices(::CompoundTag const&);
#else // @header-generator platform
    MCAPI ::StructureLoadResult _parseBlockIndices(::CompoundTag const& structureTag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::StructureLoadResult _parseEntities(::CompoundTag const&);
#else // @header-generator platform
    MCAPI ::StructureLoadResult _parseEntities(::CompoundTag const& structureTag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::StructureLoadResult _parsePalettes(::CompoundTag const&);
#else // @header-generator platform
    MCAPI ::StructureLoadResult _parseFormatVersion(::CompoundTag const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CompoundTag const* _parseStructureTag(::CompoundTag const&);
#else // @header-generator platform
    MCAPI ::StructureLoadResult _parseNeighborAwareBlockUpgradeVersion(::CompoundTag const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _saveFormatVersion(::CompoundTag&) const;
#else // @header-generator platform
    MCAPI ::StructureLoadResult _parsePalettes(::CompoundTag const& structureTag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _saveSize(::CompoundTag&) const;
#else // @header-generator platform
    MCAPI ::StructureLoadResult _parseSize(::CompoundTag const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _saveStructureTag(::CompoundTag&) const;
#else // @header-generator platform
    MCAPI ::CompoundTag const* _parseStructureTag(::CompoundTag const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _saveStructureWorldOrigin(::CompoundTag&) const;
#else // @header-generator platform
    MCAPI ::StructureLoadResult _parseStructureWorldOrigin(::CompoundTag const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::StructureLoadResult _validateSizeAndBlockIndicesSize() const;
#else // @header-generator platform
    MCAPI void _saveBlockIndices(::CompoundTag& structureTag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addEntityData(std::unique_ptr<CompoundTag>);
#else // @header-generator platform
    MCAPI void _saveEntities(::CompoundTag& structureTag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unordered_map<std::string, StructureBlockPalette> const& getAllPalettes() const;
#else // @header-generator platform
    MCAPI void _savePalettes(::CompoundTag& structureTag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<int> const& getBlockIndices() const;
#else // @header-generator platform
    MCAPI void _saveSize(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<int> const& getExtraBlockIndices() const;
#else // @header-generator platform
    MCAPI void _saveStructureTag(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockPos const& getSize() const;
#else // @header-generator platform
    MCAPI void _saveStructureWorldOrigin(::CompoundTag& tag) const;

    MCAPI ::StructureLoadResult _validateSizeAndBlockIndicesSize() const;

    MCAPI void clear();

    MCAPI ::StructureBlockPalette const* getPalette(::std::string const& name) const;

    MCAPI bool load(::CompoundTag const& tag);

    MCAPI ::StructureTemplateData& operator=(::StructureTemplateData&&);

    MCAPI bool operator==(::StructureTemplateData const& other) const;

    MCAPI ::std::unique_ptr<::CompoundTag> save() const;

    MCAPI void setBlockIndices(::std::vector<int> blockIndices);

    MCAPI void setExtraBlockIndices(::std::vector<int> extraBlockIndices);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int const& CURRENT_FORMAT_VERSION();
#else // @header-generator platform
    MCAPI static int const& CURRENT_FORMAT_VERSION();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& DEFAULT_PALETTE_NAME();
#else // @header-generator platform
    MCAPI static ::std::string const& DEFAULT_PALETTE_NAME();
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
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
