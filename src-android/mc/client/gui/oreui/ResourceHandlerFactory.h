#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/GeometryProtocolType.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
namespace Gameface { class IResourceHandler; }
namespace OreUI { struct RegisterResourceHandlersArguments; }
// clang-format on

namespace OreUI {

struct ResourceHandlerFactory {
public:
    // ResourceHandlerFactory inner types define
    using Factory = ::brstd::move_only_function<
        std::unique_ptr<Gameface::IResourceHandler>(const OreUI::RegisterResourceHandlersArguments&) const>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mCreateHybridResourceHandler;
    ::ll::UntypedStorage<8, 64> mCreatePackResourceHandler;
    ::ll::UntypedStorage<8, 64> mCreateRegisteredResourceHandler;
    ::ll::UntypedStorage<8, 64> mCreateQRCodeResourceHandler;
    ::ll::UntypedStorage<8, 64> mCreateBlockResourceHandler;
    ::ll::UntypedStorage<8, 64> mCreateStructureResourceHandler;
    ::ll::UntypedStorage<8, 64> mCreateProfileImageResourceHandler;
    ::ll::UntypedStorage<8, 64> mCreateHTTPResourceHandler;
    ::ll::UntypedStorage<8, 64> mCreateGeometryAtlasResourceHandler;
    ::ll::UntypedStorage<8, 64> mCreateMinimapResourceHandler;
    // NOLINTEND
};

} // namespace OreUI
