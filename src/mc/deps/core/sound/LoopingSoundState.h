#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LoopingSoundState {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> position;
    ::ll::TypedStorage<4, 4, float>                                    pitch;
    ::ll::TypedStorage<4, 4, float>                                    volume;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 12> mUnkfa5aff;
    ::ll::UntypedStorage<4, 4>  mUnk28d4e8;
    ::ll::UntypedStorage<4, 4>  mUnk1a6f03;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    LoopingSoundState& operator=(LoopingSoundState const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    LoopingSoundState(LoopingSoundState const&);
    LoopingSoundState();
#endif // @header-generator platform
};
