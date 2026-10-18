#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_10/scatter_params/CoordinateEvaluationOrder.h"
#include "mc/platform/Result.h"
#include "mc/util/molang/ExpressionOp.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/biome/serialization/BiomeCoordinateData.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BinaryStream;
#else // @header-generator platform
#endif // @header-generator platform
class ReadOnlyBinaryStream;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct BiomeCoordinateData;
#endif // @header-generator platform
// clang-format on

struct BiomeScatterParamData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<BiomeCoordinateData>>                  mCoordinates;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::BiomeCoordinateData>>              mCoordinates;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_21_10::CoordinateEvaluationOrder> mEvalOrder;
    ::ll::TypedStorage<2, 2, ::ExpressionOp>                                     mChancePercentType;
    ::ll::TypedStorage<2, 2, ushort>                                             mChancePercent;
    ::ll::TypedStorage<4, 4, int>                                                mChanceNumerator;
    ::ll::TypedStorage<4, 4, int>                                                mChanceDenominator;
    ::ll::TypedStorage<2, 2, ::ExpressionOp>                                     mIterationsType;
    ::ll::TypedStorage<2, 2, ushort>                                             mIterations;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::BiomeScatterParamData const&) const;

    MCNAPI void write(::BinaryStream&) const;
#else // @header-generator platform
    MCAPI bool operator==(::BiomeScatterParamData const& other) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Bedrock::Result<BiomeScatterParamData, std::error_code> read(::ReadOnlyBinaryStream&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::Bedrock::Result<::BiomeScatterParamData> read(::ReadOnlyBinaryStream& stream);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
