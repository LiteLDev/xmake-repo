#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/block/BlockArchetype.h"
#include "mc/deps/shared_types/v1_26_20/block/MaterialType.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace SharedTypes::v1_26_20::BlockDefinition {

struct VanillaBlockData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                       mBlockID;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_20::MaterialType>                     mMaterial;
    ::ll::TypedStorage<8, 48, ::SharedTypes::v1_26_20::BlockDefinition::BlockArchetype> mBlockArchetype;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 8, std::optional<float>>                                      mTranslucency;
#else // @header-generator platform
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                                    mTranslucency;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                                      mCanDampenVibrations;
    ::ll::TypedStorage<1, 1, bool>                                                      mCanOccludeVibrations;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~VanillaBlockData();
#else // @header-generator platform
    MCAPI ~VanillaBlockData();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view const& VanillaBlockArchetypeId();
#else // @header-generator platform
    MCAPI static ::std::string_view const& VanillaBlockArchetypeId();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
