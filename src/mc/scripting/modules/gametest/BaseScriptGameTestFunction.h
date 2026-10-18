#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/gametest/BaseGameTestFunction.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
struct DimensionType;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~BaseScriptGameTestFunction();
#else // @header-generator platform
    virtual ~BaseScriptGameTestFunction() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<gametest::IGameTestFunctionContext> createContext(::gametest::BaseGameTestHelper&) const;
    // clang-format on
#else // @header-generator platform
    virtual ::std::unique_ptr<::gametest::IGameTestFunctionContext>
    createContext(::gametest::BaseGameTestHelper& helper) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI BaseScriptGameTestFunction(::Scripting::WeakLifetimeScope scope, ::std::string const& testName);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Scripting::WeakLifetimeScope, std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::Scripting::WeakLifetimeScope scope, ::std::string const& testName);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<gametest::IGameTestFunctionContext> $createContext(::gametest::BaseGameTestHelper&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::gametest::IGameTestFunctionContext>
    $createContext(::gametest::BaseGameTestHelper& helper) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleGameTest
