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
        ::ll::TypedStorage<8, 8, std::unique_ptr<CompoundTag>>                          mBlockEntityData;
        ::ll::TypedStorage<8, 24, std::vector<StructureBlockPalette::TickingQueueData>> mTickData;
        // NOLINTEND

    public:
        // prevent constructor by default
        BlockPositionData& operator=(BlockPositionData const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool isValid() const;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<CompoundTag>>> mStructurePaletteIdToSerializationId;
    ::ll::TypedStorage<8, 40, std::unordered_map<ulong, StructureBlockPalette::BlockPositionData>> mBlockPositionData;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureBlockPalette& operator=(StructureBlockPalette const&);
    StructureBlockPalette(StructureBlockPalette const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::StructureBlockPaletteLoadResult _parseBlockPalette(::CompoundTag const&);

    MCNAPI ::StructureBlockPaletteLoadResult _parseBlockPositionDataList(::CompoundTag const&);

    MCNAPI void _saveBlockPalette(::CompoundTag&) const;

    MCNAPI void _saveBlockPositionDataList(::CompoundTag&) const;

    MCNAPI void addBlockPositionData(ulong, ::StructureBlockPalette::BlockPositionData);

    MCNAPI ulong addMapping(std::unique_ptr<CompoundTag>);

    MCNAPI std::unordered_map<ulong, StructureBlockPalette::BlockPositionData> const& getAllBlockPositionData() const;

    MCNAPI ::Block const&
    getBlock(::BlockPalette const&, ulong, ::Bedrock::NonOwnerPointer<IUnknownBlockTypeRegistry>) const;

    MCNAPI ::StructureBlockPalette::BlockPositionData const* getBlockPositionData(ulong) const;

    MCNAPI ulong getSize() const;

    MCNAPI bool load(::CompoundTag const&, int);

    MCNAPI void removeBlockPositionData(ulong);

    MCNAPI std::unique_ptr<CompoundTag> save() const;

    MCNAPI ::Block const* tryGetBlock(ulong, ::Bedrock::NonOwnerPointer<IUnknownBlockTypeRegistry>) const;

    MCNAPI ~StructureBlockPalette();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
