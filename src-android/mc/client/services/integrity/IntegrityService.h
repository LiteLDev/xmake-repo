#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/ServiceClient.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/SharedAsync.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class BrazeSDKManager;
class IAdvancedGraphicsOptions;
struct GenerateNonceResult;
struct IntegrityTokenResult;
namespace SDL { struct IntegrityVerdict; }
namespace Social { class IUserManager; }
// clang-format on

class IntegrityService : public ::ServiceClient {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BrazeSDKManager&>          mBrazeSDKManager;
    ::ll::UntypedStorage<8, 16>                           mGenerateNonceTask;
    ::ll::UntypedStorage<8, 16>                           mRequestIntegrityTokenTask;
    ::ll::TypedStorage<8, 24, std::string>                mIntegrityCheckResult;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mIntegrityToken;
    ::ll::UntypedStorage<8, 24>                           mAdvancedGraphicsOptions;
    // NOLINTEND

public:
    // prevent constructor by default
    IntegrityService& operator=(IntegrityService const&);
    IntegrityService(IntegrityService const&);
    IntegrityService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IntegrityService();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI IntegrityService(
        ::Bedrock::NonOwnerPointer<Social::IUserManager> const&,
        ::BrazeSDKManager&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IAdvancedGraphicsOptions>> const&
    );

    MCNAPI std::string getIntegrityCheckResult() const;

    MCNAPI std::optional<std::string> getIntegrityToken() const;

    MCNAPI void handleIntegrityResponse(::SDL::IntegrityVerdict const&);

    MCNAPI void requestIntegrityToken(
        std::string const&,
        std::vector<std::string> const&,
        std::string const&,
        ::brstd::move_only_function<void()>
    );

    MCNAPI bool requiresCheck() const;

    MCNAPI void reset();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Bedrock::NonOwnerPointer<Social::IUserManager> const&,
        ::BrazeSDKManager&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IAdvancedGraphicsOptions>> const&
    );
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
