#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

#endif // @header-generator platform
namespace SharedTypes::v3_0_0::PackManifestDefinition {

#if defined(LL_PLAT_A) // @header-generator platform
struct RelaxedSemVersion : public ::SemVersion {};
#else // @header-generator platform
struct RelaxedSemVersion : public ::SemVersion {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace SharedTypes::v3_0_0::PackManifestDefinition
