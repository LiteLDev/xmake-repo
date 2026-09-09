#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/memory/MemoryStreamBuffer.h"

struct MemoryStream : public ::MemoryStreamBuffer, public ::std::istream {
public:
    // prevent constructor by default
    MemoryStream& operator=(MemoryStream const&);
    MemoryStream();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MemoryStream();
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
