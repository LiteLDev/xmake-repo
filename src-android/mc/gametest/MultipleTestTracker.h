#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestInstance; }
namespace gametest { class IGameTestListener; }
// clang-format on

namespace gametest {

class MultipleTestTracker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<gametest::BaseGameTestInstance>>> mTests;
    // NOLINTEND

public:
    // prevent constructor by default
    MultipleTestTracker();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MultipleTestTracker(std::vector<std::shared_ptr<gametest::BaseGameTestInstance>> const&);

    MCNAPI void addListener(std::shared_ptr<gametest::IGameTestListener>);

    MCNAPI int getFailedOptionalCount() const;

    MCNAPI int getFailedRequiredCount() const;

    MCNAPI int getTotalCount() const;

    MCNAPI bool hasFailedOptional() const;

    MCNAPI bool hasFailedRequired() const;

    MCNAPI bool isDone() const;

    MCNAPI void removeListener(std::shared_ptr<gametest::IGameTestListener>);

    MCNAPI ~MultipleTestTracker();
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
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace gametest
