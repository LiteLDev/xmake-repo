#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class IImGuiModuleConnector;
// clang-format on

namespace Social::Events {

struct EventManagerArguments {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Bedrock::NonOwnerPointer<AppPlatform> const&> mAppPlatform;
    ::ll::TypedStorage<8, 8, ::IImGuiModuleConnector*>                       mConnector;
    // NOLINTEND

public:
    // prevent constructor by default
    EventManagerArguments& operator=(EventManagerArguments const&);
    EventManagerArguments(EventManagerArguments const&);
    EventManagerArguments();
};

} // namespace Social::Events
