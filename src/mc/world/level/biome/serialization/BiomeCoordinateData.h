#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_10/scatter_params/RandomDistributionType.h"
#include "mc/platform/Result.h"
#include "mc/util/molang/ExpressionOp.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BinaryStream;
#else // @header-generator platform
#endif // @header-generator platform
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeCoordinateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::ExpressionOp>                                  mMinValueType;
    ::ll::TypedStorage<2, 2, ushort>                                          mMinValue;
    ::ll::TypedStorage<2, 2, ::ExpressionOp>                                  mMaxValueType;
    ::ll::TypedStorage<2, 2, ushort>                                          mMaxValue;
    ::ll::TypedStorage<4, 4, uint>                                            mGridOffset;
    ::ll::TypedStorage<4, 4, uint>                                            mGridStepSize;
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_21_10::RandomDistributionType> mDistribution;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI void write(::BinaryStream&) const;
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Bedrock::Result<BiomeCoordinateData, std::error_code> read(::ReadOnlyBinaryStream&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::Bedrock::Result<::BiomeCoordinateData> read(::ReadOnlyBinaryStream& stream);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
