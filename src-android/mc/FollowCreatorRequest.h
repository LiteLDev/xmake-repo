#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/sdl/ServiceResponseOfFollowUnfollowCreator.h"

// auto generated forward declare list
// clang-format off
template<typename T0> class ISDLRequest;
#ifndef LL_GENERATED_ANDROID_BASE_STUB_ISDLREQUEST
#define LL_GENERATED_ANDROID_BASE_STUB_ISDLREQUEST
template<typename T0> class ISDLRequest {};
#endif
// clang-format on

class FollowCreatorRequest : public ::ISDLRequest<SDL::ServiceResponseOfFollowUnfollowCreator> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mBaseUrl;
    ::ll::TypedStorage<8, 24, std::string> mCreatorID;
    ::ll::TypedStorage<8, 24, std::string> mCreatorListVersion;
    ::ll::TypedStorage<1, 1, bool>         mSuccess;
    ::ll::UntypedStorage<1, 15>            mIsFollowed;
    // NOLINTEND
};
