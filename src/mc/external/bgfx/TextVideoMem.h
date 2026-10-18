#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "cstdarg"
#else // @header-generator platform
#endif // @header-generator platform

namespace bgfx {

struct TextVideoMem {
public:
    // TextVideoMem inner types declare
    // clang-format off
    struct MemSlot;
    // clang-format on

    // TextVideoMem inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct MemSlot {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, uchar> attribute;
        ::ll::TypedStorage<1, 1, uchar> character;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::bgfx::TextVideoMem::MemSlot*> m_mem;
    ::ll::TypedStorage<4, 4, uint>                           m_size;
    ::ll::TypedStorage<2, 2, ushort>                         m_width;
    ::ll::TypedStorage<2, 2, ushort>                         m_height;
    ::ll::TypedStorage<1, 1, bool>                           m_small;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void printf(ushort, ushort, uchar, char const*);

    MCNAPI void printfVargs(ushort, ushort, uchar, char const*, ::__va_list);

    MCNAPI ~TextVideoMem();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    struct MemSlot {};
#endif // @header-generator platform
};

} // namespace bgfx
