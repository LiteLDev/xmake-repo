#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/buffer_span.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockType;
class IUnknownBlockTypeRegistry;
class Level;
template<typename T0> class buffer_span_mut;
struct BlockID;
struct NewBlockID;
struct NibblePair;
// clang-format on

class BlockPalette {
public:
    // BlockPalette inner types declare
    // clang-format off
    struct ConstructorToken;
    // clang-format on

    // BlockPalette inner types define
    enum class PaletteType : int {
        Sequential = 0,
        Hashed     = 1,
    };

    struct ConstructorToken {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 40, std::mutex>                    mLegacyBlockStatesConversionWarningMutex;
    ::ll::TypedStorage<8, 24, std::set<std::pair<int, int>>> mLegacyBlockStatesConversionWarningSet;
    ::ll::TypedStorage<8, 24, std::vector<const Block*>>     mBlockFromNetworkId;
    ::ll::TypedStorage<8, 8, ::Level*>                       mLevel;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPalette& operator=(BlockPalette const&);
    BlockPalette();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockPalette();

    virtual ::BlockPalette::PaletteType getPaletteType();

    virtual void appendBlock(::Block const&);

    virtual ::Block const& getBlock(uint const&) const;

    virtual void assignBlockNetworkId(::Block const&, ulong) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BlockPalette(::BlockPalette::ConstructorToken);

    MCNAPI void cacheBlockComponentData();

    MCNAPI ::Block const& getBlockFromLegacyData(::NewBlockID, uint) const;

    MCNAPI ::Bedrock::NonOwnerPointer<IUnknownBlockTypeRegistry> const getUnknownBlockTypeRegistry() const;

    MCNAPI void initFromBlockDefinitions();

    MCNAPI ::Block const& switchBlock(::Block const&, ::BlockType const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Block const& convertLegacyBlock(::BlockID, ushort);

    MCNAPI static bool
        convertLegacyBlocks(::buffer_span_mut<const Block*>, ::buffer_span<BlockID>, ::buffer_span<NibblePair>, ulong);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPalette::ConstructorToken);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::BlockPalette::PaletteType $getPaletteType();

    MCNAPI void $appendBlock(::Block const&);

    MCNAPI ::Block const& $getBlock(uint const&) const;

    MCNAPI void $assignBlockNetworkId(::Block const&, ulong) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
