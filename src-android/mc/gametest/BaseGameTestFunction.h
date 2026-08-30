#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestHelper; }
namespace gametest { class IGameTestFunctionContext; }
namespace gametest { class IGameTestFunctionRunResult; }
// clang-format on

namespace gametest {

class BaseGameTestFunction {
public:
    // BaseGameTestFunction inner types define
    using TagList = std::vector<std::string>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::string>>    mTags;
    ::ll::TypedStorage<8, 24, std::string>                 mBatchName;
    ::ll::TypedStorage<8, 24, std::string>                 mTestName;
    ::ll::TypedStorage<8, 24, std::string>                 mStructureName;
    ::ll::TypedStorage<4, 16, std::optional<BlockPos>>     mStructureLocation;
    ::ll::TypedStorage<4, 8, std::optional<DimensionType>> mStructureDimension;
    ::ll::TypedStorage<1, 1, bool>                         mRequired;
    ::ll::TypedStorage<4, 4, int>                          mMaxAttempts;
    ::ll::TypedStorage<4, 4, int>                          mRequiredSuccesses;
    ::ll::TypedStorage<4, 4, int>                          mMaxTicks;
    ::ll::TypedStorage<4, 4, int>                          mSetupTicks;
    ::ll::TypedStorage<4, 4, int>                          mPadding;
    ::ll::TypedStorage<1, 1, bool>                         mRotate;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseGameTestFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~BaseGameTestFunction();

    virtual std::unique_ptr<gametest::IGameTestFunctionContext> createContext(::gametest::BaseGameTestHelper&) const = 0;

    virtual std::unique_ptr<gametest::IGameTestFunctionRunResult> run(::gametest::BaseGameTestHelper&, ::gametest::IGameTestFunctionContext&) const = 0;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BaseGameTestFunction(
        std::string,
        std::string,
        std::string,
        int,
        int,
        int,
        bool,
        bool,
        int,
        int,
        std::vector<std::string>
    );

    MCNAPI void _addTag(std::string);

    MCNAPI bool getRotate() const;

    MCNAPI std::string const& getTestName() const;

    MCNAPI bool hasTag(std::string const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(std::string, std::string, std::string, int, int, int, bool, bool, int, int, std::vector<std::string>);
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

} // namespace gametest
