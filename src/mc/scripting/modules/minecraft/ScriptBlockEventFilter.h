#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft/block/ScriptBlockPermutation.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/block/BlockDescriptor.h"

// auto generated forward declare list
// clang-format off
class Block;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
#endif // @header-generator platform
namespace ScriptModuleMinecraft::EventFilters { struct ScriptBlockFilterData; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptBlockEventFilter {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // ScriptBlockEventFilter inner types define
    using Data = ::ScriptModuleMinecraft::EventFilters::ScriptBlockFilterData;

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 32>                                         mSpecificPermutations;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<std::string>>>  mBlockTypes;
    ::ll::TypedStorage<8, 24, std::vector<gsl::not_null<const Block*>>> mProcessedSpecificPermutations;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>>             mProcessedBlockTypes;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        32,
        ::std::optional<
            ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>>>>
                                                                              mSpecificPermutations;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>>  mBlockTypes;
    ::ll::TypedStorage<8, 24, ::std::vector<::gsl::not_null<::Block const*>>> mProcessedSpecificPermutations;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>>               mProcessedBlockTypes;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ScriptBlockEventFilter();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptBlockEventFilter(::ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter const&);
#else // @header-generator platform
    MCAPI ScriptBlockEventFilter(::ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter&
#else // @header-generator platform
    MCAPI ::ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter&
#endif // @header-generator platform
    operator=(::ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter&&);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void process();
#else // @header-generator platform
    MCAPI ::ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter&
    operator=(::ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptBlockFilterData const&);
#else // @header-generator platform
    MCAPI void process();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ScriptBlockEventFilter();
#else // @header-generator platform
    MCAPI ~ScriptBlockEventFilter();
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
    MCNAPI void* $ctor(::ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter const&);
#else // @header-generator platform
    MCAPI void* $ctor(::ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter const&);
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

} // namespace ScriptModuleMinecraft::EventFilters
