#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/catalog/content_binary/Type.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct CommonContent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>              id;
    ::ll::TypedStorage<8, 24, std::string>              url;
    ::ll::TypedStorage<1, 1, ::ContentBinary::Type>     mBinaryType;
    ::ll::TypedStorage<8, 24, std::string>              maxClientVersion;
    ::ll::TypedStorage<8, 24, std::string>              minClientVersion;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> tags;
    // NOLINTEND

public:
    // prevent constructor by default
    CommonContent& operator=(CommonContent const&);
    CommonContent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CommonContent(::CommonContent const&);

    MCNAPI ~CommonContent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CommonContent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct CommonContent {};
#endif // @header-generator platform
