#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeMultinoiseGenRulesData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mTemperature;
    ::ll::TypedStorage<4, 4, float> mHumidity;
    ::ll::TypedStorage<4, 4, float> mAltitude;
    ::ll::TypedStorage<4, 4, float> mWeirdness;
    ::ll::TypedStorage<4, 4, float> mWeight;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void write(::BinaryStream&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<BiomeMultinoiseGenRulesData, std::error_code> read(::ReadOnlyBinaryStream&);
    // NOLINTEND
};
