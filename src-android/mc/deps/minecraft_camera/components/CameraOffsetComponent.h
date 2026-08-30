#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

struct CameraOffsetComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mEntityOffset;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>>  mViewOffset;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mCalculatedOffset;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mPivot;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mCaclulatedViewOffset;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mOriginalEntityOffset;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>>  mOriginalViewOffset;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraOffsetComponent& operator=(CameraOffsetComponent const&);
};

} // namespace MinecraftCamera
