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

    virtual void recordEvent(::Social::Events::Event const&, ::Bedrock::NonOwnerPointer<AppPlatform> const&) = 0;

    virtual void sendEvents(bool) = 0;

    virtual int getEventTagsFilter() const = 0;

    virtual void stopDebugEventLogging() = 0;
    // NOLINTEND
};

} // namespace Social::Events
