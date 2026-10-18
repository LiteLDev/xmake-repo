#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "android/native_window.h"

namespace bgfx::gl {

struct SwapChainGL {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ANativeWindow*> m_nwh;
    ::ll::TypedStorage<8, 8, void*>            m_context;
    ::ll::TypedStorage<8, 8, void*>            m_display;
    ::ll::TypedStorage<8, 8, void*>            m_surface;
    // NOLINTEND

public:
    // prevent constructor by default
    SwapChainGL();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SwapChainGL(void*, void*, void*, ::ANativeWindow*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(void*, void*, void*, ::ANativeWindow*);
    // NOLINTEND
};

} // namespace bgfx::gl
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
