#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace OreUI::Detail { class IdType; }
namespace cohtml { class Binder; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace OreUI::Detail { class IdType; }
namespace cohtml { class Binder; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI::Detail {

#if defined(LL_PLAT_A) // @header-generator platform
class ICallable {
public:
    // ICallable inner types define
    using NameType = char const* const;

    using ErrorType = int;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ICallable() = default;

    virtual char const* const name() const = 0;

    virtual ::OreUI::Detail::IdType id() const = 0;

    virtual void bind(::cohtml::Binder*, void*) = 0;

    virtual void success() = 0;

    virtual void fail() = 0;

    virtual void fail(int) = 0;

    virtual void progress(uchar) = 0;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ICallable {
public:
    // ICallable inner types define
    using ErrorType = int;

    using NameType = char const* const;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ICallable() = default;

    virtual char const* const name() const = 0;

    virtual ::OreUI::Detail::IdType id() const = 0;

    virtual void bind(::cohtml::Binder* binder, void* object) = 0;

    virtual void success() = 0;

    virtual void fail(int) = 0;

    virtual void fail() = 0;

    virtual void progress(uchar) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class ICallable {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI::Detail
