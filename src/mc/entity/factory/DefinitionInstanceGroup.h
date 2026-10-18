#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class IDefinitionInstance;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class DefinitionInstanceGroup {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 56, ::entt::dense_map<ushort, std::shared_ptr<IDefinitionInstance>, std::hash<ushort>, std::equal_to<void>, std::allocator<std::pair<const ushort, std::shared_ptr<IDefinitionInstance>>>>> mDefinitionMap;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 72> mUnk4e28b4;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    DefinitionInstanceGroup& operator=(DefinitionInstanceGroup const&);
    DefinitionInstanceGroup(DefinitionInstanceGroup const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    DefinitionInstanceGroup();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void add(std::shared_ptr<IDefinitionInstance> const&);
#else // @header-generator platform
    MCNAPI void combine(::DefinitionInstanceGroup const& other);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCNAPI void subtract(::DefinitionInstanceGroup const& other);
#endif // @header-generator platform
    // NOLINTEND
};
