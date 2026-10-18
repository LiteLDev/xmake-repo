#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/resources/ResourceHandlerBroker.h"
#include "mc/external/gameface/cohtml/IAsyncResourceHandler.h"

// auto generated forward declare list
// clang-format off
namespace Gameface { class IResourceHandler; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/resources/ResourceHandlerBroker.h"
#include "mc/external/gameface/cohtml/IAsyncResourceHandler.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
namespace Gameface { class IResourceHandler; }
namespace cohtml { class IAsyncResourceRequest; }
namespace cohtml { class IAsyncResourceResponse; }
namespace cohtml { class IAsyncResourceStreamResponse; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace Gameface {

#if defined(LL_PLAT_A) // @header-generator platform
class ResourceHandlerBrokerImpl : public ::Gameface::ResourceHandlerBroker, public ::cohtml::IAsyncResourceHandler {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ResourceHandlerBrokerImpl : public ::Gameface::ResourceHandlerBroker, public ::cohtml::IAsyncResourceHandler {
#else // @header-generator platform
class ResourceHandlerBrokerImpl {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // ResourceHandlerBrokerImpl inner types declare
    // clang-format off
    struct ResourceHandlerData;
    // clang-format on

    // ResourceHandlerBrokerImpl inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct ResourceHandlerData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>                                protocol;
        ::ll::TypedStorage<8, 8, std::unique_ptr<Gameface::IResourceHandler>> resourceHandler;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<Gameface::ResourceHandlerBrokerImpl::ResourceHandlerData>> mResourceHandlers;
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct ResourceHandlerData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                                  protocol;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Gameface::IResourceHandler>> resourceHandler;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::Gameface::ResourceHandlerBrokerImpl::ResourceHandlerData>>
        mResourceHandlers;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ResourceHandlerBrokerImpl() /*override*/ = default;

    virtual void OnResourceRequest(
        ::cohtml::IAsyncResourceRequest const* request,
        ::cohtml::IAsyncResourceResponse*      response
    ) /*override*/;

    virtual void OnResourceStreamRequest(
        ::cohtml::IAsyncResourceRequest const*  request,
        ::cohtml::IAsyncResourceStreamResponse* response
    ) /*override*/;

    virtual void OnAbortResourceRequest(uint) /*override*/;

    virtual void update() /*override*/;

    virtual void registerResourceHandler(
        ::std::string const&                            protocol,
        ::std::unique_ptr<::Gameface::IResourceHandler> resourceHandler
    ) /*override*/;

    virtual void unregisterResourceHandler(::std::string const& protocol) /*override*/;

    virtual void onViewCreate(::IClientInstance& clientInstance) /*override*/;

    virtual void onAppPreSuspend() /*override*/;

    virtual ::cohtml::IAsyncResourceHandler* getCohtmlHandler() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void
    $OnResourceRequest(::cohtml::IAsyncResourceRequest const* request, ::cohtml::IAsyncResourceResponse* response);

    MCAPI void $OnResourceStreamRequest(
        ::cohtml::IAsyncResourceRequest const*  request,
        ::cohtml::IAsyncResourceStreamResponse* response
    );

    MCFOLD void $OnAbortResourceRequest(uint);

    MCAPI void $update();

    MCAPI void $registerResourceHandler(
        ::std::string const&                            protocol,
        ::std::unique_ptr<::Gameface::IResourceHandler> resourceHandler
    );

    MCAPI void $unregisterResourceHandler(::std::string const& protocol);

    MCAPI void $onViewCreate(::IClientInstance& clientInstance);

    MCAPI void $onAppPreSuspend();

    MCFOLD ::cohtml::IAsyncResourceHandler* $getCohtmlHandler();
    // NOLINTEND
#else // @header-generator platform
    struct ResourceHandlerData {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace Gameface
