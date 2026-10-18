#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bx/AllocatorI.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace bx {

#if defined(LL_PLAT_C) // @header-generator platform
class DefaultAllocator : public ::bx::AllocatorI {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DefaultAllocator() /*override*/;

    virtual void* realloc(void* _ptr, uint64 _size, uint64 _align, char const* _file, uint _line) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DefaultAllocator();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void* $realloc(void* _ptr, uint64 _size, uint64 _align, char const* _file, uint _line);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class DefaultAllocator {};
#endif // @header-generator platform

} // namespace bx
#endif // @header-generator platform
