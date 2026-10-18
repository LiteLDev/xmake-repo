#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/buffer_span.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/platform/threading/Mutex.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Block;
class BlockType;
#if defined(LL_PLAT_A) // @header-generator platform
class IUnknownBlockTypeRegistry;
#else // @header-generator platform
#endif // @header-generator platform
class Level;
#if defined(LL_PLAT_A) // @header-generator platform
template<typename T0> class buffer_span_mut;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 40, std::mutex>                    mLegacyBlockStatesConversionWarningMutex;
    ::ll::TypedStorage<8, 24, std::set<std::pair<int, int>>> mLegacyBlockStatesConversionWarningSet;
    ::ll::TypedStorage<8, 24, std::vector<const Block*>>     mBlockFromNetworkId;
    ::ll::TypedStorage<8, 8, ::Level*>                       mLevel;
#else // @header-generator platform
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>       mBlockTypeStatesConversionWarningMutex;
    ::ll::TypedStorage<8, 16, ::std::set<::std::pair<int, int>>> mBlockTypeStatesConversionWarningSet;
    ::ll::TypedStorage<8, 24, ::std::vector<::Block const*>>     mBlockFromNetworkId;
    ::ll::TypedStorage<8, 8, ::Level*>                           mLevel;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    BlockPalette& operator=(BlockPalette const&);
#else // @header-generator platform
#endif // @header-generator platform
    BlockPalette();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockPalette();

    virtual ::BlockPalette::PaletteType getPaletteType();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void appendBlock(::Block const&);
#else // @header-generator platform
    virtual void appendBlock(::Block const& blockState);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Block const& getBlock(uint const&) const;
#else // @header-generator platform
    virtual ::Block const& getBlock(uint const& networkId) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void assignBlockNetworkId(::Block const&, ulong) const;
#else // @header-generator platform
    virtual void assignBlockNetworkId(::Block const& block, uint64 networkId) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit BlockPalette(::BlockPalette::ConstructorToken);
#else // @header-generator platform
    MCAPI explicit BlockPalette(::Level& level);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void cacheBlockComponentData();
#else // @header-generator platform
    MCAPI void cacheBlockComponentData();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const& getBlockFromLegacyData(::NewBlockID, uint) const;
#else // @header-generator platform
    MCAPI ::Block const& getBlockFromLegacyData(::NewBlockID id, uint data) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::NonOwnerPointer<IUnknownBlockTypeRegistry> const getUnknownBlockTypeRegistry() const;
#else // @header-generator platform
    MCAPI bool shouldWarnFor(::NewBlockID id, ushort data) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initFromBlockDefinitions();

    MCNAPI ::Block const& switchBlock(::Block const&, ::BlockType const&) const;
#else // @header-generator platform
    MCAPI ::Block const& switchBlock(::Block const& oldBlock, ::BlockType const& newBlockType) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Block const& convertLegacyBlock(::BlockID, ushort);
#else // @header-generator platform
    MCAPI static ::Block const& convertLegacyBlock(::BlockID id, ushort data);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool
        convertLegacyBlocks(::buffer_span_mut<const Block*>, ::buffer_span<BlockID>, ::buffer_span<NibblePair>, ulong);
#else // @header-generator platform
    MCAPI static bool convertLegacyBlocks(
        ::buffer_span_mut<::Block const*> dst,
        ::buffer_span<::BlockID>          blockIDs,
        ::buffer_span<::NibblePair>       data,
        uint64                            volume
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::BlockPalette::ConstructorToken);
#else // @header-generator platform
    MCAPI void* $ctor(::Level& level);
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
    MCNAPI ::BlockPalette::PaletteType $getPaletteType();
#else // @header-generator platform
    MCFOLD ::BlockPalette::PaletteType $getPaletteType();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $appendBlock(::Block const&);
#else // @header-generator platform
    MCAPI void $appendBlock(::Block const& blockState);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const& $getBlock(uint const&) const;
#else // @header-generator platform
    MCAPI ::Block const& $getBlock(uint const& networkId) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $assignBlockNetworkId(::Block const&, ulong) const;
#else // @header-generator platform
    MCAPI void $assignBlockNetworkId(::Block const& block, uint64 networkId) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
