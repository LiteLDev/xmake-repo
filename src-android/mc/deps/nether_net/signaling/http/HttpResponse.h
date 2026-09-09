#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct HttpResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort>                                        statusCode;
    ::ll::TypedStorage<8, 24, std::string>                                  statusText;
    ::ll::TypedStorage<8, 24, std::string>                                  contentType;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::string>> headers;
    ::ll::TypedStorage<8, 24, std::string>                                  body;
    // NOLINTEND

public:
    // prevent constructor by default
    HttpResponse& operator=(HttpResponse const&);

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
};

} // namespace NetherNet
