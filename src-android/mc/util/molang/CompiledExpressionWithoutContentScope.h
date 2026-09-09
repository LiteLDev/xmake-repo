#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/StaticOptimizedString.h"
#include "mc/molang/MolangVersion.h"
#include "mc/util/molang/ExpressionOp.h"
#include "mc/util/molang/IComplexExpression.h"
#include "mc/util/molang/Program.h"

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

class CompiledExpressionWithoutContentScope : public ::Molang::details::IComplexExpression {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Molang::details::Program>      mInstructions;
    ::ll::TypedStorage<8, 8, ::Bedrock::StaticOptimizedString> mExpressionString;
    ::ll::TypedStorage<2, 2, ::MolangVersion>                  mVersion;
    ::ll::TypedStorage<1, 1, bool>                             mHasVariableAssignments;
    // NOLINTEND

public:
    // prevent constructor by default
    CompiledExpressionWithoutContentScope& operator=(CompiledExpressionWithoutContentScope const&);
    CompiledExpressionWithoutContentScope();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CompiledExpressionWithoutContentScope();

    virtual std::unique_ptr<Molang::details::IComplexExpression> clone() const;

    virtual ::MolangScriptArg const& evalGeneric(::RenderParams&) const;

    virtual bool isInitialized() const;

    virtual ::Json::Value toJson() const;

    virtual std::string getExpressionString() const;

    virtual ::MolangVersion getMolangVersion() const;

    virtual void replaceArrayVariables(std::unordered_map<HashedString, Molang::details::ExpressionNode>&);

    virtual void validateArrayVariables() const;

    virtual bool isValid() const;

    virtual bool isConstantValue() const;

    virtual bool hasVariableAssignments() const;

    virtual ::ExpressionOp getOp() const;

    virtual bool needsToCompile() const;

    virtual std::optional<MolangScriptArg> getValueIfConstant() const;

    virtual ::Molang::details::SourceTree* getSource();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<Molang::details::IComplexExpression> $clone() const;

    MCNAPI ::MolangScriptArg const& $evalGeneric(::RenderParams&) const;

    MCNAPI bool $isInitialized() const;

    MCNAPI ::Json::Value $toJson() const;

    MCNAPI std::string $getExpressionString() const;

    MCNAPI ::MolangVersion $getMolangVersion() const;

    MCNAPI void $replaceArrayVariables(std::unordered_map<HashedString, Molang::details::ExpressionNode>&);

    MCNAPI void $validateArrayVariables() const;

    MCNAPI bool $isValid() const;

    MCNAPI bool $isConstantValue() const;

    MCNAPI bool $hasVariableAssignments() const;

    MCNAPI ::ExpressionOp $getOp() const;

    MCNAPI bool $needsToCompile() const;

    MCNAPI std::optional<MolangScriptArg> $getValueIfConstant() const;

    MCNAPI ::Molang::details::SourceTree* $getSource();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Molang::details
