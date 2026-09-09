#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_10/scatter_params/CoordinateEvaluationOrder.h"
#include "mc/platform/Result.h"
#include "mc/util/molang/ExpressionOp.h"
#include "mc/world/level/biome/serialization/BiomeCoordinateData.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeScatterParamData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<BiomeCoordinateData>>                  mCoordinates;
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
    MCNAPI bool operator==(::BiomeScatterParamData const&) const;

    MCNAPI void write(::BinaryStream&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<BiomeScatterParamData, std::error_code> read(::ReadOnlyBinaryStream&);
    // NOLINTEND
};
