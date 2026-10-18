#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_110/voxelshape/Box.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_110 { struct Box; }
// clang-format on
#endif // @header-generator platform

namespace SharedTypes::v1_21_110 {

struct Shape {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_110::Box>> mBoxes;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_110::Box>> mBoxes;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110
