#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class HashedString;
#endif // @header-generator platform
// clang-format on

struct ActorTargetFilter {
public:
    // ActorTargetFilter inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum ConditionType : uint {
        LEAF    = 0,
        AND     = 1,
        OR      = 2,
        INVALID = 3,
#else // @header-generator platform
    enum class ConditionType : int {
        Leaf    = 0,
        And     = 1,
        Or      = 2,
        Invalid = 3,
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::ActorTargetFilter::ConditionType> mType;
    ::ll::TypedStorage<8, 24, std::string>                       mKey;
    ::ll::TypedStorage<8, 24, std::vector<HashedString>>         mConditions;
    ::ll::UntypedStorage<8, 24>                                  mChildrenConditions;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::ActorTargetFilter::ConditionType>  mType;
    ::ll::TypedStorage<8, 32, ::std::string>                      mKey;
    ::ll::TypedStorage<8, 24, ::std::vector<::HashedString>>      mConditions;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorTargetFilter>> mChildrenConditions;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unordered_map<HashedString, bool (*)(const ActorTargetFilter&, Actor&)>& ConditionPredicates();
#else // @header-generator platform
    MCAPI static ::std::add_lvalue_reference_t<
        ::std::unordered_map<::HashedString, bool (*)(::ActorTargetFilter const&, ::Actor&)>>
    ConditionPredicates();
#endif // @header-generator platform
    // NOLINTEND
};
