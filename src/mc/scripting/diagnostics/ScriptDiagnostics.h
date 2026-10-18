#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/ScriptDiagnosticsDescriptor.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/thread_model/SingleThreaded.h"
#include "mc/scripting/diagnostics/ScriptStat.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class IScriptStatPublisher;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock::PubSub { class Subscription; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ScriptDiagnostics : public ::Bedrock::EnableNonOwnerReferences {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // ScriptDiagnostics inner types define
    using PublisherVector = std::vector<gsl::not_null<IScriptStatPublisher*>>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 40>                                                  mStatCollectorsReloadPublisher;
    ::ll::UntypedStorage<8, 40>                                                  mStatCollectorsEnablePublisher;
    ::ll::UntypedStorage<8, 40>                                                  mStatCollectorTickPublisher;
    ::ll::UntypedStorage<8, 40>                                                  mStatCollectorsDisablePublisher;
    ::ll::TypedStorage<8, 24, std::vector<ScriptStat>>                           mCollectedStats;
    ::ll::TypedStorage<8, 24, std::vector<ScriptDiagnosticsDescriptor>>          mDescriptors;
    ::ll::TypedStorage<8, 24, std::vector<gsl::not_null<IScriptStatPublisher*>>> mStatPublishers;
    ::ll::TypedStorage<1, 1, bool>                                               mWasAnyPublisherEnabled;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 48> mUnk2a3204;
    ::ll::UntypedStorage<8, 48> mUnk4f1ee0;
    ::ll::UntypedStorage<8, 48> mUnka6faff;
    ::ll::UntypedStorage<8, 48> mUnk682d22;
    ::ll::UntypedStorage<8, 24> mUnkd1118e;
    ::ll::UntypedStorage<8, 24> mUnk5448c7;
    ::ll::UntypedStorage<8, 24> mUnk5d35e1;
    ::ll::UntypedStorage<1, 1>  mUnk145097;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptDiagnostics& operator=(ScriptDiagnostics const&);
    ScriptDiagnostics(ScriptDiagnostics const&);
#endif // @header-generator platform
    ScriptDiagnostics();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptDiagnostics();
#else // @header-generator platform
    virtual ~ScriptDiagnostics() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ScriptDiagnostics(std::vector<gsl::not_null<IScriptStatPublisher*>>&&);
#else // @header-generator platform
    MCNAPI explicit ScriptDiagnostics(::std::vector<::gsl::not_null<::IScriptStatPublisher*>>&& publishers);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void collectStats(ulong);

    MCNAPI std::vector<ScriptDiagnosticsDescriptor> const& getDescriptors() const;

    MCNAPI void init(std::vector<gsl::not_null<IScriptStatPublisher*>>&&);

    MCNAPI void onPostReload();
#else // @header-generator platform
    MCNAPI void collectStats(uint64 currentTick);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::vector<gsl::not_null<IScriptStatPublisher*>>&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(::std::vector<::gsl::not_null<::IScriptStatPublisher*>>&& publishers);
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
