#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

namespace MinecraftCamera {

struct CameraAttachComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 24>               mAttachTo;
    ::ll::TypedStorage<8, 40, ::HashedString> mLocator;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAttachComponent& operator=(CameraAttachComponent const&);
};

} // namespace MinecraftCamera
