#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/levelgen/structure/StructureBlockPaletteLoadResult.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPalette;
class CompoundTag;
class IUnknownBlockTypeRegistry;
// clang-format on

class StructureBlockPalette {
public:
    // StructureBlockPalette inner types declare
    // clang-format off
    struct TickingQueueData;
    struct BlockPositionData;
    // clang-format on

    // StructureBlockPalette inner types define
    struct TickingQueueData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mTickDelay;
        // NOLINTEND
    };

    struct BlockPositionData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, std::unique_ptr<CompoundTag>>                          mBlockEntityData;
        ::ll::TypedStorage<8, 24, std::vector<StructureBlockPalette::TickingQueueData>> mTickData;
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompoundTag>>                          mBlockEntityData;
        ::ll::TypedStorage<8, 24, ::std::vector<::StructureBlockPalette::TickingQueueData>> mTickData;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        BlockPositionData& operator=(BlockPositionData const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        BlockPositionData();
#endif // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI bool isValid() const;
#else // @header-generator platform
        MCAPI BlockPositionData(::StructureBlockPalette::BlockPositionData const& rhs);

        MCAPI ~BlockPositionData();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::StructureBlockPalette::BlockPositionData const& rhs);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<CompoundTag>>> mStructurePaletteIdToSerializationId;
    ::ll::TypedStorage<8, 40, std::unordered_map<ulong, StructureBlockPalette::BlockPositionData>> mBlockPositionData;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::CompoundTag>>> mStructurePaletteIdToSerializationId;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint64, ::StructureBlockPalette::BlockPositionData>>
        mBlockPositionData;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    StructureBlockPalette& operator=(StructureBlockPalette const&);
    StructureBlockPalette(StructureBlockPalette const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::StructureBlockPaletteLoadResult _parseBlockPalette(::CompoundTag const&);
#else // @header-generator platform
    MCAPI ::StructureBlockPaletteLoadResult _parseBlockPalette(::CompoundTag const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::StructureBlockPaletteLoadResult _parseBlockPositionDataList(::CompoundTag const&);
#else // @header-generator platform
    MCAPI ::StructureBlockPaletteLoadResult _parseBlockPositionDataList(::CompoundTag const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _saveBlockPalette(::CompoundTag&) const;
#else // @header-generator platform
    MCAPI void _saveBlockPalette(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _saveBlockPositionDataList(::CompoundTag&) const;
#else // @header-generator platform
    MCAPI void _saveBlockPositionDataList(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addBlockPositionData(ulong, ::StructureBlockPalette::BlockPositionData);
#else // @header-generator platform
    MCAPI void addBlockPositionData(uint64 id, ::StructureBlockPalette::BlockPositionData blockPositionData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong addMapping(std::unique_ptr<CompoundTag>);
#else // @header-generator platform
    MCAPI ::Block const& getBlock(
        ::BlockPalette const&                                   blockPalette,
        uint64                                                  paletteId,
        ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> unknownBlockRegistry
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unordered_map<ulong, StructureBlockPalette::BlockPositionData> const& getAllBlockPositionData() const;
#else // @header-generator platform
    MCAPI ::StructureBlockPalette::BlockPositionData const* getBlockPositionData(uint64 blockIndex) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const&
    getBlock(::BlockPalette const&, ulong, ::Bedrock::NonOwnerPointer<IUnknownBlockTypeRegistry>) const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::CompoundTag> save() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::StructureBlockPalette::BlockPositionData const* getBlockPositionData(ulong) const;
#else // @header-generator platform
    MCAPI ::Block const*
    tryGetBlock(uint64 paletteId, ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> unknownBlockRegistry) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong getSize() const;

    MCNAPI bool load(::CompoundTag const&, int);

    MCNAPI void removeBlockPositionData(ulong);

    MCNAPI std::unique_ptr<CompoundTag> save() const;

    MCNAPI ::Block const* tryGetBlock(ulong, ::Bedrock::NonOwnerPointer<IUnknownBlockTypeRegistry>) const;

    MCNAPI ~StructureBlockPalette();
#else // @header-generator platform
    MCAPI ~StructureBlockPalette();
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
