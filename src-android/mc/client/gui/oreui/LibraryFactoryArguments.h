#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace OreUI {

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

} // namespace OreUI
