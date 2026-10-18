#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/sound/SoundParameter.h"
#else // @header-generator platform
#endif // @header-generator platform

struct SoundInstanceProperties {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mPosition;
    ::ll::TypedStorage<8, 24, std::vector<SoundParameter>>             mParameters;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 12> mUnk9d79c3;
    ::ll::UntypedStorage<8, 24> mUnk5f8372;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SoundInstanceProperties();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    SoundInstanceProperties& operator=(SoundInstanceProperties const&);
    SoundInstanceProperties(SoundInstanceProperties const&);
    SoundInstanceProperties();
#endif // @header-generator platform
};
