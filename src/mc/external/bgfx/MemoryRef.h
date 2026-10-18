#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bgfx/Memory.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bgfx/Memory.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace bgfx {

#if defined(LL_PLAT_A) // @header-generator platform
struct MemoryRef {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::bgfx::Memory>        mem;
    ::ll::TypedStorage<8, 8, void (*)(void*, void*)> releaseFn;
    ::ll::TypedStorage<8, 8, void*>                  userData;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct MemoryRef {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::bgfx::Memory>        mem;
    ::ll::TypedStorage<8, 8, void (*)(void*, void*)> releaseFn;
    ::ll::TypedStorage<8, 8, void*>                  userData;
    // NOLINTEND
};
#else // @header-generator platform
struct MemoryRef {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace bgfx
