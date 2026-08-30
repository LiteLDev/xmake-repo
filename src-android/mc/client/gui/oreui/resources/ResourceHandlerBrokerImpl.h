#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/resources/ResourceHandlerBroker.h"
#include "mc/external/gameface/cohtml/IAsyncResourceHandler.h"

// auto generated forward declare list
// clang-format off
namespace Gameface { class IResourceHandler; }
// clang-format on

namespace Gameface {

class ResourceHandlerBrokerImpl : public ::Gameface::ResourceHandlerBroker, public ::cohtml::IAsyncResourceHandler {
public:
    // ResourceHandlerBrokerImpl inner types declare
    // clang-format off
    struct ResourceHandlerData;
    // clang-format on

    // ResourceHandlerBrokerImpl inner types define
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
};

} // namespace Gameface
