#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/dragon/RenderMetadata.h"
#include "mc/external/render_dragon/mesh/ResolvedIndexBufferResource.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

struct RenderChunkDirectIndexData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, std::optional<dragon::RenderMetadata> const> mRenderMetadata;
    ::ll::UntypedStorage<8, 32>                                            mIndexData;
    ::ll::TypedStorage<4, 4, int>                                          mIterationCount;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderChunkDirectIndexData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int getIterationCount() const;

    MCNAPI bool isValid() const;

    MCNAPI void setIterationCount(int);

    MCNAPI ~RenderChunkDirectIndexData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
