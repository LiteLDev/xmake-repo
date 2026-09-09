#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LoadedChunksComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mLoadedChunksCount;
    // NOLINTEND

public:
    // prevent constructor by default
    LoadedChunksComponent& operator=(LoadedChunksComponent const&);
    LoadedChunksComponent(LoadedChunksComponent const&);
};
