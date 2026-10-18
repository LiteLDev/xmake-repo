#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/network/NetworkIdentifier.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IOptionRegistry;
class SerializedSkinRef;
struct ActorUniqueID;
namespace Social { class User; }
// clang-format on

class TrustedSkinHelper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::NetworkIdentifier>                 mNetworkIdentifier;
    ::ll::TypedStorage<8, 8, ::IClientInstance const&>              mClientInstance;
    ::ll::TypedStorage<8, 16, std::weak_ptr<const IOptionRegistry>> mPrimaryOptions;
    ::ll::TypedStorage<8, 16, std::weak_ptr<Social::User>>          mUser;
    // NOLINTEND

public:
    // prevent constructor by default
    TrustedSkinHelper();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TrustedSkinHelper(::TrustedSkinHelper&&);

    MCNAPI TrustedSkinHelper(::NetworkIdentifier const&, ::IClientInstance&, ::IOptionRegistry const&);

    MCNAPI bool canUseSkin(::SerializedSkinRef const&, ::NetworkIdentifier const&, ::ActorUniqueID const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::TrustedSkinHelper&&);

    MCNAPI void* $ctor(::NetworkIdentifier const&, ::IClientInstance&, ::IOptionRegistry const&);
    // NOLINTEND
};
#else // @header-generator platform
class TrustedSkinHelper {};
#endif // @header-generator platform
