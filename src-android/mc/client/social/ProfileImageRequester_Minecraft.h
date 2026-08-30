#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace Social {

class ProfileImageRequester_Minecraft : public ::Social::ProfileImageRequester {
public:
    // ProfileImageRequester_Minecraft inner types define
    enum class PersonaImageSubtype : int {
        Headshot = 0,
        Avatar   = 1,
        Skin     = 2,
    };

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
};

} // namespace Social
