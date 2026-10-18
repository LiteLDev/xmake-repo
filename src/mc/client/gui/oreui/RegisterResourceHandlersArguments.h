#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/file/Path.h"

// auto generated forward declare list
// clang-format off
namespace Gameface { class TemporaryTextureHolder; }
namespace OreUI { class ILiveViewCollectionPublisher; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/file/Path.h"

// auto generated forward declare list
// clang-format off
namespace Gameface { class TemporaryTextureHolder; }
namespace OreUI { class ILiveViewCollectionPublisher; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct RegisterResourceHandlersArguments {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 24>                                                     mPackagePath;
    ::ll::TypedStorage<8, 8, ::Gameface::TemporaryTextureHolder&>                   mTemporaryTextureHolder;
    ::ll::TypedStorage<8, 16, std::shared_ptr<OreUI::ILiveViewCollectionPublisher>> mLiveViewPublisher;
    ::ll::UntypedStorage<8, 48>                                                     mReloadAllViews;
    // NOLINTEND

public:
    // prevent constructor by default
    RegisterResourceHandlersArguments& operator=(RegisterResourceHandlersArguments const&);
    RegisterResourceHandlersArguments(RegisterResourceHandlersArguments const&);
    RegisterResourceHandlersArguments();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct RegisterResourceHandlersArguments {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Core::Path>                                             mPackagePath;
    ::ll::TypedStorage<8, 8, ::Gameface::TemporaryTextureHolder&>                       mTemporaryTextureHolder;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::OreUI::ILiveViewCollectionPublisher>> mLiveViewPublisher;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                                  mReloadAllViews;
    // NOLINTEND

public:
    // prevent constructor by default
    RegisterResourceHandlersArguments& operator=(RegisterResourceHandlersArguments const&);
    RegisterResourceHandlersArguments(RegisterResourceHandlersArguments const&);
    RegisterResourceHandlersArguments();
};
#else // @header-generator platform
struct RegisterResourceHandlersArguments {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
