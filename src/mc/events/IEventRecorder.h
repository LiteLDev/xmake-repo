#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Social::Events { class Event; }
namespace Social::Events { class Property; }
// clang-format on

class IEventRecorder {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IEventRecorder() = default;

    virtual uint getPrimaryLocalUser() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unordered_map<std::string, Social::Events::Property> buildCommonProperties(uint) const = 0;
#else // @header-generator platform
    virtual ::std::unordered_map<::std::string, ::Social::Events::Property> buildCommonProperties(uint user) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void recordEvent(::Social::Events::Event&) = 0;
#else // @header-generator platform
    virtual void recordEvent(::Social::Events::Event& event) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
