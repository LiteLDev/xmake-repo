#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/GeometryProtocolType.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
namespace Gameface { class IResourceHandler; }
namespace OreUI { struct RegisterResourceHandlersArguments; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/GeometryProtocolType.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
namespace Gameface { class IResourceHandler; }
namespace Gameface { class ResourceHandlerBroker; }
namespace OreUI { struct RegisterResourceHandlersArguments; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct ResourceHandlerFactory {
public:
    // ResourceHandlerFactory inner types define
    using Factory = ::brstd::move_only_function<
        ::std::unique_ptr<::Gameface::IResourceHandler>(::OreUI::RegisterResourceHandlersArguments const&) const>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::brstd::move_only_function<
            ::std::unique_ptr<::Gameface::IResourceHandler>(::OreUI::RegisterResourceHandlersArguments const&) const>>
        mCreateHybridResourceHandler;
    ::ll::TypedStorage<
        8,
        64,
        ::brstd::move_only_function<
            ::std::unique_ptr<::Gameface::IResourceHandler>(::OreUI::RegisterResourceHandlersArguments const&) const>>
        mCreatePackResourceHandler;
    ::ll::TypedStorage<
        8,
        64,
        ::brstd::move_only_function<
            ::std::unique_ptr<::Gameface::IResourceHandler>(::OreUI::RegisterResourceHandlersArguments const&) const>>
        mCreateRegisteredResourceHandler;
    ::ll::TypedStorage<
        8,
        64,
        ::brstd::move_only_function<
            ::std::unique_ptr<::Gameface::IResourceHandler>(::OreUI::RegisterResourceHandlersArguments const&) const>>
        mCreateQRCodeResourceHandler;
    ::ll::TypedStorage<
        8,
        64,
        ::brstd::move_only_function<
            ::std::unique_ptr<::Gameface::IResourceHandler>(::OreUI::RegisterResourceHandlersArguments const&) const>>
        mCreateBlockResourceHandler;
    ::ll::TypedStorage<
        8,
        64,
        ::brstd::move_only_function<
            ::std::unique_ptr<::Gameface::IResourceHandler>(::OreUI::RegisterResourceHandlersArguments const&) const>>
        mCreateStructureResourceHandler;
    ::ll::TypedStorage<
        8,
        64,
        ::brstd::move_only_function<
            ::std::unique_ptr<::Gameface::IResourceHandler>(::OreUI::RegisterResourceHandlersArguments const&) const>>
        mCreateProfileImageResourceHandler;
    ::ll::TypedStorage<
        8,
        64,
        ::brstd::move_only_function<
            ::std::unique_ptr<::Gameface::IResourceHandler>(::OreUI::RegisterResourceHandlersArguments const&) const>>
        mCreateHTTPResourceHandler;
    ::ll::TypedStorage<
        8,
        64,
        ::brstd::move_only_function<::std::unique_ptr<::Gameface::IResourceHandler>(
            ::OreUI::RegisterResourceHandlersArguments const&,
            ::OreUI::GeometryProtocolType
        ) const>>
        mCreateGeometryAtlasResourceHandler;
    ::ll::TypedStorage<
        8,
        64,
        ::brstd::move_only_function<
            ::std::unique_ptr<::Gameface::IResourceHandler>(::OreUI::RegisterResourceHandlersArguments const&) const>>
        mCreateMinimapResourceHandler;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourceHandlerFactory& operator=(ResourceHandlerFactory const&);
    ResourceHandlerFactory(ResourceHandlerFactory const&);
    ResourceHandlerFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ResourceHandlerFactory(::OreUI::ResourceHandlerFactory&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::Gameface::ResourceHandlerBroker> createResourceHandlerBroker(
        ::OreUI::ResourceHandlerFactory const&            factory,
        ::OreUI::RegisterResourceHandlersArguments const& args
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ResourceHandlerFactory&&);
    // NOLINTEND
};
#else // @header-generator platform
struct ResourceHandlerFactory {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
