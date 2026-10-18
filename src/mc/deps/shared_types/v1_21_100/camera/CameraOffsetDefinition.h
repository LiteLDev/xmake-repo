#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_100 {

struct CameraOffsetDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mViewOffset;
    ::ll::TypedStorage<4, 12, ::Vec3>                                 mEntityOffset;
#else // @header-generator platform
    ::ll::TypedStorage<4, 8, ::glm::vec2> mViewOffset;
    ::ll::TypedStorage<4, 12, ::Vec3>     mEntityOffset;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    CameraOffsetDefinition& operator=(CameraOffsetDefinition const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
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
