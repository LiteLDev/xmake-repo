#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
namespace ScriptModuleMinecraft { class BaseScriptBlockComponent; }
namespace Scripting { class Release; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class IScriptBlockComponentFactory {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~IScriptBlockComponentFactory();
#else // @header-generator platform
    virtual ~IScriptBlockComponentFactory() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::BaseScriptBlockComponent>> createComponent(::BlockSource&, ::BlockPos const&, ::Scripting::WeakLifetimeScope const&) = 0;
#else // @header-generator platform
    virtual ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::BaseScriptBlockComponent>>
    createComponent(::BlockSource& region, ::BlockPos const& position, ::Scripting::WeakLifetimeScope const& scope) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<Scripting::ClassBinding> bind() const = 0;
#else // @header-generator platform
    virtual ::std::vector<::Scripting::ClassBinding> bind() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canAddOn(::Block const&) const;
#else // @header-generator platform
    virtual bool canAddOn(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Scripting::Release> overrideEnumVersion() const;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::std::optional<::Scripting::Release> overrideEnumVersion() const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canAddOn(::Block const&) const;
#else // @header-generator platform
    MCFOLD bool $canAddOn(::Block const& block) const;


#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
