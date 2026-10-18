#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/string/StaticOptimizedString.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/molang/MolangVersion.h"
#include "mc/util/molang/CompiledExpressionWithoutContentScope.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
struct MolangScriptArg;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Bedrock { class StaticOptimizedString; }
#endif // @header-generator platform
namespace Molang::details { class IComplexExpression; }
namespace Molang::details { class Program; }
// clang-format on

namespace Molang::details {

class CompiledExpressionWithContentScope : public ::Molang::details::CompiledExpressionWithoutContentScope {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Bedrock::StaticOptimizedString> mLimitedContentScopeString;
    ::ll::TypedStorage<8, 8, ::Bedrock::StaticOptimizedString> mFullContentScopeString;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk5052e8;
    ::ll::UntypedStorage<8, 8> mUnk13bf71;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    CompiledExpressionWithContentScope& operator=(CompiledExpressionWithContentScope const&);
    CompiledExpressionWithContentScope(CompiledExpressionWithContentScope const&);
#endif // @header-generator platform
    CompiledExpressionWithContentScope();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<Molang::details::IComplexExpression> clone() const;
#else // @header-generator platform
    virtual ::std::unique_ptr<::Molang::details::IComplexExpression> clone() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::MolangScriptArg const& evalGeneric(::RenderParams&) const;
#else // @header-generator platform
    virtual ::MolangScriptArg const& evalGeneric(::RenderParams& params) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CompiledExpressionWithContentScope(
        ::Molang::details::Program       instructions,
        ::Bedrock::StaticOptimizedString expressionString,
        ::MolangVersion                  version,
        bool                             hasVariableAssignments
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Molang::details::Program       instructions,
        ::Bedrock::StaticOptimizedString expressionString,
        ::MolangVersion                  version,
        bool                             hasVariableAssignments
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::Molang::details::IComplexExpression> $clone() const;

    MCNAPI ::MolangScriptArg const& $evalGeneric(::RenderParams& params) const;


#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Molang::details
