#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/actor/ai/goal/GoalId.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
class IDefinitionInstance;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct GoalId;
#endif // @header-generator platform
// clang-format on

class GoalDefinitionInstanceGroup {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // GoalDefinitionInstanceGroup inner types define
    using DefinitionId = ::GoalId;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 56, ::entt::dense_map<ushort, std::shared_ptr<IDefinitionInstance>, std::hash<ushort>, std::equal_to<void>, std::allocator<std::pair<const ushort, std::shared_ptr<IDefinitionInstance>>>>> mUniqueDefinitionMap;
    ::ll::TypedStorage<8, 56, ::entt::dense_map<GoalId, std::shared_ptr<IDefinitionInstance>, std::hash<GoalId>, std::equal_to<void>, std::allocator<std::pair<const GoalId, std::shared_ptr<IDefinitionInstance>>>>> mGenericDefinitionMap;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 72> mUnkad56d0;
    ::ll::UntypedStorage<8, 72> mUnk756c08;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    GoalDefinitionInstanceGroup& operator=(GoalDefinitionInstanceGroup const&);
    GoalDefinitionInstanceGroup(GoalDefinitionInstanceGroup const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    GoalDefinitionInstanceGroup();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addUnique(std::shared_ptr<IDefinitionInstance> const&);
#else // @header-generator platform
    MCNAPI void add(::GoalId const& id, ::std::shared_ptr<::IDefinitionInstance> const& definition);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void combine(::GoalDefinitionInstanceGroup const&);
#else // @header-generator platform
    MCNAPI void combine(::GoalDefinitionInstanceGroup const& other);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool contains(::GoalDefinitionInstanceGroup const&) const;
#else // @header-generator platform
    MCNAPI bool contains(::GoalDefinitionInstanceGroup const& other) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void forEachDefinition(::brstd::function_ref<void(const std::shared_ptr<IDefinitionInstance>&)>) const;
#else // @header-generator platform
    MCNAPI bool overlaps(::GoalDefinitionInstanceGroup const& other) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isEmpty() const;

    MCNAPI bool overlaps(::GoalDefinitionInstanceGroup const&) const;

    MCNAPI void remove(::GoalId const&, std::shared_ptr<IDefinitionInstance> const&);

    MCNAPI void subtract(::GoalDefinitionInstanceGroup const&);
#else // @header-generator platform
    MCNAPI void remove(::GoalId const& id, ::std::shared_ptr<::IDefinitionInstance> const& definition);
#endif // @header-generator platform
    // NOLINTEND
};
