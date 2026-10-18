#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/v1_21_60/spawn/BiomeConditions.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/v1_21_60/spawn/Description.h"
#include "mc/deps/shared_types/v1_21_60/spawn/Placement.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace SharedTypes::v1_21_60::Spawn { struct BiomeConditions; }
namespace cereal { struct ReflectionCtx; }
// clang-format on
#endif // @header-generator platform

namespace SharedTypes::v1_21_60::Spawn {

struct Contents {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_21_60::Spawn::Description>                mDescription;
    ::ll::TypedStorage<8, 104, std::optional<SharedTypes::v1_21_60::Spawn::Placement>>    mPlacement;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_60::Spawn::BiomeConditions>> mBiomeConditions;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::SharedTypes::v1_21_60::Spawn::Description>                    mDescription;
    ::ll::TypedStorage<8, 136, ::std::optional<::SharedTypes::v1_21_60::Spawn::Placement>>    mPlacement;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_60::Spawn::BiomeConditions>> mBiomeConditions;
    // NOLINTEND

public:
    // prevent constructor by default
    Contents& operator=(Contents const&);
    Contents();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Contents(::SharedTypes::v1_21_60::Spawn::Contents const&);

    MCAPI ::SharedTypes::v1_21_60::Spawn::Contents& operator=(::SharedTypes::v1_21_60::Spawn::Contents&&);

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
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_21_60::Spawn::Contents const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60::Spawn
