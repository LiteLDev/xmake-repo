#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/certificates/identity/MinecraftAccountPermissions.h"
#include "mc/client/services/sdl/IntegrityVerdict.h"
#include "mc/client/services/sdl/StartSessionConfigurations.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace SDL {

#if defined(LL_PLAT_A) // @header-generator platform
struct SessionAuth {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                          mAuthorizationHeader;
    ::ll::TypedStorage<8, 8, long>                                  mValidUntil;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>             mTreatments;
    ::ll::TypedStorage<8, 24, std::string>                          mTreatmentContext;
    ::ll::TypedStorage<8, 48, ::SDL::StartSessionConfigurations>    mConfigurations;
    ::ll::TypedStorage<8, 48, std::optional<SDL::IntegrityVerdict>> mIntegrityVerdict;
    ::ll::TypedStorage<8, 8, ::MinecraftAccountPermissions>         mAccountPermissions;
    // NOLINTEND

public:
    // prevent constructor by default
    SessionAuth& operator=(SessionAuth const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SessionAuth(::SDL::SessionAuth const&);

    MCNAPI void fromJsonShared(::Json::Value const&);

    MCNAPI ~SessionAuth();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SDL::SessionAuth const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct SessionAuth {};
#endif // @header-generator platform

} // namespace SDL
