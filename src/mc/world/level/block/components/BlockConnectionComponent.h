#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/NeighborBlockDirections.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class BlockType;
namespace BlockTrait { class IConnectionUpdateCallback; }
// clang-format on

class BlockConnectionComponent {
public:
    // BlockConnectionComponent inner types declare
    // clang-format off
    struct BlockConnectionResult;
    struct ConnectionData;
    // clang-format on

    // BlockConnectionComponent inner types define
    struct BlockConnectionResult {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ::gsl::not_null<const Block*>> mBlock;
        ::ll::TypedStorage<4, 4, int>                           mUpdateFlags;
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, ::gsl::not_null<::Block const*>> mBlock;
        ::ll::TypedStorage<4, 4, int>                             mUpdateFlags;
#endif // @header-generator platform
        // NOLINTEND
    };

    struct ConnectionData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<2, 8>                                                       mDirections;
        ::ll::TypedStorage<8, 8, std::unique_ptr<BlockTrait::IConnectionUpdateCallback>> mUpdateCallback;
        ::ll::TypedStorage<4, 4, int>                                                    mUpdateFlags;
#else // @header-generator platform
        ::ll::TypedStorage<2, 2, ::NeighborBlockDirections>                                  mDirections;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockTrait::IConnectionUpdateCallback>> mUpdateCallback;
        ::ll::TypedStorage<4, 4, int>                                                        mUpdateFlags;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        ConnectionData& operator=(ConnectionData const&);
        ConnectionData(ConnectionData const&);
        ConnectionData();
#else // @header-generator platform
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<BlockConnectionComponent::ConnectionData>> mConnectionData;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockConnectionComponent::ConnectionData>> mConnectionData;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    BlockConnectionComponent& operator=(BlockConnectionComponent const&);
    BlockConnectionComponent(BlockConnectionComponent const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addCallback(
        ::BlockType&,
        ::NeighborBlockDirections const&,
        std::unique_ptr<BlockTrait::IConnectionUpdateCallback>,
        int
#else // @header-generator platform
    MCAPI void addCallback(
        ::BlockType&                                               blockType,
        ::NeighborBlockDirections const&                           neighborBlockDirections,
        ::std::unique_ptr<::BlockTrait::IConnectionUpdateCallback> callback,
        int                                                        updateFlags
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const&
    handleConnectionUpdate(::BlockSource&, ::Block const&, ::BlockPos const&, ::NeighborBlockDirections const&) const;
#else // @header-generator platform
    MCAPI ::Block const& handleConnectionUpdate(
        ::BlockSource&                   region,
        ::Block const&                   block,
        ::BlockPos const&                pos,
        ::NeighborBlockDirections const& neighborDirections
    ) const;
#endif // @header-generator platform
    // NOLINTEND
};
