#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/certificates/identity/PlayerAuthenticationType.h"
#include "mc/certificates/identity/RawGameServerToken.h"
#include "mc/client/network/ClientNetworkHandlerArguments.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/world/actor/player/SkinMemThresholds.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class ClientLevel;
class IPersonaNetworkHandlerDelegate;
struct ClientCreateLevelArguments;
namespace Parties { class PartySystem; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct LegacyClientNetworkHandlerArguments {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 304, ::ClientNetworkHandlerArguments>               mBase;
    ::ll::UntypedStorage<8, 64>                                               mCreateLevel;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IPersonaNetworkHandlerDelegate>> mPersonaNetworkHandlerDelegate;
    ::ll::TypedStorage<8, 24, ::SkinMemThresholds>                            mSkinMemThresholds;
    ::ll::UntypedStorage<4, 4>                                                mAuthType;
    ::ll::UntypedStorage<8, 24>                                               mToken;
    ::ll::TypedStorage<8, 8, ::cereal::ReflectionCtx&>                        mCtx;
    ::ll::UntypedStorage<8, 24>                                               mAppPlatform;
    ::ll::UntypedStorage<8, 32>                                               mPartySystem;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyClientNetworkHandlerArguments& operator=(LegacyClientNetworkHandlerArguments const&);
    LegacyClientNetworkHandlerArguments(LegacyClientNetworkHandlerArguments const&);
    LegacyClientNetworkHandlerArguments();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~LegacyClientNetworkHandlerArguments();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct LegacyClientNetworkHandlerArguments {};
#endif // @header-generator platform
