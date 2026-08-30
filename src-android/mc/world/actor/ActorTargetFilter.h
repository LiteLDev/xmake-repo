#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

struct ActorTargetFilter {
public:
    // ActorTargetFilter inner types define
    enum ConditionType : uint {
        LEAF    = 0,
        AND     = 1,
        OR      = 2,
        INVALID = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ActorTargetFilter::ConditionType> mType;
    ::ll::TypedStorage<8, 24, std::string>                       mKey;
    ::ll::TypedStorage<8, 24, std::vector<HashedString>>         mConditions;
    ::ll::UntypedStorage<8, 24>                                  mChildrenConditions;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::unordered_map<HashedString, bool (*)(const ActorTargetFilter&, Actor&)>& ConditionPredicates();
    // NOLINTEND
};
