#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/dragon/RenderMetadata.h"
#include "mc/external/render_dragon/mesh/ResolvedVertexBufferResource.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

struct RenderChunkDirectVertexData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, std::optional<dragon::RenderMetadata> const> mRenderMetadata;
    ::ll::TypedStorage<1, 1, bool>                                         mSplitStream;
    ::ll::UntypedStorage<8, 32>                                            mVertexData;
    ::ll::UntypedStorage<8, 32>                                            mAttributeData;
    ::ll::UntypedStorage<8, 32>                                            mAdditionalVertexStream;
    ::ll::TypedStorage<8, 8, ulong>                                        mVertexCount;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderChunkDirectVertexData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ulong getMeshVertexCount() const;

    MCNAPI bool isValid() const;

    MCNAPI ~RenderChunkDirectVertexData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct RenderChunkDirectVertexData {};
#endif // @header-generator platform
