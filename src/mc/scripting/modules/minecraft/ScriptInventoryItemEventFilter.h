#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptInventoryItemEventFilterProcessedData.h"
#include "mc/scripting/modules/minecraft/items/ScriptPlayerInventoryType.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft::EventFilters { struct ScriptInventoryItemEventFilterData; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptInventoryItemEventFilter {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // ScriptInventoryItemEventFilter inner types define
    using Data = ::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilterData;

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 168, ::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilterProcessedData> mProcessedData;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<int>>> mAllowedSlots;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<std::string>>> mExcludeItems;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<std::string>>> mExcludeTags;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<std::string>>> mIncludeItems;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<std::string>>> mIncludeTags;
    ::ll::TypedStorage<1, 2, std::optional<bool>> mIgnoreQuantityChange;
    ::ll::TypedStorage<4, 8, std::optional<ScriptModuleMinecraft::ScriptPlayerInventoryType>> mPlayerInventoryType;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 240, ::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilterProcessedData>
                                                                                                  mProcessedData;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<int>>>                                mAllowedSlots;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>>                      mExcludeItems;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>>                      mExcludeTags;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>>                      mIncludeItems;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>>                      mIncludeTags;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                               mIgnoreQuantityChange;
    ::ll::TypedStorage<4, 8, ::std::optional<::ScriptModuleMinecraft::ScriptPlayerInventoryType>> mPlayerInventoryType;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ScriptInventoryItemEventFilter();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptInventoryItemEventFilter(::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilter const&);
#else // @header-generator platform
    MCAPI ScriptInventoryItemEventFilter(::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilter const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilter&
#else // @header-generator platform
    MCAPI ::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilter&
#endif // @header-generator platform
    operator=(::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilter&&);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilter&
#else // @header-generator platform
    MCAPI ::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilter&
#endif // @header-generator platform
    operator=(::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilter const&);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void process();
#else // @header-generator platform
    MCAPI void process();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilterData const&) const;
#else // @header-generator platform
    MCAPI bool shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilterData const& data) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ScriptInventoryItemEventFilter();
#else // @header-generator platform
    MCAPI ~ScriptInventoryItemEventFilter();
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
    MCNAPI void* $ctor(::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilter const&);
#else // @header-generator platform
    MCAPI void* $ctor(::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilter const&);
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
