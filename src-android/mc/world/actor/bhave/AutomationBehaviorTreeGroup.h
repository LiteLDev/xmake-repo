#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BehaviorFactory;
class BehaviorTreeDefinition;
class BehaviorTreeDefinitionPtr;
class ResourcePackManager;
namespace Json { class Value; }
// clang-format on

class AutomationBehaviorTreeGroup {
public:
    // AutomationBehaviorTreeGroup inner types define
    using BehaviorDefinitionMap = std::unordered_map<std::string, std::unique_ptr<BehaviorTreeDefinition>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&> mResourcePackManager;
    ::ll::TypedStorage<8, 8, ::BehaviorFactory&>     mFactory;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::unique_ptr<BehaviorTreeDefinition>>> mDefinitions;
    ::ll::TypedStorage<8, 40, std::unordered_set<BehaviorTreeDefinitionPtr*>>                           mRegisteredPtrs;
    // NOLINTEND

public:
    // prevent constructor by default
    AutomationBehaviorTreeGroup& operator=(AutomationBehaviorTreeGroup const&);
    AutomationBehaviorTreeGroup(AutomationBehaviorTreeGroup const&);
    AutomationBehaviorTreeGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AutomationBehaviorTreeGroup(::ResourcePackManager&, ::BehaviorFactory&);

    MCNAPI ::BehaviorTreeDefinitionPtr tryGetDefinition(std::string const&);

    MCNAPI ~AutomationBehaviorTreeGroup();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ResourcePackManager&, ::BehaviorFactory&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
