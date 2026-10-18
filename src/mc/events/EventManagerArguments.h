#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class IImGuiModuleConnector;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Social::Events {

struct EventManagerArguments {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Bedrock::NonOwnerPointer<AppPlatform> const&> mAppPlatform;
    ::ll::TypedStorage<8, 8, ::IImGuiModuleConnector*>                       mConnector;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk6b6671;
    ::ll::UntypedStorage<8, 8> mUnk936d21;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    EventManagerArguments& operator=(EventManagerArguments const&);
    EventManagerArguments(EventManagerArguments const&);
    EventManagerArguments();
};

} // namespace Social::Events
