#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class Blob {
public:
    // Blob inner types declare
    // clang-format off
    struct Deleter;
    // clang-format on

    // Blob inner types define
    struct Deleter {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, void (*)(uchar*)> m_func;
        // NOLINTEND
    };

    using pointer_type = std::unique_ptr<uchar[], mce::Blob::Deleter>;

    using delete_function = void (*)(uchar*);

    using size_type = ulong;

    using value_type = uchar;

    using iterator = uchar*;

    using const_iterator = uchar const*;

    using pointer = uchar*;

    using const_pointer = uchar const*;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::unique_ptr<uchar[], mce::Blob::Deleter>> mBlob;
    ::ll::TypedStorage<8, 8, ulong>                                         mSize;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Blob();

    MCNAPI Blob(::mce::Blob&&);

    MCNAPI Blob(std::unique_ptr<uchar[], mce::Blob::Deleter>&&, ulong const);

    MCNAPI uchar const* cbegin() const;

    MCNAPI uchar* data();

    MCNAPI bool empty() const;

    MCNAPI void fillBlob(uchar const);

    MCNAPI uchar const* get() const;

    MCNAPI uchar* get();

    MCNAPI ::gsl::span<const uchar> getSpan() const;

    MCNAPI ::gsl::span<uchar> getSpan();

    MCNAPI ::mce::Blob& operator=(::mce::Blob&&);

    MCNAPI std::unique_ptr<uchar[], mce::Blob::Deleter> release();

    MCNAPI ulong size() const;

    MCNAPI ~Blob();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void defaultDeleter(uchar*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::mce::Blob&&);

    MCNAPI void* $ctor(std::unique_ptr<uchar[], mce::Blob::Deleter>&&, ulong const);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce
