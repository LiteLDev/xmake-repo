#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersionBase.h"

#if defined(LL_PLAT_A) // @header-generator platform
class SemVersionView : public ::SemVersionBase<std::string_view> {};
#else // @header-generator platform
class SemVersionView : public ::SemVersionBase<::std::string_view> {};
#endif // @header-generator platform
