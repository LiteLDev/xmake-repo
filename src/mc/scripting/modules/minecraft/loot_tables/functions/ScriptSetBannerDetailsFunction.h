#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft/loot_tables/functions/ScriptBannerPattern.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/scripting/modules/minecraft/loot_tables/functions/ScriptLootItemFunction.h"

// auto generated forward declare list
// clang-format off
class LootItemFunction;
class SetBannerDetailsFunction;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptBannerPattern; }
#endif // @header-generator platform
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSetBannerDetailsFunction : public ::ScriptModuleMinecraft::ScriptLootItemFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::SetBannerDetailsFunction const&> mFunction;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 8, std::optional<int>>                tester;
    ::ll::UntypedStorage<8, 32>                                 mPatterns;
#else // @header-generator platform
    ::ll::TypedStorage<4, 8, ::std::optional<int>>              tester;
    ::ll::TypedStorage<
        8,
        32,
        ::std::optional<
            ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBannerPattern>>>>
        mPatterns;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSetBannerDetailsFunction& operator=(ScriptSetBannerDetailsFunction const&);
    ScriptSetBannerDetailsFunction(ScriptSetBannerDetailsFunction const&);
    ScriptSetBannerDetailsFunction();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptSetBannerDetailsFunction();

    virtual ::LootItemFunction const& _getFunction() const;
#else // @header-generator platform
    virtual ::LootItemFunction const& _getFunction() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::LootItemFunction const& $_getFunction() const;
#else // @header-generator platform
    MCFOLD ::LootItemFunction const& $_getFunction() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
