#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptContainer; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptContainerRules; }
namespace ScriptModuleMinecraft { class ScriptContainerSlot; }
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { struct ScriptContainerRulesError; }
namespace ScriptModuleMinecraft { struct ScriptInvalidContainerError; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

#if defined(LL_PLAT_A) // @header-generator platform
class ScriptContainerWrapper : public ::Scripting::WeakHandleFromThis<ScriptModuleMinecraft::ScriptContainerWrapper> {
#else // @header-generator platform
class ScriptContainerWrapper : public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraft::ScriptContainerWrapper> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleMinecraft::ScriptContainer>> mContainer;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptModuleMinecraft::ScriptContainer>> mContainer;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ScriptContainerWrapper& operator=(ScriptContainerWrapper const&);
    ScriptContainerWrapper(ScriptContainerWrapper const&);
    ScriptContainerWrapper();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ScriptContainerWrapper(std::unique_ptr<ScriptModuleMinecraft::ScriptContainer>);
#else // @header-generator platform
    MCAPI ::Scripting::Result<::std::optional<int>, ::ScriptModuleMinecraft::ScriptInvalidContainerError>
    find(::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<
        std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemStack>>,
        ScriptModuleMinecraft::ScriptContainerRulesError,
        Scripting::Error>
    addItem(::ScriptModuleMinecraft::ScriptItemStack const&) const;
#else // @header-generator platform
    MCAPI ::Scripting::Result<::std::optional<int>, ::ScriptModuleMinecraft::ScriptInvalidContainerError>
    findLast(::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<std::optional<int>, ScriptModuleMinecraft::ScriptInvalidContainerError>
    find(::ScriptModuleMinecraft::ScriptItemStack const&) const;

    MCNAPI ::Scripting::Result<std::optional<int>, ScriptModuleMinecraft::ScriptInvalidContainerError>
    findLast(::ScriptModuleMinecraft::ScriptItemStack const&) const;

    MCNAPI ::Scripting::Result<std::optional<int>, ScriptModuleMinecraft::ScriptInvalidContainerError>
#else // @header-generator platform
    MCAPI ::Scripting::Result<::std::optional<int>, ::ScriptModuleMinecraft::ScriptInvalidContainerError>
#endif // @header-generator platform
    firstEmptySlot() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<std::optional<int>, ScriptModuleMinecraft::ScriptInvalidContainerError>
#else // @header-generator platform
    MCAPI ::Scripting::Result<::std::optional<int>, ::ScriptModuleMinecraft::ScriptInvalidContainerError>
#endif // @header-generator platform
    firstItem() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<ScriptModuleMinecraft::ScriptContainerRules> const& getContainerRules() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptContainerRulesError, ::Scripting::Error>
    moveItem(int fromSlot, int toSlot, ::ScriptModuleMinecraft::ScriptContainerWrapper& toScriptContainer) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<void, ScriptModuleMinecraft::ScriptContainerRulesError, Scripting::Error>
    moveItem(int, int, ::ScriptModuleMinecraft::ScriptContainerWrapper&) const;

    MCNAPI ::Scripting::Result<void, ScriptModuleMinecraft::ScriptContainerRulesError, Scripting::Error>
    swapItems(int, int, ::ScriptModuleMinecraft::ScriptContainerWrapper&) const;
#else // @header-generator platform
    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptContainerRulesError, ::Scripting::Error>
    swapItems(int slot, int otherSlot, ::ScriptModuleMinecraft::ScriptContainerWrapper& otherScriptContainer) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::unique_ptr<ScriptModuleMinecraft::ScriptContainer>);
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
