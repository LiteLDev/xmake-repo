#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/Clear.h"
#include "mc/external/bgfx/FrameBufferHandle.h"
#include "mc/external/bgfx/Matrix4.h"
#include "mc/external/bgfx/Rect.h"
#include "mc/external/bgfx/ViewMode.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { struct NativeCommandListScope; }
// clang-format on

namespace bgfx {

struct View {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::bgfx::Clear>                                   m_clear;
    ::ll::TypedStorage<2, 8, ::bgfx::Rect>                                     m_rect;
    ::ll::TypedStorage<2, 8, ::bgfx::Rect>                                     m_scissor;
    ::ll::TypedStorage<4, 64, ::bgfx::Matrix4>                                 m_view;
    ::ll::TypedStorage<4, 128, ::bgfx::Matrix4[2]>                             m_proj;
    ::ll::TypedStorage<4, 64, ::bgfx::Matrix4>                                 m_prevView;
    ::ll::TypedStorage<4, 128, ::bgfx::Matrix4[2]>                             m_prevProj;
    ::ll::TypedStorage<4, 16, float[4]>                                        m_prevWorldPosOffset;
    ::ll::TypedStorage<2, 2, ::bgfx::FrameBufferHandle>                        m_fbh;
    ::ll::TypedStorage<1, 1, uchar>                                            m_mode;
    ::ll::TypedStorage<1, 1, uchar>                                            m_flags;
    ::ll::TypedStorage<8, 8, void (*)(void*, ::bgfx::NativeCommandListScope*)> m_nativeCallback;
    ::ll::UntypedStorage<8, 64>                                                m_userData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void setTransform(void const*, void const*, uchar, void const*, void const*, void const*, void const*);
    // NOLINTEND
};

} // namespace bgfx
