#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/StaticOptimizedString.h"
#include "mc/molang/MolangVersion.h"
#include "mc/platform/brstd/flat_set.h"
#include "mc/util/MolangCompileResult.h"
#include "mc/util/molang/ExpressionNode.h"
#include "mc/util/molang/ExpressionOp.h"
#include "mc/util/molang/details/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
class HashedString;
struct MolangParseConfig;
struct MolangScriptArg;
namespace Json { class Value; }
namespace Molang::details { class IComplexExpression; }
// clang-format on

namespace Molang::details {

class SourceTree {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::Molang::details::ExpressionNode> mRoot;
    ::ll::TypedStorage<8, 8, ::Bedrock::StaticOptimizedString>    mExpressionString;
    ::ll::TypedStorage<4, 4, ::MolangCompileResult>               mLastCompileResult;
    ::ll::TypedStorage<2, 2, ::MolangVersion>                     mMolangVersion;
    ::ll::TypedStorage<1, 1, bool>                                mHasVariableAssignments;
    ::ll::TypedStorage<1, 1, bool>                                mPreserveSource;
    // NOLINTEND

public:
    // prevent constructor by default
    SourceTree& operator=(SourceTree const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SourceTree(::Json::Value const&, ::MolangParseConfig const&);

    MCNAPI ~SourceTree();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<Molang::details::IComplexExpression> link(::Molang::details::SourceTree);

    MCNAPI static ::Molang::details::SourceTree parse(std::string_view, ::MolangParseConfig const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Json::Value const&, ::MolangParseConfig const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Molang::details
