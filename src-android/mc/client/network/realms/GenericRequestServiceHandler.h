#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/ServiceClient.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class HttpRequestHandler;
class IMinecraftEventing;
namespace Social { class IUserManager; }
// clang-format on

namespace Realms {

class GenericRequestServiceHandler : public ::ServiceClient {
public:
    // prevent constructor by default
    GenericRequestServiceHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GenericRequestServiceHandler();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GenericRequestServiceHandler(::Bedrock::NonOwnerPointer<Social::IUserManager>, ::IMinecraftEventing*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<Social::IUserManager>, ::IMinecraftEventing*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Realms
