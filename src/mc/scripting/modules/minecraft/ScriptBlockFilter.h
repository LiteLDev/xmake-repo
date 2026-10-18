#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/string/HashedString.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/world/level/block/BlockDescriptor.h"

// auto generated forward declare list
// clang-format off
class Block;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class HashedString;
#endif // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace Scripting { struct Error; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockFilter {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>>                     mIncludeTypes;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>>                     mExcludeTypes;
    ::ll::TypedStorage<8, 24, std::vector<std::reference_wrapper<const Block>>> mIncludePermutations;
    ::ll::TypedStorage<8, 24, std::vector<std::reference_wrapper<const Block>>> mExcludePermutations;
    ::ll::TypedStorage<8, 24, std::vector<HashedString>>                        mIncludeTags;
    ::ll::TypedStorage<8, 24, std::vector<HashedString>>                        mExcludeTags;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>                   mScope;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>>                       mIncludeTypes;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>>                       mExcludeTypes;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::reference_wrapper<::Block const>>> mIncludePermutations;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::reference_wrapper<::Block const>>> mExcludePermutations;
    ::ll::TypedStorage<8, 24, ::std::vector<::HashedString>>                          mIncludeTags;
    ::ll::TypedStorage<8, 24, ::std::vector<::HashedString>>                          mExcludeTags;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>                         mScope;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ScriptBlockFilter();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptBlockFilter();
#else // @header-generator platform
    MCAPI ScriptBlockFilter(::ScriptModuleMinecraft::ScriptBlockFilter const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptBlockFilter(::ScriptModuleMinecraft::ScriptBlockFilter const&);

    MCNAPI ::Scripting::Result_deprecated<
        std::optional<std::vector<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockPermutation>>>>
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<::std::optional<
        ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>>>>
#endif // @header-generator platform
    getExcludePermutations() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<std::optional<std::vector<std::string>>> getExcludeTags() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<::std::optional<::std::vector<::std::string>>> getExcludeTags() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<std::optional<std::vector<std::string>>> getExcludeTypes() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<::std::optional<::std::vector<::std::string>>> getExcludeTypes() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<
        std::optional<std::vector<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockPermutation>>>>
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<::std::optional<
        ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>>>>
#endif // @header-generator platform
    getIncludePermutations() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<std::optional<std::vector<std::string>>> getIncludeTags() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<::std::optional<::std::vector<::std::string>>> getIncludeTags() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<std::optional<std::vector<std::string>>> getIncludeTypes() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<::std::optional<::std::vector<::std::string>>> getIncludeTypes() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isEmpty() const;
#else // @header-generator platform
    MCAPI bool isValid(::Scripting::Error& error) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isValid(::Scripting::Error&) const;
#else // @header-generator platform
    MCAPI bool operator()(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator()(::Block const&) const;
#else // @header-generator platform
    MCAPI ::ScriptModuleMinecraft::ScriptBlockFilter& operator=(::ScriptModuleMinecraft::ScriptBlockFilter&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScriptModuleMinecraft::ScriptBlockFilter& operator=(::ScriptModuleMinecraft::ScriptBlockFilter const&);
#else // @header-generator platform
    MCAPI ::ScriptModuleMinecraft::ScriptBlockFilter& operator=(::ScriptModuleMinecraft::ScriptBlockFilter const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScriptModuleMinecraft::ScriptBlockFilter& operator=(::ScriptModuleMinecraft::ScriptBlockFilter&&);

    MCNAPI ::Scripting::Result_deprecated<void> setExcludePermutations(
        std::optional<
            std::vector<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockPermutation>>> const&
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<void> setExcludePermutations(
        ::std::optional<
            ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>>> const&
            permutations
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<void> setExcludeTags(std::optional<std::vector<std::string>>);
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<void> setExcludeTags(::std::optional<::std::vector<::std::string>> strings);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<void> setExcludeTypes(std::optional<std::vector<std::string>>);
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<void> setExcludeTypes(::std::optional<::std::vector<::std::string>> strings);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<void> setIncludePermutations(
        std::optional<
            std::vector<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockPermutation>>> const&
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<void> setIncludePermutations(
        ::std::optional<
            ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>>> const&
            permutations
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<void> setIncludeTags(std::optional<std::vector<std::string>>);
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<void> setIncludeTags(::std::optional<::std::vector<::std::string>> strings);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<void> setIncludeTypes(std::optional<std::vector<std::string>>);
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<void> setIncludeTypes(::std::optional<::std::vector<::std::string>> strings);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ScriptBlockFilter();
#else // @header-generator platform
    MCAPI ~ScriptBlockFilter();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::InterfaceBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::InterfaceBinding bind();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptBlockFilter const&);
#else // @header-generator platform
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptBlockFilter const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
