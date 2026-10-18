#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bx {

#if defined(LL_PLAT_C) // @header-generator platform
class FilePath {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1024, char[1024]> m_filePath;
    // NOLINTEND

public:
    // prevent constructor by default
    FilePath();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit FilePath(char const* _rhs);

    MCFOLD char const* get() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(char const* _rhs);
    // NOLINTEND
};
#else // @header-generator platform
class FilePath {};
#endif // @header-generator platform

} // namespace bx
#endif // @header-generator platform
