#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/block/Connection.h"
#include "mc/deps/shared_types/v1_26_20/block/MultiBlock.h"
#include "mc/deps/shared_types/v1_26_20/block/PlacementDirection.h"
#include "mc/deps/shared_types/v1_26_20/block/PlacementPosition.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

#endif // @header-generator platform
namespace SharedTypes::v1_26_20::BlockDefinition {

struct Traits {
public:
    // Traits inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using TraitVariant = std::variant<
        SharedTypes::v1_26_20::BlockDefinition::Connection,
        SharedTypes::v1_26_20::BlockDefinition::MultiBlock,
        SharedTypes::v1_26_20::BlockDefinition::PlacementDirection,
        SharedTypes::v1_26_20::BlockDefinition::PlacementPosition>;
#else // @header-generator platform
    using TraitVariant = ::std::variant<
        ::SharedTypes::v1_26_20::BlockDefinition::Connection,
        ::SharedTypes::v1_26_20::BlockDefinition::MultiBlock,
        ::SharedTypes::v1_26_20::BlockDefinition::PlacementDirection,
        ::SharedTypes::v1_26_20::BlockDefinition::PlacementPosition>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_20::BlockDefinition::Connection>          mConnection;
    ::ll::TypedStorage<2, 6, ::SharedTypes::v1_26_20::BlockDefinition::MultiBlock>          mMultiBlock;
    ::ll::TypedStorage<8, 40, ::SharedTypes::v1_26_20::BlockDefinition::PlacementDirection> mPlacementDirection;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_20::BlockDefinition::PlacementPosition>   mPlacementPosition;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~Traits();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& CONNECTION_ID();

    MCAPI static ::std::string_view const& MULTI_BLOCK_ID();

    MCAPI static ::std::string_view const& PLACEMENT_DIRECTION_ID();

    MCAPI static ::std::string_view const& PLACEMENT_POSITION_ID();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
