#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/UniformRegInfo.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { struct UniformHandle; }
namespace bx { template<int T0, typename T1> class HandleHashMapT; }
// clang-format on

namespace bgfx {

class UniformRegistry {
public:
    // UniformRegistry inner types define
    using UniformHashMap = ::bx::HandleHashMapT<1024, uint>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 6152>                            m_uniforms;
    ::ll::TypedStorage<2, 1024, ::bgfx::UniformRegInfo[512]> m_info;
    // NOLINTEND
};

} // namespace bgfx
