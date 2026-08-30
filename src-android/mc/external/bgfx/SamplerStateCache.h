#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/tinystl/unordered_map.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { struct TinyStlAllocator; }
// clang-format on

namespace bgfx::gl {

class SamplerStateCache {
public:
    // SamplerStateCache inner types define
    using HashMap = ::tinystl::unordered_map<uint, uint, bgfx::TinyStlAllocator>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> m_hashMap;
    // NOLINTEND
};

} // namespace bgfx::gl
