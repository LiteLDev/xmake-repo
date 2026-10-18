#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Status; }
namespace Social::Events { class Event; }
// clang-format on

class IRealmsTelemetry {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IRealmsTelemetry() = default;

    virtual void AddGeneralCall(std::string const&, ::Bedrock::Http::Status) = 0;

    virtual void AddRealmCall(std::string const&, long, ::Bedrock::Http::Status) = 0;

    virtual void PopulateEvent(::Social::Events::Event&) const = 0;

    virtual bool ShouldSendEvent() const = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IRealmsTelemetry {};
#endif // @header-generator platform
