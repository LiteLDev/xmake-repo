#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/events/ClientInstanceEventListener.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class ClientInstance;
class IClientInstance;
class IOptionRegistry;
class IScriptTelemetryLogger;
class Level;
class ScriptPluginManager;
namespace Scripting { class ScriptEngine; }
// clang-format on

class ClientScriptManager : public ::ClientInstanceEventListener, public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SubClientId const>                      mSubClientId;
    ::ll::UntypedStorage<8, 24>                                        mPrimaryClientInstance;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IScriptTelemetryLogger>>  mTelemetryLogger;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Scripting::ScriptEngine>> mScriptEngine;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptPluginManager>>     mScriptPluginManager;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientScriptManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientScriptManager();

    virtual ::EventResult onClientCreatedLevel(::ClientInstance&, ::Level&);

    virtual ::EventResult onClientUpdateStart(::ClientInstance&);

    virtual ::EventResult onStartLeaveGame(::ClientInstance&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ClientScriptManager(::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>>, ::SubClientId);

    MCNAPI ::Scripting::ScriptEngine& getScriptEngine();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>>, ::SubClientId);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onClientCreatedLevel(::ClientInstance&, ::Level&);

    MCNAPI ::EventResult $onClientUpdateStart(::ClientInstance&);

    MCNAPI ::EventResult $onStartLeaveGame(::ClientInstance&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class ClientScriptManager {};
#endif // @header-generator platform
