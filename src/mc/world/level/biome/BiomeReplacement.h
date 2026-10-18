#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Biome;
// clang-format on

struct BiomeReplacement {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const Biome*>>             mReplacementBiome;
    ::ll::TypedStorage<8, 24, std::string>                              mDimension;
    ::ll::TypedStorage<8, 24, std::vector<gsl::not_null<const Biome*>>> mTargetBiomes;
    ::ll::TypedStorage<4, 4, float>                                     mAmount;
    ::ll::TypedStorage<4, 4, float>                                     mNoiseFrequencyScale;
    ::ll::TypedStorage<4, 4, uint>                                      mReplacementIndex;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::Biome const*>>                 mReplacementBiome;
    ::ll::TypedStorage<8, 32, ::std::string>                                  mDimension;
    ::ll::TypedStorage<8, 24, ::std::vector<::gsl::not_null<::Biome const*>>> mTargetBiomes;
    ::ll::TypedStorage<4, 4, float>                                           mAmount;
    ::ll::TypedStorage<4, 4, float>                                           mNoiseFrequencyScale;
    ::ll::TypedStorage<4, 4, uint>                                            mReplacementIndex;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeReplacement& operator=(BiomeReplacement const&);
#if defined(LL_PLAT_A) // @header-generator platform
    BiomeReplacement(BiomeReplacement const&);
#else // @header-generator platform
#endif // @header-generator platform
    BiomeReplacement();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~BiomeReplacement();
#else // @header-generator platform
    MCAPI BiomeReplacement(::BiomeReplacement const&);

    MCAPI ~BiomeReplacement();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BiomeReplacement const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
