#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersionBase.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class SemVersionView;
struct SemVersionAnyVersionType;
struct SemVersionBetaVersionType;
// clang-format on

class SemVersionConstant : public ::SemVersionBase<std::string_view> {};
#else // @header-generator platform
class SemVersionConstant : public ::SemVersionBase<::std::string_view> {};
#endif // @header-generator platform
