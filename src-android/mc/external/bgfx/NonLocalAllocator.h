#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/tinystl/list.h"
#include "mc/external/bgfx/tinystl/unordered_map.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { struct TinyStlAllocator; }
// clang-format on

namespace bgfx {

class NonLocalAllocator {
public:
    // NonLocalAllocator inner types declare
    // clang-format off
    struct Free;
    struct Allocation;
    // clang-format on

    // NonLocalAllocator inner types define
    struct Free {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ulong> m_ptr;
        ::ll::TypedStorage<4, 4, uint>  m_size;
        // NOLINTEND

    public:
        // prevent constructor by default
        Free();
    };

    struct Allocation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ulong> m_ptr;
        ::ll::TypedStorage<4, 4, uint>  m_offset;
        // NOLINTEND
    };

    using FreeList = ::tinystl::list<bgfx::NonLocalAllocator::Free, bgfx::TinyStlAllocator>;

    using UsedList = ::tinystl::unordered_map<ulong, uint, bgfx::TinyStlAllocator>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> m_free;
    ::ll::UntypedStorage<8, 32> m_used;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NonLocalAllocator();

    MCNAPI void add(ulong, uint);

    MCNAPI ::bgfx::NonLocalAllocator::Allocation alloc(uint, ushort const);

    MCNAPI void free(ulong);

    MCNAPI ~NonLocalAllocator();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace bgfx
