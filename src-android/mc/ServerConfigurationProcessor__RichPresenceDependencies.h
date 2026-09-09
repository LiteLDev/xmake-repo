#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Level;
namespace Social { class MultiplayerServiceManager; }
namespace Social { class User; }
// clang-format on

namespace ServerConfigurationProcessor {

struct RichPresenceDependencies {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Social::MultiplayerServiceManager&> mMultiplayerServiceManager;
    ::ll::TypedStorage<8, 8, ::Social::User*>                      mUser;
    ::ll::TypedStorage<8, 8, ::Level*>                             mRichPresenceLevel;
    // NOLINTEND

public:
    // prevent constructor by default
    RichPresenceDependencies& operator=(RichPresenceDependencies const&);
    RichPresenceDependencies(RichPresenceDependencies const&);
    RichPresenceDependencies();
};

} // namespace ServerConfigurationProcessor
