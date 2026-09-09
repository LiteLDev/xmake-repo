#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/Facing.h"
#include "mc/deps/shared_types/v1_20_60/block/BlockCulling.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_80 {

struct BlockCulling {
public:
    // BlockCulling inner types declare
    // clang-format off
    struct Rule;
    // clang-format on

    // BlockCulling inner types define
    struct Rule {
    public:
        // Rule inner types define
        enum Condition : uint {
            NotDefined           = 0,
            SameCullingLayer     = 1,
            SameBlock            = 2,
            SameBlockPermutation = 3,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 40>                                                                   mGeometryPart;
        ::ll::TypedStorage<4, 8, std::optional<SharedTypes::v1_21_80::BlockCulling::Rule::Condition>> mCondition;
        ::ll::TypedStorage<1, 1, bool>                  mCullAgainstFullAndOpaque;
        ::ll::TypedStorage<2, 2, ::SharedTypes::Facing> mDirectionToCheckAgainst;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                                       mDescription;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_80::BlockCulling::Rule>> mRules;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BlockCulling();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_80
