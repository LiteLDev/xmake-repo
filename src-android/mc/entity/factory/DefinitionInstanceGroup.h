#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IDefinitionInstance;
// clang-format on

class DefinitionInstanceGroup {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 56, ::entt::dense_map<ushort, std::shared_ptr<IDefinitionInstance>, std::hash<ushort>, std::equal_to<void>, std::allocator<std::pair<const ushort, std::shared_ptr<IDefinitionInstance>>>>> mDefinitionMap;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    DefinitionInstanceGroup& operator=(DefinitionInstanceGroup const&);
    DefinitionInstanceGroup(DefinitionInstanceGroup const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void add(std::shared_ptr<IDefinitionInstance> const&);

    MCNAPI void clear();

    MCNAPI void combine(::DefinitionInstanceGroup const&);

    MCNAPI bool contains(::DefinitionInstanceGroup const&) const;

    MCNAPI bool overlaps(::DefinitionInstanceGroup const&) const;

    MCNAPI void subtract(::DefinitionInstanceGroup const&);

    MCNAPI ~DefinitionInstanceGroup();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
