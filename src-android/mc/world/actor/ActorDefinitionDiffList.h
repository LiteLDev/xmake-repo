#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/factory/DefinitionInstanceGroup.h"
#include "mc/world/actor/DiffListPair.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionDescriptor;
class ActorDefinitionGroup;
// clang-format on

class ActorDefinitionDiffList {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::ActorDefinitionGroup&> mDefinitions;
    ::ll::TypedStorage<8, 24, std::vector<DiffListPair>> mDefinitionStack;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ActorDefinitionDescriptor>> mChangedDescription;
    ::ll::TypedStorage<1, 1, bool> mChanged;
    ::ll::TypedStorage<8, 56, ::DefinitionInstanceGroup> mAddedDefinitionGroup;
    ::ll::TypedStorage<8, 56, ::DefinitionInstanceGroup> mRemovedDefinitionGroup;
    ::ll::TypedStorage<8, 40, std::unordered_map<ulong, std::variant<int, float, bool, ulong>>> mPendingPropertyChanges;
    ::ll::TypedStorage<1, 1, bool> mLockedChanges;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<bool, std::string>>> mPendingChanges;
    ::ll::TypedStorage<8, 40, std::unordered_map<ulong, std::variant<int, float, bool, ulong>>> mDeferredPropertyChanges;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDefinitionDiffList& operator=(ActorDefinitionDiffList const&);
    ActorDefinitionDiffList(ActorDefinitionDiffList const&);
    ActorDefinitionDiffList();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ActorDefinitionDiffList(::ActorDefinitionGroup&);

    MCNAPI void _addDefinition(::ActorDefinitionDescriptor&);

    MCNAPI std::unique_ptr<ActorDefinitionDescriptor> _getDescriptionFrom(ulong, ulong);

    MCNAPI void _removeDefinition(::ActorDefinitionDescriptor&);

    MCNAPI void _updateStack();

    MCNAPI void addDefinition(std::string const&);

    MCNAPI void addPendingPropertyChange(ulong, std::variant<int, float, bool, ulong>);

    MCNAPI void clearChangedDescription();

    MCNAPI std::string definitionListToString(std::string const&) const;

    MCNAPI ::ActorDefinitionDescriptor& getChangedDescription();

    MCNAPI std::vector<DiffListPair> const& getDefinitionStack() const;

    MCNAPI void removeDefinition(std::string const&);

    MCNAPI ~ActorDefinitionDiffList();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorDefinitionGroup&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
