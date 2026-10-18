#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace bx { class Mutex; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace bx {

#if defined(LL_PLAT_C) // @header-generator platform
class MutexScope {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::bx::Mutex&> m_mutex;
    // NOLINTEND

public:
    // prevent constructor by default
    MutexScope& operator=(MutexScope const&);
    MutexScope(MutexScope const&);
    MutexScope();
};
#else // @header-generator platform
class MutexScope {};
#endif // @header-generator platform

} // namespace bx
#endif // @header-generator platform
