#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::detail {

class small_vector_header {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // small_vector_header inner types define
    using size_type = uint;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::byte*> m_data;
    ::ll::TypedStorage<4, 4, uint>         m_size;
    ::ll::TypedStorage<4, 4, uint>         m_capacity;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnke5820e;
    ::ll::UntypedStorage<4, 4> mUnk63f043;
    ::ll::UntypedStorage<4, 4> mUnk5b1f65;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    small_vector_header& operator=(small_vector_header const&);
    small_vector_header(small_vector_header const&);
#endif // @header-generator platform
    small_vector_header();
};

} // namespace Bedrock::detail
