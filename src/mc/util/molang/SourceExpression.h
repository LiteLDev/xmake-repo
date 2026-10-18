#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/util/molang/ExpressionOp.h"
#include "mc/util/molang/IComplexExpression.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/util/molang/SourceTree.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class HashedString;
class RenderParams;
struct MolangScriptArg;
namespace Json { class Value; }
namespace Molang::details { class ExpressionNode; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Molang::details { class SourceTree; }
#endif // @header-generator platform
// clang-format on

namespace Molang::details {

class SourceExpression : public ::Molang::details::IComplexExpression {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 144, ::Molang::details::SourceTree> mSourceTree;
#else // @header-generator platform
// member variables
// NOLINTBEGIN
#ifdef LL_PLAT_S
    ::ll::UntypedStorage<8, 144> mUnk33d9ea;
#else // LL_PLAT_C
    ::ll::UntypedStorage<8, 152> mUnk33d9ea;
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    SourceExpression& operator=(SourceExpression const&);
    SourceExpression(SourceExpression const&);
#endif // @header-generator platform
    SourceExpression();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SourceExpression();
#else // @header-generator platform
    virtual ::std::unique_ptr<::Molang::details::IComplexExpression> clone() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<Molang::details::IComplexExpression> clone() const;
#else // @header-generator platform
    virtual ::MolangScriptArg const& evalGeneric(::RenderParams&) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::MolangScriptArg const& evalGeneric(::RenderParams&) const;
#else // @header-generator platform
    virtual bool isInitialized() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isInitialized() const;
#else // @header-generator platform
    virtual ::Json::Value toJson() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Json::Value toJson() const;
#else // @header-generator platform
    virtual ::std::string getExpressionString() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getExpressionString() const;
#else // @header-generator platform
    virtual ::MolangVersion getMolangVersion() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::MolangVersion getMolangVersion() const;
#else // @header-generator platform
    virtual void replaceArrayVariables(
        ::std::unordered_map<::HashedString, ::Molang::details::ExpressionNode>& dataMap
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void replaceArrayVariables(std::unordered_map<HashedString, Molang::details::ExpressionNode>&);
#else // @header-generator platform
    virtual void validateArrayVariables() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void validateArrayVariables() const;
#else // @header-generator platform
    virtual bool isValid() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isValid() const;
#else // @header-generator platform
    virtual bool isConstantValue() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isConstantValue() const;
#else // @header-generator platform
    virtual bool hasVariableAssignments() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasVariableAssignments() const;
#else // @header-generator platform
    virtual ::ExpressionOp getOp() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ExpressionOp getOp() const;
#else // @header-generator platform
    virtual bool needsToCompile() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool needsToCompile() const;
#else // @header-generator platform
    virtual ::std::optional<::MolangScriptArg> getValueIfConstant() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<MolangScriptArg> getValueIfConstant() const;

    virtual ::Molang::details::SourceTree* getSource();
#else // @header-generator platform
    virtual ::Molang::details::SourceTree* getSource() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SourceExpression(::MolangScriptArg, ::ExpressionOp);
#else // @header-generator platform
    MCNAPI SourceExpression(::MolangScriptArg value, ::ExpressionOp op);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::MolangScriptArg, ::ExpressionOp);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(::MolangScriptArg value, ::ExpressionOp op);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<Molang::details::IComplexExpression> $clone() const;
#else // @header-generator platform
    MCNAPI ::std::unique_ptr<::Molang::details::IComplexExpression> $clone() const;
#endif // @header-generator platform

    MCNAPI ::MolangScriptArg const& $evalGeneric(::RenderParams&) const;

    MCNAPI bool $isInitialized() const;

    MCNAPI ::Json::Value $toJson() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getExpressionString() const;
#else // @header-generator platform
    MCNAPI ::std::string $getExpressionString() const;
#endif // @header-generator platform

    MCNAPI ::MolangVersion $getMolangVersion() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $replaceArrayVariables(std::unordered_map<HashedString, Molang::details::ExpressionNode>&);
#else // @header-generator platform
    MCNAPI void
    $replaceArrayVariables(::std::unordered_map<::HashedString, ::Molang::details::ExpressionNode>& dataMap);
#endif // @header-generator platform

    MCNAPI void $validateArrayVariables() const;

    MCNAPI bool $isValid() const;

    MCNAPI bool $isConstantValue() const;

    MCNAPI bool $hasVariableAssignments() const;

    MCNAPI ::ExpressionOp $getOp() const;

    MCNAPI bool $needsToCompile() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<MolangScriptArg> $getValueIfConstant() const;
#else // @header-generator platform
    MCNAPI ::std::optional<::MolangScriptArg> $getValueIfConstant() const;
#endif // @header-generator platform

    MCNAPI ::Molang::details::SourceTree* $getSource();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Molang::details
