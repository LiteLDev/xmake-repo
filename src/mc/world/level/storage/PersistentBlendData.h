#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/level/ScalarOptional.h"
#include "mc/world/level/chunk/BlendVersion.h"
#include "mc/world/level/chunk/LevelChunk.h"

// auto generated forward declare list
// clang-format off
class StringByteInput;
class StringByteOutput;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct PersistentBlendData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 2>               mNeighbors;
    ::ll::UntypedStorage<2, 32>              mHeights;
    ::ll::TypedStorage<1, 1, ::BlendVersion> mBlendVersionWhenSaved;
    ::ll::TypedStorage<1, 1, bool>           mUsedForBlending;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1>  mUnkfb2e3a;
    ::ll::UntypedStorage<2, 32> mUnkf84333;
    ::ll::UntypedStorage<1, 1>  mUnk5def06;
    ::ll::UntypedStorage<1, 1>  mUnk68d508;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    PersistentBlendData& operator=(PersistentBlendData const&);
    PersistentBlendData(PersistentBlendData const&);
#endif // @header-generator platform
    PersistentBlendData();
};
