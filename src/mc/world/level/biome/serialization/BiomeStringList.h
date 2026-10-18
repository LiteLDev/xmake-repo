#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BinaryStream;
#else // @header-generator platform
#endif // @header-generator platform
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeStringList {
public:
    // BiomeStringList inner types define
    using BiomeStringIndex = ushort;

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ushort>> mAllStrings;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                mStrings;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Bedrock::Result<BiomeStringList, std::error_code> read(::ReadOnlyBinaryStream&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::Bedrock::Result<::BiomeStringList> read(::ReadOnlyBinaryStream& stream);
#endif // @header-generator platform
    // NOLINTEND
};
