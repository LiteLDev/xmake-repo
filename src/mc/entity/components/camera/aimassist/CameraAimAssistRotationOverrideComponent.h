#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"

struct CameraAimAssistRotationOverrideComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::Vec2> mRotation;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAimAssistRotationOverrideComponent& operator=(CameraAimAssistRotationOverrideComponent const&);
    CameraAimAssistRotationOverrideComponent(CameraAimAssistRotationOverrideComponent const&);
};
#else // @header-generator platform
struct CameraAimAssistRotationOverrideComponent {};
#endif // @header-generator platform
