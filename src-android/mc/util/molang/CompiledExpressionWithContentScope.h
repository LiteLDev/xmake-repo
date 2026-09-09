#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/StaticOptimizedString.h"
#include "mc/molang/MolangVersion.h"
#include "mc/util/molang/CompiledExpressionWithoutContentScope.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
struct MolangScriptArg;
namespace Molang::details { class IComplexExpression; }
namespace Molang::details { class Program; }
// clang-format on

namespace Molang::details {

class CompiledExpressionWithContentScope : public ::Molang::details::CompiledExpressionWithoutContentScope {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Bedrock::StaticOptimizedString> mLimitedContentScopeString;
    ::ll::TypedStorage<8, 8, ::Bedrock::StaticOptimizedString> mFullContentScopeString;
    // NOLINTEND

public:
    // prevent constructor by default
    CompiledExpressionWithContentScope();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual std::unique_ptr<Molang::details::IComplexExpression> clone() const;

    virtual ::MolangScriptArg const& evalGeneric(::RenderParams&) const;
    // NOLINTEND
};

} // namespace Molang::details
