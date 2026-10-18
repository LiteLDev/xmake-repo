#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/util/molang/CompiledExpressionWithContentScope.h"
#endif // @header-generator platform
#include "mc/util/molang/ExpressionOp.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/util/molang/SourceTree.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Molang::details { class ExpressionNode; }
namespace Molang::details { class IComplexExpression; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Molang::details { class Program; }
#ifndef LL_GENERATED_ANDROID_BASE_STUB_MOLANG__DETAILS__COMPILEDEXPRESSION
#define LL_GENERATED_ANDROID_BASE_STUB_MOLANG__DETAILS__COMPILEDEXPRESSION
namespace Molang::details { class CompiledExpression {}; }
#endif
#else // @header-generator platform
namespace Molang::details { class SourceTree; }
#endif // @header-generator platform
// clang-format on

namespace Molang::details {

#if defined(LL_PLAT_A) // @header-generator platform
class CompiledExpressionWithSource : public ::Molang::details::CompiledExpression {
#else // @header-generator platform
class CompiledExpressionWithSource : public ::Molang::details::CompiledExpressionWithContentScope {
#endif // @header-generator platform
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 144, ::Molang::details::SourceTree> mSource;
#else // @header-generator platform
// member variables
// NOLINTBEGIN
#ifdef LL_PLAT_S
    ::ll::UntypedStorage<8, 144> mUnk36c341;
#else // LL_PLAT_C
    ::ll::UntypedStorage<8, 152> mUnk36c341;
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    CompiledExpressionWithSource& operator=(CompiledExpressionWithSource const&);
    CompiledExpressionWithSource(CompiledExpressionWithSource const&);
#endif // @header-generator platform
    CompiledExpressionWithSource();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~CompiledExpressionWithSource();
#else // @header-generator platform
    virtual ::std::unique_ptr<::Molang::details::IComplexExpression> clone() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<Molang::details::IComplexExpression> clone() const;
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
    virtual ::ExpressionOp getOp() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ExpressionOp getOp() const;
#else // @header-generator platform
    virtual bool needsToCompile() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool needsToCompile() const;

    virtual ::Molang::details::SourceTree* getSource();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::Molang::details::SourceTree* getSource() /*override*/;
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

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $replaceArrayVariables(std::unordered_map<HashedString, Molang::details::ExpressionNode>&);
#else // @header-generator platform
    MCNAPI void
    $replaceArrayVariables(::std::unordered_map<::HashedString, ::Molang::details::ExpressionNode>& dataMap);
#endif // @header-generator platform

    MCNAPI void $validateArrayVariables() const;

    MCNAPI ::ExpressionOp $getOp() const;

    MCNAPI bool $needsToCompile() const;

    MCNAPI ::Molang::details::SourceTree* $getSource();
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Molang::details
