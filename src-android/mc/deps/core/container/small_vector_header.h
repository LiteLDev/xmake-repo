#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::detail {

class small_vector_header {
public:
    // small_vector_header inner types define
    using size_type = uint;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::byte*> m_data;
    ::ll::TypedStorage<4, 4, uint>         m_size;
    ::ll::TypedStorage<4, 4, uint>         m_capacity;
    // NOLINTEND

public:
    // prevent constructor by default
    small_vector_header();
};

} // namespace Bedrock::detail
