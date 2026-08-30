#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx::gl {

struct Workaround {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> m_detachShader;
    ::ll::TypedStorage<1, 1, bool> m_forceGLES20ShaderCompilation;
    // NOLINTEND
};

} // namespace bgfx::gl
