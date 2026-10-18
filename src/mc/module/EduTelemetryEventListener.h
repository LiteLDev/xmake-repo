#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/events/NetworkType.h"
#include "mc/world/actor/player/persona/ProfileType.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/PlayerEventListener.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class Level;
class LocalPlayer;
// clang-format on

class EduTelemetryEventListener : public ::PlayerEventListener {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~EduTelemetryEventListener();

    virtual ::EventResult onPlayerCreated(::LocalPlayer&, ::persona::ProfileType const, std::string const&, bool, ::NetworkType);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void init(::IClientInstance&, ::gsl::not_null<Bedrock::NonOwnerPointer<Level>> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult
    $onPlayerCreated(::LocalPlayer&, ::persona::ProfileType const, std::string const&, bool, ::NetworkType);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class EduTelemetryEventListener {};
#endif // @header-generator platform
