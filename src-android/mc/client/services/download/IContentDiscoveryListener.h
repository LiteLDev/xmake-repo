#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct DurableDocument;
// clang-format on

class IContentDiscoveryListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IContentDiscoveryListener();

    virtual void onUpdateFound(std::string const&, ::DurableDocument const&) = 0;
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
