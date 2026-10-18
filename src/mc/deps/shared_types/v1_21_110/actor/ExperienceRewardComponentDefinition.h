#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_110 {

struct ExperienceRewardComponentDefinition {
public:
    // ExperienceRewardComponentDefinition inner types define
    using ExpressionNode = ::SharedTypes::Legacy::ExpressionNode;

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::SharedTypes::Legacy::ExpressionNode>            mOnBred;
    ::ll::TypedStorage<8, 40, ::SharedTypes::Legacy::ExpressionNode>            mOnDeath;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::Legacy::ExpressionNode>> mOnBredArray;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::Legacy::ExpressionNode>> mOnDeathArray;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::SharedTypes::Legacy::ExpressionNode>                mOnBred;
    ::ll::TypedStorage<8, 48, ::SharedTypes::Legacy::ExpressionNode>                mOnDeath;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::ExpressionNode>> mOnBredArray;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::ExpressionNode>> mOnDeathArray;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ExperienceRewardComponentDefinition& operator=(ExperienceRewardComponentDefinition const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ExperienceRewardComponentDefinition();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ExperienceRewardComponentDefinition(::SharedTypes::v1_21_110::ExperienceRewardComponentDefinition const&);
#else // @header-generator platform
    MCAPI ExperienceRewardComponentDefinition(::SharedTypes::v1_21_110::ExperienceRewardComponentDefinition const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addBredExpressionNode(::SharedTypes::Legacy::ExpressionNode const&);
#else // @header-generator platform
    MCAPI void addBredExpressionNode(::SharedTypes::Legacy::ExpressionNode const& expr);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addDeathExpressionNode(::SharedTypes::Legacy::ExpressionNode const&);
#else // @header-generator platform
    MCAPI void addDeathExpressionNode(::SharedTypes::Legacy::ExpressionNode const& expr);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::v1_21_110::ExperienceRewardComponentDefinition&
    operator=(::SharedTypes::v1_21_110::ExperienceRewardComponentDefinition&&);
#else // @header-generator platform
    MCAPI bool operator==(::SharedTypes::v1_21_110::ExperienceRewardComponentDefinition const&) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::SharedTypes::v1_21_110::ExperienceRewardComponentDefinition const&) const;

    MCNAPI ~ExperienceRewardComponentDefinition();
#else // @header-generator platform
    MCAPI ~ExperienceRewardComponentDefinition();
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
    MCNAPI static std::string_view const& NAME();
#else // @header-generator platform
    MCAPI static ::std::string_view const& NAME();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::v1_21_110::ExperienceRewardComponentDefinition const&);
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::v1_21_110::ExperienceRewardComponentDefinition const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110
