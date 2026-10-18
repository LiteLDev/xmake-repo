#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bx/MemoryBlockI.h"

// auto generated forward declare list
// clang-format off
namespace bx { struct AllocatorI; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace bx {

#if defined(LL_PLAT_C) // @header-generator platform
class MemoryBlock : public ::bx::MemoryBlockI {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::bx::AllocatorI*> m_allocator;
    ::ll::TypedStorage<8, 8, void*>             m_data;
    ::ll::TypedStorage<4, 4, uint>              m_size;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MemoryBlock() = default;

    virtual void* more(uint) /*override*/;

    virtual uint getSize() /*override*/;
    // NOLINTEND
};
#else // @header-generator platform
class MemoryBlock {};
#endif // @header-generator platform

} // namespace bx
#endif // @header-generator platform
