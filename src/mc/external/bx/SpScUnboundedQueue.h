#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace bx { struct AllocatorI; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace bx {

class SpScUnboundedQueue {
public:
    // SpScUnboundedQueue inner types declare
    // clang-format off
    struct Node;
    // clang-format on

    // SpScUnboundedQueue inner types define
#if defined(LL_PLAT_C) // @header-generator platform
    struct Node {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, void*>                           m_ptr;
        ::ll::TypedStorage<8, 8, ::bx::SpScUnboundedQueue::Node*> m_next;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::bx::AllocatorI*>               m_allocator;
    ::ll::TypedStorage<8, 8, ::bx::SpScUnboundedQueue::Node*> m_first;
    ::ll::TypedStorage<8, 8, ::bx::SpScUnboundedQueue::Node*> m_divider;
    ::ll::TypedStorage<8, 8, ::bx::SpScUnboundedQueue::Node*> m_last;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~SpScUnboundedQueue();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    struct Node {};
#endif // @header-generator platform
};

} // namespace bx
#endif // @header-generator platform
