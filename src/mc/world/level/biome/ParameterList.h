#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/biome/BiomeNoiseTarget.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/biome/RTree.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Biome;
struct BiomeHashType;
struct BiomeIdType;
struct TargetPoint;
#else // @header-generator platform
struct BiomeNoiseTarget;
#endif // @header-generator platform
// clang-format on

class ParameterList {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<BiomeNoiseTarget>> mNoiseTargets;
    ::ll::TypedStorage<8, 168, std::optional<RTree>>         mTree;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::BiomeNoiseTarget>> mNoiseTargets;
    ::ll::TypedStorage<8, 168, ::std::optional<::RTree>>         mTree;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    ParameterList& operator=(ParameterList const&);
    ParameterList(ParameterList const&);
#else // @header-generator platform
#endif // @header-generator platform
    ParameterList();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ParameterList(std::vector<BiomeNoiseTarget> const&);
#else // @header-generator platform
    MCAPI explicit ParameterList(::std::vector<::BiomeNoiseTarget> const& targets);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ParameterList();
#else // @header-generator platform
    MCAPI ~ParameterList();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::vector<BiomeNoiseTarget> const&);
#else // @header-generator platform
    MCAPI void* $ctor(::std::vector<::BiomeNoiseTarget> const& targets);
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
