#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/IntRange.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20 {

struct SpawnOnDeathComponentDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 192, ::SharedTypes::v1_21_20::FilterGroupData> mFilters;
    ::ll::TypedStorage<8, 24, std::string>                               mEntityToSpawn;
    ::ll::TypedStorage<8, 24, std::string>                               mSpawnMethod;
#else // @header-generator platform
    ::ll::TypedStorage<8, 232, ::SharedTypes::v1_21_20::FilterGroupData> mFilters;
    ::ll::TypedStorage<8, 32, ::std::string>                             mEntityToSpawn;
    ::ll::TypedStorage<8, 32, ::std::string>                             mSpawnMethod;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 8, ::SharedTypes::IntRange>                    mAdditionalSpawnRange;
    ::ll::TypedStorage<4, 4, int>                                        mAmount;
    ::ll::TypedStorage<1, 1, bool>                                       mInheritName;
    // NOLINTEND

public:
    // prevent constructor by default
    SpawnOnDeathComponentDefinition& operator=(SpawnOnDeathComponentDefinition const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    SpawnOnDeathComponentDefinition();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SpawnOnDeathComponentDefinition(::SharedTypes::v1_26_20::SpawnOnDeathComponentDefinition const&);
#else // @header-generator platform
    MCAPI SpawnOnDeathComponentDefinition(::SharedTypes::v1_26_20::SpawnOnDeathComponentDefinition const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::SharedTypes::v1_26_20::SpawnOnDeathComponentDefinition const&) const;
#else // @header-generator platform
    MCAPI ::SharedTypes::v1_26_20::SpawnOnDeathComponentDefinition&
    operator=(::SharedTypes::v1_26_20::SpawnOnDeathComponentDefinition&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~SpawnOnDeathComponentDefinition();
#else // @header-generator platform
    MCAPI bool operator==(::SharedTypes::v1_26_20::SpawnOnDeathComponentDefinition const&) const;

    MCAPI ~SpawnOnDeathComponentDefinition();
#endif // @header-generator platform
    // NOLINTEND

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
    MCAPI static ::std::string_view const& NAME();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::v1_26_20::SpawnOnDeathComponentDefinition const&);
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::v1_26_20::SpawnOnDeathComponentDefinition const&);
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

} // namespace SharedTypes::v1_26_20
