#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct HttpResponse {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<2, 2, ushort>                                        statusCode;
    ::ll::TypedStorage<8, 24, std::string>                                  statusText;
    ::ll::TypedStorage<8, 24, std::string>                                  contentType;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::string>> headers;
    ::ll::TypedStorage<8, 24, std::string>                                  body;
#else // @header-generator platform
    ::ll::UntypedStorage<2, 2>  mUnka93091;
    ::ll::UntypedStorage<8, 32> mUnke351a8;
    ::ll::UntypedStorage<8, 32> mUnk5b837b;
    ::ll::UntypedStorage<8, 64> mUnk63bd8f;
    ::ll::UntypedStorage<8, 32> mUnkec5d36;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    HttpResponse& operator=(HttpResponse const&);
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HttpResponse(::NetherNet::HttpResponse const&);

    MCNAPI ~HttpResponse();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::NetherNet::HttpResponse const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    HttpResponse(HttpResponse const&);
    HttpResponse();
#endif // @header-generator platform
};

} // namespace NetherNet
