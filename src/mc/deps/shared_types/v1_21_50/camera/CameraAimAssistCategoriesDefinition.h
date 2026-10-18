#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_50/camera/CameraAimAssistCategoryDefinition.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace cereal { struct ReflectionCtx; }
#else // @header-generator platform
namespace SharedTypes::v1_21_50 { struct CameraAimAssistCategoryDefinition; }
#endif // @header-generator platform
// clang-format on

namespace SharedTypes::v1_21_50 {

struct CameraAimAssistCategoriesDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition>> mCategories;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition>> mCategories;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_50
