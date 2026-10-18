#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/factory/DefinitionInstanceGroup.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/DiffListPair.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class ActorDefinitionDescriptor;
class ActorDefinitionGroup;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct DiffListPair;
#endif // @header-generator platform
// clang-format on

class ActorDefinitionDiffList {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ActorDefinitionGroup&>                        mDefinitions;
    ::ll::TypedStorage<8, 24, ::std::vector<::DiffListPair>>                 mDefinitionStack;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ActorDefinitionDescriptor>> mChangedDescription;
    ::ll::TypedStorage<1, 1, bool>                                           mChanged;
    ::ll::TypedStorage<8, 72, ::DefinitionInstanceGroup>                     mAddedDefinitionGroup;
    ::ll::TypedStorage<8, 72, ::DefinitionInstanceGroup>                     mRemovedDefinitionGroup;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint64, ::std::variant<int, float, bool, uint64>>>
                                                                               mPendingPropertyChanges;
    ::ll::TypedStorage<1, 1, bool>                                             mLockedChanges;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<bool, ::std::string>>> mPendingChanges;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint64, ::std::variant<int, float, bool, uint64>>>
        mDeferredPropertyChanges;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDefinitionDiffList& operator=(ActorDefinitionDiffList const&);
    ActorDefinitionDiffList(ActorDefinitionDiffList const&);
    ActorDefinitionDiffList();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ActorDefinitionDiffList(::ActorDefinitionGroup&);
#else // @header-generator platform
    MCAPI explicit ActorDefinitionDiffList(::ActorDefinitionGroup& definitions);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _addDefinition(::ActorDefinitionDescriptor&);
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::ActorDefinitionDescriptor> _getDescriptionFrom(uint64 start, uint64 end);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<ActorDefinitionDescriptor> _getDescriptionFrom(ulong, ulong);
#else // @header-generator platform
    MCAPI void _updateStack();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _removeDefinition(::ActorDefinitionDescriptor&);
#else // @header-generator platform
    MCAPI void addDefinition(::std::string const& def);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _updateStack();
#else // @header-generator platform
    MCAPI void addPendingPropertyChange(uint64 overallPropertyIndex, ::std::variant<int, float, bool, uint64> value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addDefinition(std::string const&);
#else // @header-generator platform
    MCAPI void clearChangedDescription();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addPendingPropertyChange(ulong, std::variant<int, float, bool, ulong>);

    MCNAPI void clearChangedDescription();

    MCNAPI std::string definitionListToString(std::string const&) const;

    MCNAPI ::ActorDefinitionDescriptor& getChangedDescription();

    MCNAPI std::vector<DiffListPair> const& getDefinitionStack() const;

    MCNAPI void removeDefinition(std::string const&);

    MCNAPI ~ActorDefinitionDiffList();
#else // @header-generator platform
    MCAPI void removeDefinition(::std::string const& def);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ActorDefinitionGroup&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::ActorDefinitionGroup& definitions);
#endif // @header-generator platform
    // NOLINTEND
};
