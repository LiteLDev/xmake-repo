#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/identity/XalApiWrapper.h"

namespace Social {

class XalApiWrapper_android : public ::Social::XalApiWrapper {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~XalApiWrapper_android();

    virtual void _customInvoke(std::function<void()>&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_customInvoke(std::function<void()>&&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Social
