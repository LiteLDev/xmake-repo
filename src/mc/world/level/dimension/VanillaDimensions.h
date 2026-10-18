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
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    LLNDAPI static std::string toString(DimensionType const& dimension);

public:
#endif // @header-generator platform
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool convertPointBetweenDimensions(
        ::Vec3 const&,
        ::Vec3&,
        ::DimensionType,
        ::DimensionType,
        ::DimensionConversionData const&
#else // @header-generator platform
    MCAPI static bool convertPointBetweenDimensions(
        ::Vec3 const&                    startingPosition,
        ::Vec3&                          outputPosition,
        ::DimensionType                  fromID,
        ::DimensionType                  toID,
        ::DimensionConversionData const& data
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Bedrock::Result<DimensionType, std::error_code>
    fromSerializedInt(::Bedrock::Result<int, std::error_code>&&);
#else // @header-generator platform
    MCAPI static ::Bedrock::Result<::DimensionType> fromSerializedInt(::Bedrock::Result<int>&& i);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::DimensionType fromString(std::string const&);

    MCNAPI static int toSerializedInt(::DimensionType const&);

    MCNAPI static std::string const toString(::DimensionType const&);
#else // @header-generator platform
    MCAPI static ::DimensionType fromString(::std::string const& name);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::BidirectionalUnorderedMap<std::string, DimensionType> const& DimensionMap();
#else // @header-generator platform
    MCAPI static ::BidirectionalUnorderedMap<::std::string, ::DimensionType> const& DimensionMap();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::DimensionType const& Nether();
#else // @header-generator platform
    MCAPI static ::DimensionType const& Nether();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::DimensionType const& Overworld();
#else // @header-generator platform
    MCAPI static ::DimensionType const& Overworld();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::DimensionType const& TheEnd();
#else // @header-generator platform
    MCAPI static ::DimensionType const& TheEnd();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Vec3 const& TheEndSpawnPoint();
#else // @header-generator platform
    MCAPI static ::Vec3 const& TheEndSpawnPoint();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::DimensionType const& Undefined();
#else // @header-generator platform
    MCAPI static ::DimensionType const& Undefined();
#endif // @header-generator platform
    // NOLINTEND
};
