#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/util/BidirectionalUnorderedMap.h"

// auto generated forward declare list
// clang-format off
class DimensionConversionData;
class Vec3;
struct DimensionType;
// clang-format on

class VanillaDimensions {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool convertPointBetweenDimensions(
        ::Vec3 const&,
        ::Vec3&,
        ::DimensionType,
        ::DimensionType,
        ::DimensionConversionData const&
    );

    MCNAPI static ::Bedrock::Result<DimensionType, std::error_code>
    fromSerializedInt(::Bedrock::Result<int, std::error_code>&&);

    MCNAPI static ::DimensionType fromString(std::string const&);

    MCNAPI static int toSerializedInt(::DimensionType const&);

    MCNAPI static std::string const toString(::DimensionType const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BidirectionalUnorderedMap<std::string, DimensionType> const& DimensionMap();

    MCNAPI static ::DimensionType const& Nether();

    MCNAPI static ::DimensionType const& Overworld();

    MCNAPI static ::DimensionType const& TheEnd();

    MCNAPI static ::Vec3 const& TheEndSpawnPoint();

    MCNAPI static ::DimensionType const& Undefined();
    // NOLINTEND
};
