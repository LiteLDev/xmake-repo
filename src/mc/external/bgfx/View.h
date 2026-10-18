#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bgfx/Clear.h"
#include "mc/external/bgfx/FrameBufferHandle.h"
#include "mc/external/bgfx/Matrix4.h"
#include "mc/external/bgfx/Rect.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { struct NativeCommandListScope; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace bgfx {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct alignas(64) View {
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
    ::ll::TypedStorage<8, 64, void*>                                           m_userData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void setTransform(
        void const* _view,
        void const* _proj,
        uchar       _flags,
        void const* _proj1,
        void const* _prevView,
        void const* _prevProj,
        void const* _prevWorldPosOffset
    );
    // NOLINTEND
};
#else // @header-generator platform
struct View {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace bgfx
