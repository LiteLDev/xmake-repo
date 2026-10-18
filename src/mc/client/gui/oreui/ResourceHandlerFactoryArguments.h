#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct ResourceHandlerFactoryArguments {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ResourcePackManager const&>                               mPackManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Core::FileSystem>>         mFileSystem;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IFileAccess>>              mAppPackageFileAccess;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IFileAccess>>              mRawFileAccess;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>>     mUserManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::ResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<::std::unique_ptr<::Gameface::IResourceHandler>(
            ::OreUI::RegisterResourceHandlersArguments const&,
            ::OreUI::GeometryProtocolType
        )>>
        mCreateGeometryAtlasResourceHandler;
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<
            ::std::unique_ptr<::Gameface::IResourceHandler>(::OreUI::RegisterResourceHandlersArguments const&)>>
        mCreateMinimapResourceHandler;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourceHandlerFactoryArguments& operator=(ResourceHandlerFactoryArguments const&);
    ResourceHandlerFactoryArguments(ResourceHandlerFactoryArguments const&);
    ResourceHandlerFactoryArguments();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ResourceHandlerFactoryArguments();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct ResourceHandlerFactoryArguments {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
