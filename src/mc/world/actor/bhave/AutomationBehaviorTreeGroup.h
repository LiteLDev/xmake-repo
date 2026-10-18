#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated inclusion list
#include "mc/world/actor/bhave/BehaviorTreeDefinitionPtr.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class BehaviorFactory;
class BehaviorTreeDefinition;
#if defined(LL_PLAT_A) // @header-generator platform
class BehaviorTreeDefinitionPtr;
#else // @header-generator platform
#endif // @header-generator platform
class ResourcePackManager;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Json { class Value; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class AutomationBehaviorTreeGroup {
public:
    // AutomationBehaviorTreeGroup inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using BehaviorDefinitionMap = std::unordered_map<std::string, std::unique_ptr<BehaviorTreeDefinition>>;
#else // @header-generator platform
    using BehaviorDefinitionMap = ::std::unordered_map<::std::string, ::std::unique_ptr<::BehaviorTreeDefinition>>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&> mResourcePackManager;
    ::ll::TypedStorage<8, 8, ::BehaviorFactory&>     mFactory;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::unique_ptr<BehaviorTreeDefinition>>> mDefinitions;
    ::ll::TypedStorage<8, 40, std::unordered_set<BehaviorTreeDefinitionPtr*>>                           mRegisteredPtrs;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::unique_ptr<::BehaviorTreeDefinition>>>
                                                                                  mDefinitions;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::BehaviorTreeDefinitionPtr*>> mRegisteredPtrs;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    AutomationBehaviorTreeGroup& operator=(AutomationBehaviorTreeGroup const&);
    AutomationBehaviorTreeGroup(AutomationBehaviorTreeGroup const&);
    AutomationBehaviorTreeGroup();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI AutomationBehaviorTreeGroup(::ResourcePackManager&, ::BehaviorFactory&);
#else // @header-generator platform
    MCAPI ::BehaviorTreeDefinitionPtr tryGetDefinition(::std::string const& defId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BehaviorTreeDefinitionPtr tryGetDefinition(std::string const&);

    MCNAPI ~AutomationBehaviorTreeGroup();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ResourcePackManager&, ::BehaviorFactory&);
#else // @header-generator platform
    MCAPI ~AutomationBehaviorTreeGroup();
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
