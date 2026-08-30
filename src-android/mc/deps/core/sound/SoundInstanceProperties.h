#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sound/SoundParameter.h"

struct SoundInstanceProperties {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mPosition;
    ::ll::TypedStorage<8, 24, std::vector<SoundParameter>>             mParameters;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SoundInstanceProperties();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
