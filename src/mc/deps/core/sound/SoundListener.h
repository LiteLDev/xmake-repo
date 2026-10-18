#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SoundListener {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mForward;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mUp;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mPos;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mVel;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 12> mUnkabf945;
    ::ll::UntypedStorage<4, 12> mUnk9be9fd;
    ::ll::UntypedStorage<4, 12> mUnke99481;
    ::ll::UntypedStorage<4, 12> mUnk5f0426;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    SoundListener& operator=(SoundListener const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    SoundListener(SoundListener const&);
    SoundListener();
#endif // @header-generator platform
};
