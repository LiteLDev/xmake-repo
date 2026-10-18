#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/string/StaticOptimizedString.h"
#include "mc/molang/MolangVersion.h"
#include "mc/platform/brstd/flat_set.h"
#include "mc/util/MolangCompileResult.h"
#include "mc/util/molang/ExpressionNode.h"
#include "mc/util/molang/ExpressionOp.h"
#include "mc/util/molang/details/ExpressionNode.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class HashedString;
#else // @header-generator platform
#endif // @header-generator platform
struct MolangParseConfig;
#if defined(LL_PLAT_A) // @header-generator platform
struct MolangScriptArg;
namespace Json { class Value; }
#else // @header-generator platform
namespace Molang::details { class ExpressionNode; }
#endif // @header-generator platform
namespace Molang::details { class IComplexExpression; }
// clang-format on

namespace Molang::details {

class SourceTree {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::Molang::details::ExpressionNode> mRoot;
    ::ll::TypedStorage<8, 8, ::Bedrock::StaticOptimizedString>    mExpressionString;
    ::ll::TypedStorage<4, 4, ::MolangCompileResult>               mLastCompileResult;
    ::ll::TypedStorage<2, 2, ::MolangVersion>                     mMolangVersion;
    ::ll::TypedStorage<1, 1, bool>                                mHasVariableAssignments;
    ::ll::TypedStorage<1, 1, bool>                                mPreserveSource;
#else // @header-generator platform
// member variables
// NOLINTBEGIN
#ifdef LL_PLAT_S
    ::ll::UntypedStorage<8, 128> mUnk23c850;
#else // LL_PLAT_C
    ::ll::UntypedStorage<8, 136> mUnk23c850;
#endif
    ::ll::UntypedStorage<8, 8> mUnk640833;
    ::ll::UntypedStorage<4, 4> mUnkcb966c;
    ::ll::UntypedStorage<2, 2> mUnk4771d0;
    ::ll::UntypedStorage<1, 1> mUnk65ee2d;
    ::ll::UntypedStorage<1, 1> mUnk4d1a0b;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    SourceTree& operator=(SourceTree const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    SourceTree(SourceTree const&);
    SourceTree();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SourceTree(::Json::Value const&, ::MolangParseConfig const&);

    MCNAPI ~SourceTree();
#else // @header-generator platform
    MCNAPI SourceTree(::Molang::details::ExpressionNode node, ::MolangParseConfig const& parseConfig);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unique_ptr<Molang::details::IComplexExpression> link(::Molang::details::SourceTree);

    MCNAPI static ::Molang::details::SourceTree parse(std::string_view, ::MolangParseConfig const&);
#else // @header-generator platform
    MCNAPI static ::std::unique_ptr<::Molang::details::IComplexExpression> link(::Molang::details::SourceTree root);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Json::Value const&, ::MolangParseConfig const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(::Molang::details::ExpressionNode node, ::MolangParseConfig const& parseConfig);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Molang::details
