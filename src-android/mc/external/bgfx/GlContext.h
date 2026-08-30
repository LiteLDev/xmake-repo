#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "android/native_window.h"

// auto generated forward declare list
// clang-format off
namespace bgfx::gl { struct SwapChainGL; }
// clang-format on

namespace bgfx::gl {

struct GlContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, void*>                    m_eglLibrary;
    ::ll::TypedStorage<8, 8, ::bgfx::gl::SwapChainGL*> m_current;
    ::ll::TypedStorage<8, 8, void*>                    m_config;
    ::ll::TypedStorage<8, 8, void*>                    m_context;
    ::ll::TypedStorage<8, 8, void*>                    m_display;
    ::ll::TypedStorage<8, 8, void*>                    m_surface;
    ::ll::TypedStorage<8, 8, ::ANativeWindow*>         m_nwh;
    ::ll::TypedStorage<1, 1, bool>                     m_framePacing;
    ::ll::TypedStorage<1, 1, bool>                     m_gles3;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void create(uint, uint, uint);

    MCNAPI bool createContext(bool const);

    MCNAPI void createDisplay();

    MCNAPI bool createEglContext(uint, uint, bool, uint, bool const);

    MCNAPI bool createSurface(::ANativeWindow*, bool const);

    MCNAPI ::bgfx::gl::SwapChainGL* createSwapChain(void*);

    MCNAPI void destroy();

    MCNAPI void destroyContext();

    MCNAPI void destroyDisplay();

    MCNAPI void destroySurface();

    MCNAPI void destroySwapChain(::bgfx::gl::SwapChainGL*);

    MCNAPI void frameBegin();

    MCNAPI ulong getCaps() const;

    MCNAPI void import();

    MCNAPI void makeCurrent(::bgfx::gl::SwapChainGL*);

    MCNAPI void resize(uint, uint, uint);

    MCNAPI void swap(::bgfx::gl::SwapChainGL*);
    // NOLINTEND
};

} // namespace bgfx::gl
