#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
namespace Social::Events { class Event; }
// clang-format on

namespace Social::Events {

class IEventListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IEventListener() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void recordEvent(::Social::Events::Event const&, ::Bedrock::NonOwnerPointer<AppPlatform> const&) = 0;
#else // @header-generator platform
    virtual void
    recordEvent(::Social::Events::Event const& event, ::Bedrock::NonOwnerPointer<::AppPlatform> const& appPlatform) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendEvents(bool) = 0;
#else // @header-generator platform
    virtual void sendEvents(bool forceSend) = 0;
#endif // @header-generator platform

    virtual int getEventTagsFilter() const = 0;

    virtual void stopDebugEventLogging() = 0;
    // NOLINTEND
};

} // namespace Social::Events
