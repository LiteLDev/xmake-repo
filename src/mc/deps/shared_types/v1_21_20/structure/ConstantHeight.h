#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/v1_21_20/structure/VerticalAnchorLocation.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_20 { template<typename T0> class VerticalAnchorValue; }
// clang-format on
#else // @header-generator platform
#include "mc/deps/shared_types/v1_21_20/structure/VerticalAnchorValue.h"
#endif // @header-generator platform

namespace SharedTypes::v1_21_20 {

struct ConstantHeight {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<4, 8> mValue;
#else // @header-generator platform
    ::ll::TypedStorage<
        2,
        4,
        ::std::variant<
            ::SharedTypes::v1_21_20::VerticalAnchorValue<0>,
            ::SharedTypes::v1_21_20::VerticalAnchorValue<1>,
            ::SharedTypes::v1_21_20::VerticalAnchorValue<2>,
            ::SharedTypes::v1_21_20::VerticalAnchorValue<3>>>
        mValue;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20
