#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/file/Path.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Gameface { class ResourceHandlerBroker; }
namespace Gameface { class TemporaryTextureHolder; }
namespace Input::Debug { class ISplitscreenRedirect; }
namespace OreUI { class ILiveViewCollectionConsumer; }
namespace OreUI { struct DebugData; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/file/Path.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Gameface { class ResourceHandlerBroker; }
namespace Gameface { class TemporaryTextureHolder; }
namespace Input::Debug { class ISplitscreenRedirect; }
namespace OreUI { class ILiveViewCollectionConsumer; }
namespace OreUI { struct DebugData; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct LibraryFactoryArguments {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 24>                                                   mPackagePath;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Gameface::ResourceHandlerBroker>>    mResourceHandlerBroker;
    ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::ILiveViewCollectionConsumer>> mLiveViewConsumer;
    ::ll::TypedStorage<8, 8, ::Gameface::TemporaryTextureHolder&>                 mTemporaryTextureHolder;
    ::ll::TypedStorage<8, 8, ::OreUI::DebugData&>                                 mDebugData;
    ::ll::UntypedStorage<8, 24>                                                   mDebugSplitscreenInputRedirect;
    // NOLINTEND

public:
    // prevent constructor by default
    LibraryFactoryArguments& operator=(LibraryFactoryArguments const&);
    LibraryFactoryArguments(LibraryFactoryArguments const&);
    LibraryFactoryArguments();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~LibraryFactoryArguments();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct LibraryFactoryArguments {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Core::Path>                                           mPackagePath;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Gameface::ResourceHandlerBroker>>    mResourceHandlerBroker;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::ILiveViewCollectionConsumer>> mLiveViewConsumer;
    ::ll::TypedStorage<8, 8, ::Gameface::TemporaryTextureHolder&>                     mTemporaryTextureHolder;
    ::ll::TypedStorage<8, 8, ::OreUI::DebugData&>                                     mDebugData;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Input::Debug::ISplitscreenRedirect>>
        mDebugSplitscreenInputRedirect;
    // NOLINTEND

public:
    // prevent constructor by default
    LibraryFactoryArguments& operator=(LibraryFactoryArguments const&);
    LibraryFactoryArguments(LibraryFactoryArguments const&);
    LibraryFactoryArguments();
};
#else // @header-generator platform
struct LibraryFactoryArguments {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
