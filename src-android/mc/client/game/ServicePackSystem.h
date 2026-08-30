#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/edu/CredentialsObserver.h"
#include "mc/deps/core/resource/ServicePack.h"
#include "mc/deps/core/timing/Stopwatch.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ActiveDirectoryIdentity;
class IServicePackModel;
struct EDUConfigData;
// clang-format on

class ServicePackSystem : public ::Bedrock::EnableNonOwnerReferences, public ::edu::auth::CredentialsObserver {
public:
    // ServicePackSystem inner types declare
    // clang-format off
    struct PackListTracker;
    // clang-format on

    // ServicePackSystem inner types define
    enum class ServicePackPhase : uchar {
        Startup                    = 0,
        PreparingPacks             = 1,
        AcquiringPacks             = 2,
        ApplyingPacks              = 3,
        ReloadingPackStack         = 4,
        ReloadingPackStackComplete = 5,
        Cancelling                 = 6,
        Complete                   = 7,
    };

    struct PackListTracker {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<ServicePack>> mPackList;
        ::ll::TypedStorage<1, 1, std::atomic<bool>>         mHasNewContent;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, std::shared_ptr<ServicePackSystem::PackListTracker>> mPackTracker;
    ::ll::TypedStorage<8, 24, std::vector<ServicePack>> mServicePacks;
    ::ll::TypedStorage<1, 1, bool> mUpdatePacks;
    ::ll::TypedStorage<8, 24, std::string> mCancelReason;
    ::ll::TypedStorage<8, 56, ::Stopwatch> mDownloadTimeoutStopwatch;
    ::ll::TypedStorage<1, 1, ::ServicePackSystem::ServicePackPhase> mPhase;
    ::ll::TypedStorage<4, 4, float> mProgressPercentage;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mDownloadStartTime;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ServicePackSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServicePackSystem();

    virtual void onNotify(::EDUConfigData const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ServicePackSystem(::gsl::not_null<Bedrock::NonOwnerPointer<ActiveDirectoryIdentity>>);

    MCNAPI void _dedupeServicePacks();

    MCNAPI void cancel(std::string);

    MCNAPI float getProgress() const;

    MCNAPI bool update(::IServicePackModel&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<ActiveDirectoryIdentity>>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onNotify(::EDUConfigData const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
