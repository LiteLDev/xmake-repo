#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
#include "mc/deps/shared_types/legacy/BlockDescriptor.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct PlacementDirection {
public:
    // PlacementDirection inner types define
    enum class EnabledState : uchar {
        Cardinal           = 0,
        CornerAndCardinal  = 1,
        Facing             = 2,
        SixteenWayRotation = 3,
#if defined(LL_PLAT_A) // @header-generator platform
        _Count             = 4,
#else // @header-generator platform
        Count              = 4,
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 1>                                                   mEnabledStates;
    ::ll::TypedStorage<4, 8, std::optional<float>>                               mYRotationOffset;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::Legacy::BlockDescriptor>> mBlocksToCornerWith;
#else // @header-generator platform
    ::ll::TypedStorage<
        1,
        1,
        ::Bedrock::EnumSet<::SharedTypes::v1_26_20::BlockDefinition::PlacementDirection::EnabledState, 4>>
                                                                                     mEnabledStates;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                                 mYRotationOffset;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::BlockDescriptor>> mBlocksToCornerWith;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& CARDINAL_ID();

    MCAPI static ::std::string_view const& CORNER_AND_CARDINAL_ID();

    MCAPI static ::std::string_view const& ENABLED_STATES_ID();

    MCAPI static ::std::string_view const& FACING_ID();

    MCAPI static ::std::string_view const& SIXTEEN_WAY_ROTATION_ID();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
