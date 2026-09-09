#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct HttpRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> method;
    ::ll::TypedStorage<8, 24, std::string> path;
    ::ll::TypedStorage<8, 24, std::string> body;
    // NOLINTEND

public:
    // prevent constructor by default
    HttpRequest& operator=(HttpRequest const&);
    HttpRequest(HttpRequest const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~HttpRequest();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace NetherNet
