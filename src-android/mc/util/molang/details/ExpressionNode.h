#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/platform/brstd/bitset.h"
#include "mc/platform/brstd/flat_set.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/util/MolangCompileResult.h"
#include "mc/util/MolangScriptArg.h"
#include "mc/util/molang/ExpressionNode.h"
#include "mc/util/molang/ExpressionOp.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class RenderParams;
struct MolangEvalParams;
struct MolangParseConfig;
namespace Json { class Value; }
namespace Molang::details { class Program; }
namespace Molang::details { struct MolangProgramBuildState; }
// clang-format on

namespace Molang::details {

class ExpressionNode {
public:
    // ExpressionNode inner types define
    struct ResourceReference {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::ExpressionOp>     mOp;
    ::ll::TypedStorage<4, 4, float>              mMul;
    ::ll::TypedStorage<4, 4, float>              mAdd;
    ::ll::TypedStorage<8, 88, ::MolangScriptArg> mValue;
    ::ll::UntypedStorage<8, 24>                  mChildren;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ExpressionNode(::Molang::details::ExpressionNode const&);

    MCNAPI ExpressionNode(::Molang::details::ExpressionNode&&);

    MCNAPI bool _checkAllOperationsAreValid() const;

    MCNAPI bool _optimize(::MolangVersion const, ::RenderParams&, int);

    MCNAPI bool _processBinaryExpressions(::brstd::function_ref<bool(ExpressionOp)>);

    MCNAPI bool _processTernaryAndConditionalExpressions();

    MCNAPI bool _validate(::MolangVersion const, bool, int) const;

    MCNAPI bool _validateChildrenAreNumerical(::MolangVersion const) const;

    MCNAPI bool areAllChildrenEqual() const;

    MCNAPI void clear();

    MCNAPI bool findClosingOp(ulong&, ::ExpressionOp) const;

    MCNAPI ulong getTreeHash(bool) const;

    MCNAPI bool getTreeString(std::string&, bool) const;

    MCNAPI bool isInitialized() const;

    MCNAPI bool isValid() const;

    MCNAPI ::nonstd::expected<Molang::details::Program, MolangCompileResult> link(::MolangVersion);

    MCNAPI void moveConstantChildToValueIfFloatOrHashType(int);

    MCNAPI ::Molang::details::ExpressionNode& operator=(float);

    MCNAPI ::Molang::details::ExpressionNode& operator=(::Molang::details::ExpressionNode&&);

    MCNAPI bool operator==(::Molang::details::ExpressionNode const&) const;

    MCNAPI bool optimizeFunctionCallParams();

    MCNAPI bool parse(::Json::Value const&, ::MolangParseConfig const&, ::brstd::bitset<109, ulong>&);

    MCNAPI bool parse(std::string_view, ::MolangParseConfig const&, ::brstd::bitset<109, ulong>&);

    MCNAPI bool processArrays();

    MCNAPI bool processBinaryExpression(::ExpressionOp);

    MCNAPI bool processMathFuncs();

    MCNAPI bool processNegativesAndLogicalNots();

    MCNAPI bool processQueriesAndFunctions();

    MCNAPI bool processSections();

    MCNAPI bool processSemicolons();

    MCNAPI bool processUnaryExpression(::ExpressionOp);

    MCNAPI void replaceArrayVariables(std::unordered_map<HashedString, Molang::details::ExpressionNode>&);

    MCNAPI ::brstd::flat_set<HashedString, std::less<HashedString>, std::vector<HashedString>>
    replaceResourceVariables(std::unordered_map<HashedString, ExpressionNode::ResourceReference>&);

    MCNAPI void validateArrayVariables() const;

    MCNAPI ~ExpressionNode();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::MolangCompileResult _buildProgram(
        ::Molang::details::MolangProgramBuildState&,
        ::Molang::details::ExpressionNode const*,
        ::MolangVersion
    );

    MCNAPI static ::MolangScriptArg*
    _getOrCreateReferencedMemberVariableScriptArg(::MolangEvalParams&, ::Molang::details::ExpressionNode const&);

    MCNAPI static ::MolangScriptArg const*
    _getScriptArgFromMemberAccessedVariable(::MolangEvalParams&, ::Molang::details::ExpressionNode const&);

    MCNAPI static void _writeScriptArgToMemberAccessedVariable(
        ::MolangEvalParams&,
        ::Molang::details::ExpressionNode const&,
        ::MolangScriptArg const&
    );

    MCNAPI static std::string& toLowerInPlaceExceptStrings(std::string&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Molang::details::ExpressionNode const&);

    MCNAPI void* $ctor(::Molang::details::ExpressionNode&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Molang::details
