#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_0/camera/CameraSplineDefinition.h"
#include "mc/platform/Result.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BinaryStream;
class ReadOnlyBinaryStream;
namespace cereal { struct ReflectionCtx; }
#else // @header-generator platform
namespace SharedTypes::v1_26_0 { struct CameraSplineDefinition; }
#endif // @header-generator platform
// clang-format on

namespace SharedTypes::v1_26_0 {

struct CameraSplinesDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_26_0::CameraSplineDefinition>> mSplines;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_26_0::CameraSplineDefinition>> mSplines;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_0
