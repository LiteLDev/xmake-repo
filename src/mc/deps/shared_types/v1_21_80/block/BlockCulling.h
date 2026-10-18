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
#if defined(LL_PLAT_A) // @header-generator platform
        enum Condition : uint {
#else // @header-generator platform
        enum class Condition : int {
#endif // @header-generator platform
            NotDefined           = 0,
            SameCullingLayer     = 1,
            SameBlock            = 2,
            SameBlockPermutation = 3,
        };

    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 40>                                                                   mGeometryPart;
        ::ll::TypedStorage<4, 8, std::optional<SharedTypes::v1_21_80::BlockCulling::Rule::Condition>> mCondition;
#else // @header-generator platform
        ::ll::TypedStorage<8, 48, ::SharedTypes::v1_20_60::BlockCulling::Rule::GeometryPart>              mGeometryPart;
        ::ll::TypedStorage<4, 8, ::std::optional<::SharedTypes::v1_21_80::BlockCulling::Rule::Condition>> mCondition;
#endif // @header-generator platform
        ::ll::TypedStorage<1, 1, bool>                  mCullAgainstFullAndOpaque;
        ::ll::TypedStorage<2, 2, ::SharedTypes::Facing> mDirectionToCheckAgainst;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                                                       mDescription;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_80::BlockCulling::Rule>> mRules;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BlockCulling();
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::SharedTypes::v1_20_60::BlockCulling::Description>         mDescription;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_80::BlockCulling::Rule>> mRules;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::SemVersionConstant const& VERSION();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_80
