#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptContainer; }
namespace ScriptModuleMinecraft { class ScriptContainerRules; }
namespace ScriptModuleMinecraft { class ScriptContainerSlot; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { struct ScriptContainerRulesError; }
namespace ScriptModuleMinecraft { struct ScriptInvalidContainerError; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptContainerWrapper : public ::Scripting::WeakHandleFromThis<ScriptModuleMinecraft::ScriptContainerWrapper> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleMinecraft::ScriptContainer>> mContainer;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptContainerWrapper& operator=(ScriptContainerWrapper const&);
    ScriptContainerWrapper(ScriptContainerWrapper const&);
    ScriptContainerWrapper();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptContainerWrapper(std::unique_ptr<ScriptModuleMinecraft::ScriptContainer>);

    MCNAPI ::Scripting::Result<
        std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemStack>>,
        ScriptModuleMinecraft::ScriptContainerRulesError,
        Scripting::Error>
    addItem(::ScriptModuleMinecraft::ScriptItemStack const&) const;

    MCNAPI ::Scripting::Result<std::optional<int>, ScriptModuleMinecraft::ScriptInvalidContainerError>
    find(::ScriptModuleMinecraft::ScriptItemStack const&) const;

    MCNAPI ::Scripting::Result<std::optional<int>, ScriptModuleMinecraft::ScriptInvalidContainerError>
    findLast(::ScriptModuleMinecraft::ScriptItemStack const&) const;

    MCNAPI ::Scripting::Result<std::optional<int>, ScriptModuleMinecraft::ScriptInvalidContainerError>
    firstEmptySlot() const;

    MCNAPI ::Scripting::Result<std::optional<int>, ScriptModuleMinecraft::ScriptInvalidContainerError>
    firstItem() const;

    MCNAPI std::optional<ScriptModuleMinecraft::ScriptContainerRules> const& getContainerRules() const;

    MCNAPI ::Scripting::Result<void, ScriptModuleMinecraft::ScriptContainerRulesError, Scripting::Error>
    moveItem(int, int, ::ScriptModuleMinecraft::ScriptContainerWrapper&) const;

    MCNAPI ::Scripting::Result<void, ScriptModuleMinecraft::ScriptContainerRulesError, Scripting::Error>
    swapItems(int, int, ::ScriptModuleMinecraft::ScriptContainerWrapper&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::unique_ptr<ScriptModuleMinecraft::ScriptContainer>);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
