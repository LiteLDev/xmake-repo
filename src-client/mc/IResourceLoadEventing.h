#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Resources { struct ResourceLoadSessionData; }
// clang-format on

class IResourceLoadEventing {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IResourceLoadEventing() = default;

    virtual void recordProgressHandlerTime(std::string const&, float) = 0;

    virtual void onProgressHandlersComplete() = 0;

    virtual bool areProgressHandlersComplete() const = 0;

    virtual bool hasProgressHandlerTimes() const = 0;

    virtual void clearProgressHandlerTimes() = 0;

    virtual void fireEvent(::Bedrock::Resources::ResourceLoadSessionData const&) = 0;
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
