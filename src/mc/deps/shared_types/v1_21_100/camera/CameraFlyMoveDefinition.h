#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace SharedTypes::v1_21_100 {

struct CameraFlyMoveDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                mSpeed;
    ::ll::TypedStorage<4, 8, std::optional<float>> mSprintSpeed;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                  mSpeed;
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mSprintSpeed;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view const& NAME();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::std::string_view const& NAME();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_100
