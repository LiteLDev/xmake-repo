#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestFunction; }
// clang-format on

namespace gametest {

class GameTestRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::function<void()>>>       mBeforeBatchFunctions;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::function<void()>>>       mAfterBatchFunctions;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                                     mAllTestClasses;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                                     mAllTestTags;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<gametest::BaseGameTestFunction>>> mTestFunctions;
    ::ll::TypedStorage<1, 1, bool>                                                          mIsReady;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void clearAllTestMethods();

    MCNAPI void generateTagsList();

    MCNAPI std::vector<std::shared_ptr<gametest::BaseGameTestFunction>> getAllTestFunctions();

    MCNAPI std::vector<std::string> const& getAllTestTags() const;

    MCNAPI std::vector<std::shared_ptr<gametest::BaseGameTestFunction>> getTestFunctionsWithTag(std::string const&);

    MCNAPI bool isTestTag(std::string const&) const;

    MCNAPI bool registerAfterBatchFunction(std::string const&, std::function<void()>);

    MCNAPI bool registerBeforeBatchFunction(std::string const&, std::function<void()>);

    MCNAPI bool registerTestMethod(std::string const&, std::shared_ptr<gametest::BaseGameTestFunction>);

    MCNAPI void setReady();

    MCNAPI ~GameTestRegistry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace gametest
