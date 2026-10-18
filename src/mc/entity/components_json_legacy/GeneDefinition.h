#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/entity/components_json_legacy/GeneticVariant.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/util/IntRange.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
struct GeneticVariant;
// clang-format on
#endif // @header-generator platform

struct GeneDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                 mName;
    ::ll::TypedStorage<4, 8, ::IntRange>                   mAlleleRange;
    ::ll::TypedStorage<8, 24, std::vector<GeneticVariant>> mGeneticVariants;
    ::ll::TypedStorage<1, 1, bool>                         mUseSimplifiedBreeding;
    ::ll::TypedStorage<4, 4, float>                        mMutationRateOverride;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                   mName;
    ::ll::TypedStorage<4, 8, ::IntRange>                       mAlleleRange;
    ::ll::TypedStorage<8, 24, ::std::vector<::GeneticVariant>> mGeneticVariants;
    ::ll::TypedStorage<1, 1, bool>                             mUseSimplifiedBreeding;
    ::ll::TypedStorage<4, 4, float>                            mMutationRateOverride;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    GeneDefinition& operator=(GeneDefinition const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI GeneDefinition(::GeneDefinition const&);

    MCNAPI void addGeneticVariant(::GeneticVariant const&);

    MCNAPI ~GeneDefinition();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::GeneDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void addGeneticVariant(::GeneticVariant const& geneticVariant);
#endif // @header-generator platform
    // NOLINTEND
};
