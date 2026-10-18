#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class IClientInstance;
namespace Gameface { class IResourceHandler; }
namespace cohtml { class IAsyncResourceHandler; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace Gameface {

#if defined(LL_PLAT_A) // @header-generator platform
class ResourceHandlerBroker {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ResourceHandlerBroker {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ResourceHandlerBroker() = default;

    virtual void update() = 0;

    virtual void registerResourceHandler(
        ::std::string const&                            protocol,
        ::std::unique_ptr<::Gameface::IResourceHandler> resourceHandler
    ) = 0;

    virtual void unregisterResourceHandler(::std::string const& protocol) = 0;

    virtual void onViewCreate(::IClientInstance& clientInstance) = 0;

    virtual void onAppPreSuspend() = 0;

    virtual ::cohtml::IAsyncResourceHandler* getCohtmlHandler() = 0;
    // NOLINTEND
};
#else // @header-generator platform
class ResourceHandlerBroker {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace Gameface
