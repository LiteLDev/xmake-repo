#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/http/StatusCode.h"
#include "mc/social/EduResponseType.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
struct EduResponseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Social::EduResponseType>   type;
    ::ll::TypedStorage<4, 4, ::Bedrock::Http::StatusCode> code;
    ::ll::TypedStorage<8, 24, std::string>                message;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>   serverIds;
    // NOLINTEND

public:
    // prevent constructor by default
    EduResponseError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~EduResponseError();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct EduResponseError {};
#endif // @header-generator platform

} // namespace Social
