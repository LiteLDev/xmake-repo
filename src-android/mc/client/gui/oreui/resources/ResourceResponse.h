#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Gameface { class UserImageData; }
namespace cohtml { class IAsyncResourceResponse; }
// clang-format on

namespace Gameface {

class ResourceResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::cohtml::IAsyncResourceResponse*> mResponse;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ResourceResponse();

    MCNAPI void fail();

    MCNAPI void* getSpace(ulong);

    MCNAPI void receiveUserImage(::Gameface::UserImageData const&);

    MCNAPI void setHeader(char const*, char const*);

    MCNAPI void setStatus(ushort);

    MCNAPI void succeed();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace Gameface
