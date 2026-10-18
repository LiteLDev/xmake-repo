#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bx/MemoryBlockI.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace bx {

#if defined(LL_PLAT_C) // @header-generator platform
class StaticMemoryBlock : public ::bx::MemoryBlockI {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, void*> m_data;
    ::ll::TypedStorage<4, 4, uint>  m_size;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StaticMemoryBlock() = default;

    virtual void* more(uint _size) /*override*/;

    virtual uint getSize() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void* $more(uint _size);

    MCFOLD uint $getSize();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class StaticMemoryBlock {};
#endif // @header-generator platform

} // namespace bx
#endif // @header-generator platform
