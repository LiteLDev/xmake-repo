#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ScalarOptional.h"
#include "mc/world/level/chunk/BlendVersion.h"
#include "mc/world/level/chunk/LevelChunk.h"

// auto generated forward declare list
// clang-format off
class StringByteInput;
class StringByteOutput;
// clang-format on

struct PersistentBlendData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2>               mNeighbors;
    ::ll::UntypedStorage<2, 32>              mHeights;
    ::ll::TypedStorage<1, 1, ::BlendVersion> mBlendVersionWhenSaved;
    ::ll::TypedStorage<1, 1, bool>           mUsedForBlending;
    // NOLINTEND

public:
    // prevent constructor by default
    PersistentBlendData();
};
