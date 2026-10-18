#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bx {

struct FileInfo {
public:
    // FileInfo inner types define
#if defined(LL_PLAT_C) // @header-generator platform
    enum class Enum : int {
        Regular   = 0,
        Directory = 1,
        Count     = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64>               m_size;
    ::ll::TypedStorage<4, 4, ::bx::FileInfo::Enum> m_type;
    // NOLINTEND
#else // @header-generator platform
    enum class Enum : int {};
#endif // @header-generator platform
};

} // namespace bx
#endif // @header-generator platform
