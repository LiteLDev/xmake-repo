#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once
#include "mc/external/render_dragon/texture_decoder/texd/CompressionScheme.h"

namespace texd {
struct CompressedBlockInfo;
};

namespace texd {
LLAPI CompressedBlockInfo getCompressedBlockSize(CompressionScheme scheme);
};
#endif // @header-generator platform
