#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/platform/brstd/bitset.h"
#include "mc/platform/brstd/flat_set.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/util/MolangCompileResult.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/util/MolangScriptArg.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/util/molang/ExpressionNode.h"
#include "mc/util/molang/ExpressionOp.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class RenderParams;
struct MolangEvalParams;
struct MolangParseConfig;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct MolangScriptArg;
#endif // @header-generator platform
namespace Json { class Value; }
namespace Molang::details { class Program; }
namespace Molang::details { struct MolangProgramBuildState; }
// clang-format on

namespace Molang::details {

class ExpressionNode {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // ExpressionNode inner types define
    struct ResourceReference {};

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<2, 2, ::ExpressionOp>     mOp;
    ::ll::TypedStorage<4, 4, float>              mMul;
    ::ll::TypedStorage<4, 4, float>              mAdd;
    ::ll::TypedStorage<8, 88, ::MolangScriptArg> mValue;
    ::ll::UntypedStorage<8, 24>                  mChildren;
#else // @header-generator platform
    ::ll::UntypedStorage<2, 2> mUnkf560f0;
    ::ll::UntypedStorage<4, 4> mUnk4e6e98;
    ::ll::UntypedStorage<4, 4> mUnk56c08e;
#ifdef LL_PLAT_S
    ::ll::UntypedStorage<8, 88> mUnka6816f;
#else // LL_PLAT_C
    ::ll::UntypedStorage<8, 96> mUnka6816f;
#endif
    ::ll::UntypedStorage<8, 24> mUnk731c4e;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ExpressionNode& operator=(ExpressionNode const&);
    ExpressionNode();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ExpressionNode(::Molang::details::ExpressionNode const&);
#else // @header-generator platform
    MCNAPI ExpressionNode(::Molang::details::ExpressionNode&& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ExpressionNode(::Molang::details::ExpressionNode&&);
#else // @header-generator platform
    MCNAPI ExpressionNode(::Molang::details::ExpressionNode const& rhs);
#endif // @header-generator platform

    MCNAPI bool _checkAllOperationsAreValid() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _optimize(::MolangVersion const, ::RenderParams&, int);
#else // @header-generator platform
    MCNAPI bool _optimize(::MolangVersion const version, ::RenderParams& outRenderParams, int recursionDepth);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _processBinaryExpressions(::brstd::function_ref<bool(ExpressionOp)>);
#else // @header-generator platform
    MCNAPI bool _processBinaryExpressions(::brstd::function_ref<bool(::ExpressionOp)> predicate);
#endif // @header-generator platform

    MCNAPI bool _processTernaryAndConditionalExpressions();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _validate(::MolangVersion const, bool, int) const;
#else // @header-generator platform
    MCNAPI bool _validate(::MolangVersion const version, bool inLoop, int inAssignmentLHSDepth) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _validateChildrenAreNumerical(::MolangVersion const) const;
#else // @header-generator platform
    MCNAPI bool _validateChildrenAreNumerical(::MolangVersion const version) const;
#endif // @header-generator platform

    MCNAPI bool areAllChildrenEqual() const;

    MCNAPI void clear();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool findClosingOp(ulong&, ::ExpressionOp) const;
#else // @header-generator platform
    MCNAPI bool findClosingOp(uint64& i, ::ExpressionOp endOp) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong getTreeHash(bool) const;
#else // @header-generator platform
    MCNAPI uint64 getTreeHash(bool sideEffectsReturnZero) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getTreeString(std::string&, bool) const;

    MCNAPI bool isInitialized() const;
#else // @header-generator platform
    MCNAPI bool getTreeString(::std::string& dest, bool sideEffectsReturnZero) const;
#endif // @header-generator platform

    MCNAPI bool isValid() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::nonstd::expected<Molang::details::Program, MolangCompileResult> link(::MolangVersion);
#else // @header-generator platform
    MCNAPI ::nonstd::expected<::Molang::details::Program, ::MolangCompileResult> link(::MolangVersion version);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void moveConstantChildToValueIfFloatOrHashType(int);
#else // @header-generator platform
    MCNAPI void moveConstantChildToValueIfFloatOrHashType(int firstConstChildIndex);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Molang::details::ExpressionNode& operator=(float);
#else // @header-generator platform
    MCNAPI ::Molang::details::ExpressionNode& operator=(::Molang::details::ExpressionNode&& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Molang::details::ExpressionNode& operator=(::Molang::details::ExpressionNode&&);
#else // @header-generator platform
    MCNAPI ::Molang::details::ExpressionNode& operator=(float value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::Molang::details::ExpressionNode const&) const;
#else // @header-generator platform
    MCNAPI bool operator==(::Molang::details::ExpressionNode const& rhs) const;
#endif // @header-generator platform

    MCNAPI bool optimizeFunctionCallParams();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool parse(::Json::Value const&, ::MolangParseConfig const&, ::brstd::bitset<109, ulong>&);
#else // @header-generator platform
    MCNAPI bool parse(
        ::std::string_view            inputExpression,
        ::MolangParseConfig const&    config,
        ::brstd::bitset<109, uint64>& usedTokenFlags
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool parse(std::string_view, ::MolangParseConfig const&, ::brstd::bitset<109, ulong>&);
#else // @header-generator platform
    MCNAPI bool
    parse(::Json::Value const& value, ::MolangParseConfig const& config, ::brstd::bitset<109, uint64>& usedTokenFlags);
#endif // @header-generator platform

    MCNAPI bool processArrays();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool processBinaryExpression(::ExpressionOp);
#else // @header-generator platform
    MCNAPI bool processBinaryExpression(::ExpressionOp op);
#endif // @header-generator platform

    MCNAPI bool processMathFuncs();

    MCNAPI bool processNegativesAndLogicalNots();

    MCNAPI bool processQueriesAndFunctions();

    MCNAPI bool processSections();

    MCNAPI bool processSemicolons();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool processUnaryExpression(::ExpressionOp);
#else // @header-generator platform
    MCNAPI bool processUnaryExpression(::ExpressionOp op);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void replaceArrayVariables(std::unordered_map<HashedString, Molang::details::ExpressionNode>&);
#else // @header-generator platform
    MCNAPI void replaceArrayVariables(::std::unordered_map<::HashedString, ::Molang::details::ExpressionNode>& dataMap);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::brstd::flat_set<HashedString, std::less<HashedString>, std::vector<HashedString>>
    replaceResourceVariables(std::unordered_map<HashedString, ExpressionNode::ResourceReference>&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ::brstd::flat_set<::HashedString, ::std::less<::HashedString>, ::std::vector<::HashedString>>
    replaceResourceVariables(::std::unordered_map<::HashedString, ::ExpressionNode::ResourceReference>& resourceTable);
#endif
#endif // @header-generator platform

    MCNAPI void validateArrayVariables() const;

    MCNAPI ~ExpressionNode();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::MolangCompileResult _buildProgram(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Molang::details::MolangProgramBuildState&,
        ::Molang::details::ExpressionNode const*,
        ::MolangVersion
#else // @header-generator platform
        ::Molang::details::MolangProgramBuildState& buildState,
        ::Molang::details::ExpressionNode const*    node,
        ::MolangVersion                             molangVersion
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::MolangScriptArg*
    _getOrCreateReferencedMemberVariableScriptArg(::MolangEvalParams&, ::Molang::details::ExpressionNode const&);

    MCNAPI static ::MolangScriptArg const*
    _getScriptArgFromMemberAccessedVariable(::MolangEvalParams&, ::Molang::details::ExpressionNode const&);

    MCNAPI static void _writeScriptArgToMemberAccessedVariable(
        ::MolangEvalParams&,
        ::Molang::details::ExpressionNode const&,
        ::MolangScriptArg const&
#else // @header-generator platform
    MCNAPI static ::MolangScriptArg* _getOrCreateReferencedMemberVariableScriptArg(
        ::MolangEvalParams&                      state,
        ::Molang::details::ExpressionNode const& memberAccessorNode
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string& toLowerInPlaceExceptStrings(std::string&);
#else // @header-generator platform
    MCNAPI static ::MolangScriptArg const* _getScriptArgFromMemberAccessedVariable(
        ::MolangEvalParams&                      state,
        ::Molang::details::ExpressionNode const& memberAccessorNode
    );

    MCNAPI static void _writeScriptArgToMemberAccessedVariable(
        ::MolangEvalParams&                      state,
        ::Molang::details::ExpressionNode const& memberAccessorNode,
        ::MolangScriptArg const&                 value
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Molang::details::ExpressionNode const&);
#else // @header-generator platform
    MCNAPI void* $ctor(::Molang::details::ExpressionNode&& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Molang::details::ExpressionNode&&);
#else // @header-generator platform
    MCNAPI void* $ctor(::Molang::details::ExpressionNode const& rhs);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Molang::details
