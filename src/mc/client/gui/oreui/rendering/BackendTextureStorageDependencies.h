#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Gameface { class IRenderingBackendTextureService; }
namespace Gameface { class TemporaryTextureHolder; }
namespace Gameface::RenderUtils { struct BackendRenderConfig; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Gameface { class IRenderingBackendTextureService; }
namespace Gameface { class TemporaryTextureHolder; }
namespace Gameface::RenderUtils { struct BackendRenderConfig; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace Gameface {

#if defined(LL_PLAT_A) // @header-generator platform
struct BackendTextureStorageDependencies {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Gameface::TemporaryTextureHolder&>                         mTemporaryTextureHolder;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Gameface::IRenderingBackendTextureService>&> mTextureService;
    ::ll::TypedStorage<8, 8, ::Gameface::RenderUtils::BackendRenderConfig&&>              mConfig;
    // NOLINTEND

public:
    // prevent constructor by default
    BackendTextureStorageDependencies& operator=(BackendTextureStorageDependencies const&);
    BackendTextureStorageDependencies(BackendTextureStorageDependencies const&);
    BackendTextureStorageDependencies();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct BackendTextureStorageDependencies {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Gameface::TemporaryTextureHolder&>                             mTemporaryTextureHolder;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Gameface::IRenderingBackendTextureService>&> mTextureService;
    ::ll::TypedStorage<8, 8, ::Gameface::RenderUtils::BackendRenderConfig&&>                  mConfig;
    // NOLINTEND

public:
    // prevent constructor by default
    BackendTextureStorageDependencies& operator=(BackendTextureStorageDependencies const&);
    BackendTextureStorageDependencies(BackendTextureStorageDependencies const&);
    BackendTextureStorageDependencies();
};
#else // @header-generator platform
struct BackendTextureStorageDependencies {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace Gameface
