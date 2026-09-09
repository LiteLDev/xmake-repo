#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/GeometryProtocolType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IFileAccess;
class ResourcePackManager;
namespace Core { class FileSystem; }
namespace Gameface { class IResourceHandler; }
namespace OreUI { class ResourceAllowList; }
namespace OreUI { struct RegisterResourceHandlersArguments; }
namespace Social { class IUserManager; }
// clang-format on

namespace OreUI {

struct ResourceHandlerFactoryArguments {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::ResourcePackManager const&> mPackManager;
    ::ll::UntypedStorage<8, 24> mFileSystem;
    ::ll::UntypedStorage<8, 24> mAppPackageFileAccess;
    ::ll::UntypedStorage<8, 24> mRawFileAccess;
    ::ll::UntypedStorage<8, 24> mUserManager;
    ::ll::UntypedStorage<8, 24> mResourceAllowList;
    ::ll::UntypedStorage<8, 48> mCreateGeometryAtlasResourceHandler;
    ::ll::TypedStorage<8, 48, std::function<std::unique_ptr<Gameface::IResourceHandler> (const OreUI::RegisterResourceHandlersArguments&)>> mCreateMinimapResourceHandler;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ResourceHandlerFactoryArguments& operator=(ResourceHandlerFactoryArguments const&);
    ResourceHandlerFactoryArguments();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ResourceHandlerFactoryArguments(::OreUI::ResourceHandlerFactoryArguments const&);

    MCNAPI ~ResourceHandlerFactoryArguments();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::ResourceHandlerFactoryArguments const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
