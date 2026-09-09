#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/predefined_uniform/PredefinedUniform.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { class UniformBuffer; }
namespace bgfx { struct VertexDecl; }
namespace bgfx::gl { struct ShaderGL; }
// clang-format on

namespace bgfx::gl {

struct ProgramGL {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                            m_id;
    ::ll::TypedStorage<1, 19, uchar[19]>                      m_unboundUsedAttrib;
    ::ll::TypedStorage<1, 1, uchar>                           m_usedCount;
    ::ll::TypedStorage<1, 19, uchar[19]>                      m_used;
    ::ll::TypedStorage<4, 76, int[19]>                        m_attributes;
    ::ll::TypedStorage<4, 24, int[6]>                         m_instanceData;
    ::ll::TypedStorage<4, 256, int[64]>                       m_sampler;
    ::ll::TypedStorage<1, 1, uchar>                           m_numSamplers;
    ::ll::TypedStorage<8, 8, ::bgfx::UniformBuffer*>          m_constantBuffer;
    ::ll::TypedStorage<4, 112, ::bgfx::PredefinedUniform[14]> m_predefined;
    ::ll::TypedStorage<1, 1, uchar>                           m_numPredefined;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void bindAttributes(::bgfx::VertexDecl const&, uint);

    MCNAPI void init();
    // NOLINTEND
};

} // namespace bgfx::gl
