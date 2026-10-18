#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/download/DlcCheckResult.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/download/DlcCheckResult.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
struct PackCheckResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::DlcCheckResult>            dlcCheckResult;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>   missingPackIds;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> missingTemplateId;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>   brokenPackIds;
    ::ll::TypedStorage<8, 24, std::string>                missingPackSize;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PackCheckResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct PackCheckResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::DlcCheckResult>                dlcCheckResult;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>   missingPackIds;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> missingTemplateId;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>   brokenPackIds;
    ::ll::TypedStorage<8, 32, ::std::string>                  missingPackSize;
    // NOLINTEND
};
#else // @header-generator platform
struct PackCheckResult {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace World
