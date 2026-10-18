#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cohtml { class IEventHandler; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cohtml { class IEventHandler; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI::Detail {

#if defined(LL_PLAT_A) // @header-generator platform
class IHandlerFactory {
public:
    // IHandlerFactory inner types define
    using eventHandlerPtr = ::cohtml::IEventHandler*;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IHandlerFactory() = default;

    virtual ::cohtml::IEventHandler* makeHandler() const = 0;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class IHandlerFactory {
public:
    // IHandlerFactory inner types define
    using eventHandlerPtr = ::cohtml::IEventHandler*;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IHandlerFactory() = default;

    virtual ::cohtml::IEventHandler* makeHandler() const = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IHandlerFactory {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI::Detail
