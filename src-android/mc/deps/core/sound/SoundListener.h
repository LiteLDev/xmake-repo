#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SoundListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mForward;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mUp;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mPos;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mVel;
    // NOLINTEND

public:
    // prevent constructor by default
    SoundListener& operator=(SoundListener const&);
};
