#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

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

}
