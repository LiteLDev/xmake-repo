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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, std::unique_ptr<uchar[]>> mData;
        ::ll::TypedStorage<8, 8, ulong>                    mSize;
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<uchar[0]>> mData;
        ::ll::TypedStorage<8, 8, uint64>                      mSize;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<texd::StorageBuffer::Implementation>> mImplementation;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::texd::StorageBuffer::Implementation>> mImplementation;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    StorageBuffer();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI StorageBuffer();

    MCNAPI StorageBuffer(uchar const*, ulong);

    MCNAPI uchar const* data() const;

    MCNAPI ::texd::StorageBuffer& operator=(::texd::StorageBuffer&&);

    MCNAPI ulong size() const;

    MCNAPI ~StorageBuffer();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI StorageBuffer(uchar const* data, uint64 size);

    MCAPI ~StorageBuffer();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(uchar const*, ulong);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(uchar const* data, uint64 size);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCFOLD void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace texd
