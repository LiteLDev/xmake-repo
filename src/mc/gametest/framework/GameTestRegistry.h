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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::function<void()>>>       mBeforeBatchFunctions;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::function<void()>>>       mAfterBatchFunctions;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                                     mAllTestClasses;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                                     mAllTestTags;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<gametest::BaseGameTestFunction>>> mTestFunctions;
    ::ll::TypedStorage<1, 1, bool>                                                          mIsReady;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnkfd6023;
    ::ll::UntypedStorage<8, 64> mUnkb19192;
    ::ll::UntypedStorage<8, 24> mUnk329014;
    ::ll::UntypedStorage<8, 24> mUnk9b0e1e;
    ::ll::UntypedStorage<8, 24> mUnkf4b42a;
    ::ll::UntypedStorage<1, 1>  mUnk67eda1;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    GameTestRegistry& operator=(GameTestRegistry const&);
    GameTestRegistry(GameTestRegistry const&);
    GameTestRegistry();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void clearAllTestMethods();

    MCNAPI void generateTagsList();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::shared_ptr<gametest::BaseGameTestFunction>> getAllTestFunctions();
#else // @header-generator platform
    MCNAPI ::std::function<void()> getAfterBatchFunction(::std::string const& batchName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::string> const& getAllTestTags() const;
#else // @header-generator platform
    MCNAPI ::std::function<void()> getBeforeBatchFunction(::std::string const& batchName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::shared_ptr<gametest::BaseGameTestFunction>> getTestFunctionsWithTag(std::string const&);
#else // @header-generator platform
    MCNAPI bool registerAfterBatchFunction(::std::string const& batchName, ::std::function<void()> fn);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isTestTag(std::string const&) const;
#else // @header-generator platform
    MCNAPI bool registerBeforeBatchFunction(::std::string const& batchName, ::std::function<void()> fn);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool registerAfterBatchFunction(std::string const&, std::function<void()>);

    MCNAPI bool registerBeforeBatchFunction(std::string const&, std::function<void()>);

    MCNAPI bool registerTestMethod(std::string const&, std::shared_ptr<gametest::BaseGameTestFunction>);

    MCNAPI void setReady();
#else // @header-generator platform
    MCNAPI bool
    registerTestMethod(::std::string const& className, ::std::shared_ptr<::gametest::BaseGameTestFunction> fn);
#endif // @header-generator platform

    MCNAPI ~GameTestRegistry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace gametest
