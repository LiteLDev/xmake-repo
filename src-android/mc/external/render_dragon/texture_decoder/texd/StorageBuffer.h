#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace texd {

class StorageBuffer {
public:
    // StorageBuffer inner types declare
    // clang-format off
    class Implementation;
    // clang-format on

    // StorageBuffer inner types define
    class Implementation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, std::unique_ptr<uchar[]>> mData;
        ::ll::TypedStorage<8, 8, ulong>                    mSize;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<texd::StorageBuffer::Implementation>> mImplementation;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StorageBuffer();

    MCNAPI StorageBuffer(uchar const*, ulong);

    MCNAPI uchar const* data() const;

    MCNAPI ::texd::StorageBuffer& operator=(::texd::StorageBuffer&&);

    MCNAPI ulong size() const;

    MCNAPI ~StorageBuffer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(uchar const*, ulong);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace texd
