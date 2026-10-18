#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/legacy/spawn/BiomeConditions.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/legacy/spawn/Description.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace SharedTypes::Legacy::Spawn { struct BiomeConditions; }
namespace cereal { struct ReflectionCtx; }
// clang-format on
#endif // @header-generator platform

namespace SharedTypes::Legacy::Spawn {

struct Contents {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 48, ::SharedTypes::Legacy::Spawn::Description>                mDescription;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::Legacy::Spawn::BiomeConditions>> mBiomeConditions;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::SharedTypes::Legacy::Spawn::Description>                    mDescription;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::Spawn::BiomeConditions>> mBiomeConditions;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~Contents();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SemVersion const& VERSION();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::Legacy::Spawn
