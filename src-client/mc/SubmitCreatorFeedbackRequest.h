#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/Status.h"

// auto generated forward declare list
// clang-format off
template<typename T0> class ISDLRequest;
#ifndef LL_GENERATED_ANDROID_BASE_STUB_ISDLREQUEST
#define LL_GENERATED_ANDROID_BASE_STUB_ISDLREQUEST
template<typename T0> class ISDLRequest {};
#endif
// clang-format on

class SubmitCreatorFeedbackRequest : public ::ISDLRequest<int> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>             mBaseUrl;
    ::ll::TypedStorage<8, 24, std::string>             mAuth;
    ::ll::TypedStorage<8, 24, std::string const>       mCreatorId;
    ::ll::TypedStorage<8, 24, std::string const>       mFeedbackText;
    ::ll::TypedStorage<8, 24, ::Bedrock::Http::Status> mResponseStatus;
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
