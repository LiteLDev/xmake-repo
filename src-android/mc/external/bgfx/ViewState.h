#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/Matrix4.h"
#include "mc/external/bgfx/Rect.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { struct Frame; }
// clang-format on

namespace bgfx {

struct ViewState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 32768>                  m_viewTmp;
    ::ll::UntypedStorage<4, 32768>                  m_viewProj;
    ::ll::TypedStorage<8, 16, ::bgfx::Matrix4* [2]> m_view;
    ::ll::UntypedStorage<2, 16>                     m_rect;
    ::ll::TypedStorage<4, 64, ::bgfx::Matrix4>      m_invView;
    ::ll::TypedStorage<4, 64, ::bgfx::Matrix4>      m_invProj;
    ::ll::TypedStorage<4, 64, ::bgfx::Matrix4>      m_invViewProj;
    ::ll::UntypedStorage<4, 32768>                  m_prevViewProj;
    ::ll::TypedStorage<4, 4, float>                 m_alphaRef;
    ::ll::UntypedStorage<4, 4096>                   m_prevWorldPosOffset;
    ::ll::TypedStorage<2, 2, ushort>                m_invViewCached;
    ::ll::TypedStorage<2, 2, ushort>                m_invProjCached;
    ::ll::TypedStorage<2, 2, ushort>                m_invViewProjCached;
    // NOLINTEND
};

} // namespace bgfx
