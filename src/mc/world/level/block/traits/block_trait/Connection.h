#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
#include "mc/world/level/block/traits/block_trait/ITrait.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockType;
class CompoundTag;
class IConstBlockSource;
class NeighborBlockDirections;
namespace cereal { struct ReflectionCtx; }
// clang-format on
#endif // @header-generator platform

namespace BlockTrait {

class Connection : public ::BlockTrait::ITrait {
public:
    // Connection inner types declare
    // clang-format off
    struct EnabledConnectionStatesContainer;
    // clang-format on

    // Connection inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class Type : int {
        Standard = 0,
    };

#else // @header-generator platform
#endif // @header-generator platform
    enum class EnabledConnectionStates : int {
        Cardinal = 0,
#if defined(LL_PLAT_A) // @header-generator platform
        _Count   = 1,
#else // @header-generator platform
        Count    = 1,
    };

    enum class Type : int {
        Standard = 0,
#endif // @header-generator platform
    };

    struct EnabledConnectionStatesContainer {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<1, 1> mStates;
#else // @header-generator platform
        ::ll::TypedStorage<1, 1, ::Bedrock::EnumSet<::BlockTrait::Connection::EnabledConnectionStates, 1>> mStates;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                        mUpdateFlags;
    ::ll::TypedStorage<4, 4, ::BlockTrait::Connection::Type>                             mType;
    ::ll::TypedStorage<1, 1, ::BlockTrait::Connection::EnabledConnectionStatesContainer> mEnabledConnectionStates;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Connection() /*override*/ = default;

    virtual void applyToBlockType(::BlockType& blockType) const /*override*/;

    virtual void initializeFromNetwork(::CompoundTag const& compoundTag, ::cereal::ReflectionCtx const&) /*override*/;

    virtual ::std::unique_ptr<::CompoundTag> _buildNetworkTag(::cereal::ReflectionCtx const&) const /*override*/;

    virtual ::std::string const& _getName() const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::NeighborBlockDirections getConnectedDirections(
        ::IConstBlockSource const& region,
        ::Block const&             block,
        ::BlockPos const&          pos,
        ::NeighborBlockDirections  directionsToCheck
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $applyToBlockType(::BlockType& blockType) const;

    MCAPI void $initializeFromNetwork(::CompoundTag const& compoundTag, ::cereal::ReflectionCtx const&);

    MCAPI ::std::unique_ptr<::CompoundTag> $_buildNetworkTag(::cereal::ReflectionCtx const&) const;

    MCAPI ::std::string const& $_getName() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace BlockTrait
