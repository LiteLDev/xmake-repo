#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/Path.h"

// auto generated forward declare list
// clang-format off
namespace Gameface { class TemporaryTextureHolder; }
namespace OreUI { class ILiveViewCollectionPublisher; }
// clang-format on

namespace OreUI {

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

} // namespace OreUI
