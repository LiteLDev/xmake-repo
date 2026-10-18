#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class Blob {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // Blob inner types declare
    // clang-format off
    struct Deleter;
    // clang-format on
#else // @header-generator platform
    using value_type      = std::uint8_t;
    using delete_function = void (*)(value_type*);
    using size_type       = std::size_t;
    using pointer         = value_type*;
    using const_pointer   = const value_type*;
    using iterator        = value_type*;
    using const_iterator  = const value_type*;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    // Blob inner types define
#else // @header-generator platform
#endif // @header-generator platform
    struct Deleter {
#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, void (*)(uchar*)> m_func;
        // NOLINTEND
#else // @header-generator platform
        delete_function m_func;

        LLAPI Deleter() noexcept;
        LLAPI explicit Deleter(delete_function f) noexcept;
        LLAPI void operator()(value_type* p) const noexcept;
#endif // @header-generator platform
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using pointer_type = std::unique_ptr<uchar[], mce::Blob::Deleter>;
#else // @header-generator platform
    using pointer_type = std::unique_ptr<value_type[], Deleter>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using delete_function = void (*)(uchar*);
#else // @header-generator platform
private:
    pointer_type mBlob;
    size_type    mSize{0};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using size_type = ulong;

    using value_type = uchar;

    using iterator = uchar*;

    using const_iterator = uchar const*;

    using pointer = uchar*;

    using const_pointer = uchar const*;
#else // @header-generator platform
private:
    static void defaultDeleter(value_type* p) noexcept;
#endif // @header-generator platform

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::unique_ptr<uchar[], mce::Blob::Deleter>> mBlob;
    ::ll::TypedStorage<8, 8, ulong>                                         mSize;
    // NOLINTEND
#else // @header-generator platform
    LLNDAPI Blob() noexcept;
    LLNDAPI explicit Blob(size_type size);
    LLNDAPI Blob(const value_type* ptr, size_type size);
    LLNDAPI Blob(const Blob&);
    LLNDAPI Blob(Blob&&) noexcept;
    LLNDAPI Blob(pointer_type&& ptr, size_type size) noexcept;
    LLAPI ~Blob();
    LLAPI Blob& operator=(const Blob&);
    LLAPI Blob& operator=(Blob&& rhs) noexcept;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Blob();
#else // @header-generator platform
    LLNDAPI iterator       begin() noexcept;
    LLNDAPI iterator       end() noexcept;
    LLNDAPI const_iterator cbegin() const noexcept;
    LLNDAPI const_iterator cend() const noexcept;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Blob(::mce::Blob&&);
#else // @header-generator platform
    LLNDAPI bool          empty() const noexcept;
    LLNDAPI size_type     size() const noexcept;
    LLNDAPI size_type     max_size() const noexcept;
    LLNDAPI pointer       data() noexcept;
    LLNDAPI const_pointer data() const noexcept;
    LLNDAPI pointer       get() noexcept;
    LLNDAPI const_pointer get() const noexcept;
    LLNDAPI pointer_type  release() noexcept;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Blob(std::unique_ptr<uchar[], mce::Blob::Deleter>&&, ulong const);
#else // @header-generator platform
    LLNDAPI gsl::span<unsigned char> getSpan();
    LLNDAPI gsl::span<const unsigned char> getSpan() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    LLAPI void fillBlob(std::uint8_t val);
    LLAPI void swap(Blob& other) noexcept;
#endif // @header-generator platform
};

} // namespace mce
