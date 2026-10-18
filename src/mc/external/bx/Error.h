#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bx/StringView.h"

// auto generated forward declare list
// clang-format off
namespace bx { struct ErrorResult; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace bx {

#if defined(LL_PLAT_C) // @header-generator platform
class Error {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::bx::StringView> m_msg;
    ::ll::TypedStorage<4, 4, uint>              m_code;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void setError(::bx::ErrorResult _errorResult, ::bx::StringView const& _msg);
    // NOLINTEND
};
#else // @header-generator platform
class Error {};
#endif // @header-generator platform

} // namespace bx
#endif // @header-generator platform
