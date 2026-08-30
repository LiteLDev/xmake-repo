#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/gametest/BaseGameTestFunction.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
struct DimensionType;
namespace gametest { class BaseGameTestHelper; }
namespace gametest { class IGameTestFunctionContext; }
// clang-format on

namespace ScriptModuleGameTest {

class BaseScriptGameTestFunction : public ::gametest::BaseGameTestFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseScriptGameTestFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~BaseScriptGameTestFunction();

    virtual std::unique_ptr<gametest::IGameTestFunctionContext> createContext(::gametest::BaseGameTestHelper&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BaseScriptGameTestFunction(::Scripting::WeakLifetimeScope, std::string const&);

    MCNAPI void addTag(std::string);

    MCNAPI void setBatch(std::string);

    MCNAPI void setMaxAttempts(int);

    MCNAPI void setMaxTicks(int);

    MCNAPI void setPadding(int);

    MCNAPI void setRequired(bool);

    MCNAPI void setRequiredSuccesses(int);

    MCNAPI void setRotate(bool);

    MCNAPI void setSetupTicks(int);

    MCNAPI void setStructureDimension(::DimensionType);

    MCNAPI void setStructureLocation(::BlockPos);

    MCNAPI void setStructureName(std::string);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::WeakLifetimeScope, std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<gametest::IGameTestFunctionContext> $createContext(::gametest::BaseGameTestHelper&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleGameTest
