#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeTagsData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ushort>> mTags;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void write(::BinaryStream&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<BiomeTagsData, std::error_code> read(::ReadOnlyBinaryStream&);
    // NOLINTEND
};
