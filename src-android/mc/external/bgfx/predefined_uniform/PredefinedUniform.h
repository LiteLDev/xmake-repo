#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

struct PredefinedUniform {
public:
    // PredefinedUniform inner types define
    enum Enum : uint {
        ViewRect           = 0,
        ViewTexel          = 1,
        View               = 2,
        InvView            = 3,
        Proj               = 4,
        InvProj            = 5,
        ViewProj           = 6,
        InvViewProj        = 7,
        PrevViewProj       = 8,
        Model              = 9,
        ModelView          = 10,
        ModelViewProj      = 11,
        PrevWorldPosOffset = 12,
        AlphaRef           = 13,
        Count              = 14,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>   m_loc;
    ::ll::TypedStorage<2, 2, ushort> m_count;
    ::ll::TypedStorage<1, 1, uchar>  m_type;
    // NOLINTEND
};

} // namespace bgfx
