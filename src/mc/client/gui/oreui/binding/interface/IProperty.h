#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace OreUI::Detail { class IPropertyObject; }
namespace cohtml { class Binder; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace OreUI::Detail { class IPropertyObject; }
namespace cohtml { class Binder; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI::Detail {

#if defined(LL_PLAT_A) // @header-generator platform
class IProperty {
public:
    // IProperty inner types define
    using NameType = char const* const;

    using ListenerSignature = std::function<void()>;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IProperty() = default;

    virtual char const* const name() const = 0;

    virtual void bind(::cohtml::Binder*, void*) = 0;

    virtual ::Bedrock::PubSub::Subscription setObserver(std::function<void()> const&) = 0;

    virtual void updateParent(::OreUI::Detail::IPropertyObject*) = 0;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class IProperty {
public:
    // IProperty inner types define
    using NameType = char const* const;

    using ListenerSignature = ::std::function<void()>;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IProperty() = default;

    virtual char const* const name() const = 0;

    virtual void bind(::cohtml::Binder* binder, void* object) = 0;

    virtual ::Bedrock::PubSub::Subscription setObserver(::std::function<void()> const& observer) = 0;

    virtual void updateParent(::OreUI::Detail::IPropertyObject* parent) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IProperty {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI::Detail
