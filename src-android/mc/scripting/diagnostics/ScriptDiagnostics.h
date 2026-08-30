#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/ScriptDiagnosticsDescriptor.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/thread_model/SingleThreaded.h"
#include "mc/scripting/diagnostics/ScriptStat.h"

// auto generated forward declare list
// clang-format off
class IScriptStatPublisher;
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class ScriptDiagnostics : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ScriptDiagnostics inner types define
    using PublisherVector = std::vector<gsl::not_null<IScriptStatPublisher*>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40>                                                  mStatCollectorsReloadPublisher;
    ::ll::UntypedStorage<8, 40>                                                  mStatCollectorsEnablePublisher;
    ::ll::UntypedStorage<8, 40>                                                  mStatCollectorTickPublisher;
    ::ll::UntypedStorage<8, 40>                                                  mStatCollectorsDisablePublisher;
    ::ll::TypedStorage<8, 24, std::vector<ScriptStat>>                           mCollectedStats;
    ::ll::TypedStorage<8, 24, std::vector<ScriptDiagnosticsDescriptor>>          mDescriptors;
    ::ll::TypedStorage<8, 24, std::vector<gsl::not_null<IScriptStatPublisher*>>> mStatPublishers;
    ::ll::TypedStorage<1, 1, bool>                                               mWasAnyPublisherEnabled;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDiagnostics();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptDiagnostics();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptDiagnostics(std::vector<gsl::not_null<IScriptStatPublisher*>>&&);

    MCNAPI void collectStats(ulong);

    MCNAPI std::vector<ScriptDiagnosticsDescriptor> const& getDescriptors() const;

    MCNAPI void init(std::vector<gsl::not_null<IScriptStatPublisher*>>&&);

    MCNAPI void onPostReload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::vector<gsl::not_null<IScriptStatPublisher*>>&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
