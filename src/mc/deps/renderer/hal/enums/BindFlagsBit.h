#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
enum BindFlagsBit : uint64 {
    // bitfield representation
    NoBindFlags        = 0,
    VertexBufferBit    = 1ull << 0,
    IndexBufferBit     = 1ull << 1,
    ConstantBufferBit  = 1ull << 2,
    ShaderResourceBit  = 1ull << 3,
    StreamOutputBit    = 1ull << 4,
    RenderTargetBit    = 1ull << 5,
    DepthStencilBit    = 1ull << 6,
    UnorderedAccessBit = 1ull << 7,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class BindFlagsBit : uint {
    // bitfield representation
    NoBindFlags        = 0,
    VertexBufferBit    = 1u << 0,
    IndexBufferBit     = 1u << 1,
    ConstantBufferBit  = 1u << 2,
    ShaderResourceBit  = 1u << 3,
    StreamOutputBit    = 1u << 4,
    RenderTargetBit    = 1u << 5,
    DepthStencilBit    = 1u << 6,
    UnorderedAccessBit = 1u << 7,
};
#else // @header-generator platform
enum class BindFlagsBit : uint {};
#endif // @header-generator platform
#endif // @header-generator platform

}
