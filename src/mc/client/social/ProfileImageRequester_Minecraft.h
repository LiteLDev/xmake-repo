#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/social/ProfileImageRequester.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Response; }
namespace Social { class ProfileImageOptions; }
namespace Social { struct RawProfileImageData; }
namespace mce { struct Image; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
class ProfileImageRequester_Minecraft : public ::Social::ProfileImageRequester {
#else // @header-generator platform
class ProfileImageRequester_Minecraft {
#endif // @header-generator platform
public:
    // ProfileImageRequester_Minecraft inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class PersonaImageSubtype : int {
        Headshot = 0,
        Avatar   = 1,
        Skin     = 2,
    };
#else // @header-generator platform
    enum class PersonaImageSubtype : int {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    enum class RequestType : int {
        CurrentUser = 0,
        PlayfabId   = 1,
        XUID        = 2,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ProfileImageRequester_Minecraft();

    virtual ::Bedrock::Threading::Async<Social::RawProfileImageData> _fetchProfileImageFromWeb(::Social::ProfileImageOptions const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ProfileImageRequester_Minecraft();

    MCNAPI ::Bedrock::Threading::Async<std::string> _getUrlAsync(
        ::Social::ProfileImageRequester_Minecraft::RequestType,
        std::string,
        ::Social::ProfileImageRequester_Minecraft::PersonaImageSubtype
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Core::PathBuffer<std::string> _getCachePath();

    MCNAPI static ::Social::RawProfileImageData _processResponse(::Bedrock::Http::Response);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::unordered_map<Social::ProfileImageRequester_Minecraft::PersonaImageSubtype, std::string> const&
    mSubtypeToString();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Threading::Async<Social::RawProfileImageData>
    $_fetchProfileImageFromWeb(::Social::ProfileImageOptions const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    enum class RequestType : int {};
#endif // @header-generator platform
};

} // namespace Social
