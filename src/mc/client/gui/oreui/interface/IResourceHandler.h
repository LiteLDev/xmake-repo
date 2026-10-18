#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/interface/ResourceHandlerStatus.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/interface/ResourceHandlerStatus.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
namespace Gameface { class ResourceResponse; }
namespace Gameface { class ResourceStreamResponse; }
namespace Gameface { struct ResourceRequest; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace Gameface {

#if defined(LL_PLAT_A) // @header-generator platform
class IResourceHandler {
public:
    // IResourceHandler inner types define
    using Status = ::Gameface::ResourceHandlerStatus;
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class IResourceHandler {
public:
    // IResourceHandler inner types define
    using Status = ::Gameface::ResourceHandlerStatus;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IResourceHandler() = default;

    virtual ::Gameface::ResourceHandlerStatus
    onResourceRequest(::Gameface::ResourceRequest const& request, ::Gameface::ResourceResponse& response) = 0;

    virtual ::Gameface::ResourceHandlerStatus onResourceStreamRequest(
        ::Gameface::ResourceRequest const&  request,
        ::Gameface::ResourceStreamResponse& response
    ) = 0;

    virtual void update() = 0;

    virtual void onViewCreate(::IClientInstance& primaryClient);

    virtual void onAppPreSuspend();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $onViewCreate(::IClientInstance& primaryClient);

    MCFOLD void $onAppPreSuspend();
    // NOLINTEND
};
#else // @header-generator platform
class IResourceHandler {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace Gameface
