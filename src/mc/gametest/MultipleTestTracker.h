#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace gametest { class BaseGameTestInstance; }
#else // @header-generator platform
#endif // @header-generator platform
namespace gametest { class IGameTestListener; }
// clang-format on

namespace gametest {

class MultipleTestTracker {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<gametest::BaseGameTestInstance>>> mTests;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk3e513d;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MultipleTestTracker& operator=(MultipleTestTracker const&);
    MultipleTestTracker(MultipleTestTracker const&);
#endif // @header-generator platform
    MultipleTestTracker();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit MultipleTestTracker(std::vector<std::shared_ptr<gametest::BaseGameTestInstance>> const&);

    MCNAPI void addListener(std::shared_ptr<gametest::IGameTestListener>);

    MCNAPI int getFailedOptionalCount() const;

    MCNAPI int getFailedRequiredCount() const;

    MCNAPI int getTotalCount() const;

    MCNAPI bool hasFailedOptional() const;

    MCNAPI bool hasFailedRequired() const;

    MCNAPI bool isDone() const;

    MCNAPI void removeListener(std::shared_ptr<gametest::IGameTestListener>);
#else // @header-generator platform
    MCNAPI void addListener(::std::shared_ptr<::gametest::IGameTestListener> listener);
#endif // @header-generator platform

    MCNAPI ~MultipleTestTracker();
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& sFailedOptionalTest();

    MCNAPI static std::string const& sFailedRequiredTest();

    MCNAPI static std::string const& sNotStartedTest();

    MCNAPI static std::string const& sOnGoingTest();

    MCNAPI static std::string const& sSuccessfulTest();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::vector<std::shared_ptr<gametest::BaseGameTestInstance>> const&);
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace gametest
