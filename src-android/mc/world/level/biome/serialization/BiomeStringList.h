#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeStringList {
public:
    // BiomeStringList inner types define
    using BiomeStringIndex = ushort;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, ushort>> mAllStrings;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                mStrings;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ushort addStringAndGetIndex(std::string const&);

    MCNAPI std::string const& getStringOrEmpty(ushort) const;

    MCNAPI void write(::BinaryStream&) const;

    MCNAPI ~BiomeStringList();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<BiomeStringList, std::error_code> read(::ReadOnlyBinaryStream&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
