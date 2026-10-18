#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace Json { class Value; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Social::Events { class Event; }
// clang-format on

namespace Social::Events {

class ScreenFlow {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // ScreenFlow inner types declare
    // clang-format off
    struct nowFunc;
    // clang-format on

    // ScreenFlow inner types define
    struct nowFunc {};

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::UntypedStorage<1, 144> mAccessMutex;
    ::ll::UntypedStorage<8, 16> mScreenFlow;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mCreationTime;
    ::ll::TypedStorage<8, 24, std::string> mApplicationId;
    ::ll::UntypedStorage<8, 32> mLastScreen;
    ::ll::UntypedStorage<8, 48> nowFunc;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk639462;
    ::ll::UntypedStorage<8, 16> mUnk890a72;
    ::ll::UntypedStorage<8, 8>  mUnk7be49c;
    ::ll::UntypedStorage<8, 32> mUnk28e73f;
    ::ll::UntypedStorage<8, 32> mUnk246e53;
    ::ll::UntypedStorage<8, 64> mUnk5d55ec;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ScreenFlow& operator=(ScreenFlow const&);
    ScreenFlow(ScreenFlow const&);
    ScreenFlow();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ScreenFlow();
    // NOLINTEND
#else // @header-generator platform
    MCNAPI void AddScreen(
        ::std::string const&                                      screenName,
        double                                                    timestamp,
        double                                                    seconds,
        ::std::unordered_map<::std::string, ::std::string> const& additionalProperties,
        bool                                                      isDeepLink
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void PopulateEvent(::Social::Events::Event& event, bool clear);

    MCNAPI bool ShouldSendEvent() const;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Social::Events
