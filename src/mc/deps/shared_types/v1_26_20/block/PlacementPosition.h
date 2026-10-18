#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct PlacementPosition {
public:
    // PlacementPosition inner types define
    enum class EnabledState : uchar {
        BlockFace    = 0,
        VerticalHalf = 1,
#if defined(LL_PLAT_A) // @header-generator platform
        _Count       = 2,
#else // @header-generator platform
        Count        = 2,
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 1> mEnabledStates;
#else // @header-generator platform
    ::ll::TypedStorage<
        1,
        1,
        ::Bedrock::EnumSet<::SharedTypes::v1_26_20::BlockDefinition::PlacementPosition::EnabledState, 2>>
        mEnabledStates;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& BLOCK_FACE_ID();

    MCAPI static ::std::string_view const& VERTICAL_HALF_ID();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
