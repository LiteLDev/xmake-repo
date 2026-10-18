#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"

// auto generated forward declare list
// clang-format off
class ChunkSource;
class LevelChunk;
// clang-format on

class ISubChunkManagerConnector {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ISubChunkManagerConnector() = default;

    virtual ::Bedrock::PubSub::Connector<void (ChunkSource&, LevelChunk&, short, bool)>& getOnSubChunkLoadedConnector() = 0;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
class ISubChunkManagerConnector {};
#endif // @header-generator platform
