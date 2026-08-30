#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

struct SortKey {
public:
    // SortKey inner types define
    enum Enum : uint {
        SortProgram  = 0,
        SortDepth    = 1,
        SortSequence = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>   m_depth;
    ::ll::TypedStorage<4, 4, uint>   m_seq;
    ::ll::TypedStorage<2, 2, ushort> m_program;
    ::ll::TypedStorage<2, 2, ushort> m_view;
    ::ll::TypedStorage<1, 1, uchar>  m_trans;
    // NOLINTEND
};

} // namespace bgfx
