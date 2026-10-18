#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/events/IRealmsTelemetry.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Status; }
namespace Json { class Value; }
namespace Social::Events { class Event; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Social::Events {

#if defined(LL_PLAT_A) // @header-generator platform
class RealmsTelemetry : public ::IRealmsTelemetry {
#else // @header-generator platform
class RealmsTelemetry {
#endif // @header-generator platform
public:
    // RealmsTelemetry inner types declare
    // clang-format off
    struct CallCount;
    struct RealmsCallCount;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct nowFunc;
#endif // @header-generator platform
    // clang-format on

    // RealmsTelemetry inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct CallCount {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, std::unordered_map<int, int>> mCallCounts;
        // NOLINTEND
#else // @header-generator platform
    struct CallCount {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // prevent constructor by default
        CallCount& operator=(CallCount const&);
#else // @header-generator platform
    struct RealmsCallCount {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void addCall(::Bedrock::Http::Status, int);

        MCNAPI ::Json::Value toJson() const;

        MCNAPI ~CallCount();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct RealmsCallCount {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, std::unordered_map<long, Social::Events::RealmsTelemetry::CallCount>>
            mRealmCallCounts;
        // NOLINTEND

    public:
        // prevent constructor by default
        RealmsCallCount& operator=(RealmsCallCount const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void addCall(long, ::Bedrock::Http::Status, int);

        MCNAPI ~RealmsCallCount();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, Social::Events::RealmsTelemetry::CallCount>> mGeneralCalls;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, Social::Events::RealmsTelemetry::RealmsCallCount>> mRealmCalls;
    ::ll::TypedStorage<8, 40, std::unordered_map<long, Social::Events::RealmsTelemetry::CallCount>> mRealmData;
    ::ll::UntypedStorage<1, 144> mAccessMutex;
    ::ll::UntypedStorage<8, 16> mCreationTime;
    ::ll::UntypedStorage<8, 48> nowFunc;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsTelemetry();

    virtual void AddGeneralCall(std::string const&, ::Bedrock::Http::Status);

    virtual void AddRealmCall(std::string const&, long, ::Bedrock::Http::Status);

    virtual void PopulateEvent(::Social::Events::Event&) const;

    virtual bool ShouldSendEvent() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $AddGeneralCall(std::string const&, ::Bedrock::Http::Status);

    MCNAPI void $AddRealmCall(std::string const&, long, ::Bedrock::Http::Status);

    MCNAPI void $PopulateEvent(::Social::Events::Event&) const;

    MCNAPI bool $ShouldSendEvent() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    struct nowFunc {};
#endif // @header-generator platform
};

} // namespace Social::Events
