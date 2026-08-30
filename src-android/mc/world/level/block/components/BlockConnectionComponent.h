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
        ::ll::TypedStorage<8, 8, ::gsl::not_null<const Block*>> mBlock;
        ::ll::TypedStorage<4, 4, int>                           mUpdateFlags;
        // NOLINTEND
    };

    struct ConnectionData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<2, 8>                                                       mDirections;
        ::ll::TypedStorage<8, 8, std::unique_ptr<BlockTrait::IConnectionUpdateCallback>> mUpdateCallback;
        ::ll::TypedStorage<4, 4, int>                                                    mUpdateFlags;
        // NOLINTEND

    public:
        // prevent constructor by default
        ConnectionData& operator=(ConnectionData const&);
        ConnectionData(ConnectionData const&);
        ConnectionData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<BlockConnectionComponent::ConnectionData>> mConnectionData;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockConnectionComponent& operator=(BlockConnectionComponent const&);
    BlockConnectionComponent(BlockConnectionComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addCallback(
        ::BlockType&,
        ::NeighborBlockDirections const&,
        std::unique_ptr<BlockTrait::IConnectionUpdateCallback>,
        int
    );

    MCNAPI ::Block const&
    handleConnectionUpdate(::BlockSource&, ::Block const&, ::BlockPos const&, ::NeighborBlockDirections const&) const;
    // NOLINTEND
};
