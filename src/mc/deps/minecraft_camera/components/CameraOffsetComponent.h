#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

struct CameraOffsetComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mEntityOffset;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>>  mViewOffset;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mCalculatedOffset;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mPivot;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mCaclulatedViewOffset;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mOriginalEntityOffset;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>>  mOriginalViewOffset;
#else // @header-generator platform
    ::ll::TypedStorage<4, 12, ::glm::vec3> mEntityOffset;
    ::ll::TypedStorage<4, 8, ::glm::vec2>  mViewOffset;
    ::ll::TypedStorage<4, 12, ::glm::vec3> mCalculatedOffset;
    ::ll::TypedStorage<4, 12, ::glm::vec3> mPivot;
    ::ll::TypedStorage<4, 12, ::glm::vec3> mCaclulatedViewOffset;
    ::ll::TypedStorage<4, 12, ::glm::vec3> mOriginalEntityOffset;
    ::ll::TypedStorage<4, 8, ::glm::vec2>  mOriginalViewOffset;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    CameraOffsetComponent& operator=(CameraOffsetComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace MinecraftCamera
