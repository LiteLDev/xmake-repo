#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct BiomeReplacementData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<2, 2, ushort>               mReplacementBiome;
    ::ll::TypedStorage<2, 2, ushort>               mDimension;
    ::ll::TypedStorage<8, 24, std::vector<ushort>> mTargetBiomes;
    ::ll::TypedStorage<4, 4, float>                mAmount;
    ::ll::TypedStorage<4, 4, float>                mNoiseFrequencyScale;
    ::ll::TypedStorage<4, 4, uint>                 mReplacementIndex;
#else // @header-generator platform
    ::ll::TypedStorage<2, 2, ushort>                 mReplacementBiome;
    ::ll::TypedStorage<2, 2, ushort>                 mDimension;
    ::ll::TypedStorage<8, 24, ::std::vector<ushort>> mTargetBiomes;
    ::ll::TypedStorage<4, 4, float>                  mAmount;
    ::ll::TypedStorage<4, 4, float>                  mNoiseFrequencyScale;
    ::ll::TypedStorage<4, 4, uint>                   mReplacementIndex;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~BiomeReplacementData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
