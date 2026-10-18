#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_20/structure/template_pool/Projection.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace SharedTypes::v1_21_50 {

struct JigsawJunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                              mSourceX;
    ::ll::TypedStorage<4, 4, int>                                                              mSourceGroundY;
    ::ll::TypedStorage<4, 4, int>                                                              mSourceZ;
    ::ll::TypedStorage<4, 4, int>                                                              mDeltaY;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_21_20::JigsawStructureTemplatePool::Projection> mDestProjection;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace SharedTypes::v1_21_50
