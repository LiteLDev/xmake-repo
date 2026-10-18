#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/util/molang/ExpressionOp.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class RenderParams;
struct MolangScriptArg;
namespace Json { class Value; }
namespace Molang::details { class ExpressionNode; }
namespace Molang::details { class SourceTree; }
// clang-format on

namespace Molang::details {

class IComplexExpression {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IComplexExpression() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<Molang::details::IComplexExpression> clone() const = 0;
#else // @header-generator platform
    virtual ::std::unique_ptr<::Molang::details::IComplexExpression> clone() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::MolangScriptArg const& evalGeneric(::RenderParams&) const = 0;
#else // @header-generator platform
    virtual ::MolangScriptArg const& evalGeneric(::RenderParams& params) const = 0;
#endif // @header-generator platform

    virtual bool isInitialized() const = 0;

    virtual ::Json::Value toJson() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getExpressionString() const = 0;
#else // @header-generator platform
    virtual ::std::string getExpressionString() const = 0;
#endif // @header-generator platform

    virtual ::MolangVersion getMolangVersion() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void replaceArrayVariables(std::unordered_map<HashedString, Molang::details::ExpressionNode>&) = 0;
#else // @header-generator platform
    virtual void
    replaceArrayVariables(::std::unordered_map<::HashedString, ::Molang::details::ExpressionNode>& dataMap) = 0;
#endif // @header-generator platform

    virtual void validateArrayVariables() const = 0;

    virtual bool isValid() const = 0;

    virtual bool isConstantValue() const = 0;

    virtual bool hasVariableAssignments() const = 0;

    virtual ::ExpressionOp getOp() const = 0;

    virtual bool needsToCompile() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<MolangScriptArg> getValueIfConstant() const = 0;
#else // @header-generator platform
    virtual ::std::optional<::MolangScriptArg> getValueIfConstant() const = 0;
#endif // @header-generator platform

    virtual ::Molang::details::SourceTree* getSource() = 0;
    // NOLINTEND
};

} // namespace Molang::details
